/*
 * XREFs of PfSnBeginScenario @ 0x1407DCF7C
 * Callers:
 *     PfSnOperationProcess @ 0x1407D8338 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x1407DCCD8 (PfSnBeginAppLaunch.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     PfSnStartTraceTimer @ 0x14035FC04 (PfSnStartTraceTimer.c)
 *     PfSnLogIdentifier @ 0x1406D8B90 (PfSnLogIdentifier.c)
 *     PfSnPrefetchScenario @ 0x1407D7AE0 (PfSnPrefetchScenario.c)
 *     PfSnGetPrefetchInstructions @ 0x1407D84EC (PfSnGetPrefetchInstructions.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 *     PfSnLogScenarioDecision @ 0x1407DD250 (PfSnLogScenarioDecision.c)
 *     PfSnCheckActionsNeeded @ 0x1407DD3D0 (PfSnCheckActionsNeeded.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(void *a1, _OWORD *a2, int a3, unsigned int a4, const void **a5)
{
  __int64 CurrentThread; // r13
  int v6; // esi
  __int64 v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r12d
  _BYTE *v13; // r14
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rsi
  unsigned int started; // r15d
  unsigned int v18; // edx
  int v19; // eax
  char v20; // [rsp+40h] [rbp-20h]
  int v21; // [rsp+44h] [rbp-1Ch] BYREF
  int v22; // [rsp+48h] [rbp-18h] BYREF
  int v23; // [rsp+4Ch] [rbp-14h]
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  struct _EX_RUNDOWN_REF *v25; // [rsp+58h] [rbp-8h] BYREF

  CurrentThread = (__int64)KeGetCurrentThread();
  v6 = a3;
  v23 = -1;
  v21 = 0;
  v8 = (__int64)a2;
  v22 = 0;
  v9 = 0;
  v20 = *(_BYTE *)(CurrentThread + 562);
  v10 = -1LL;
  P = 0LL;
  v25 = 0LL;
  *(_BYTE *)(CurrentThread + 562) = 0;
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
  {
    started = 1075380276;
    goto LABEL_22;
  }
  v12 = v11 + 1;
  if ( v11 + 1 + _InterlockedExchangeAdd(&dword_140C546F0, v11 + 1) < (unsigned int)dword_140C54388 )
  {
    v9 = PfSnCheckActionsNeeded(v8, v6, CurrentThread, (unsigned int)&v21, (__int64)&v22);
    if ( (a4 & 2) != 0 )
    {
      v9 &= ~2u;
      v22 = 9;
    }
    if ( (v9 & 2) != 0 )
    {
      if ( (int)PfSnGetPrefetchInstructions(v8, v6, &P) >= 0 )
      {
        v13 = P;
        v10 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 16);
        if ( v10 < *((_QWORD *)P + 24) && v21 != 22 )
        {
          v9 &= ~1u;
          v21 = 11;
        }
        v23 = *((_DWORD *)P + 50);
LABEL_7:
        if ( (a4 & 4) != 0 )
        {
          v9 &= ~1u;
          v21 = 8;
        }
        if ( ((unsigned __int8)v9 & (unsigned __int8)v12) != 0 )
        {
          v14 = PfSnBeginTrace(
                  a2,
                  v6,
                  a1,
                  (struct _KTHREAD *)(CurrentThread & -(__int64)(((unsigned __int8)v12 & (unsigned __int8)a4) != 0)),
                  v12 & (a4 >> 3),
                  (__int64 *)&v25);
          if ( v14 < 0 )
          {
            switch ( v14 )
            {
              case -1073741618:
                v21 = 16;
                break;
              case -1073741670:
                v21 = 17;
                break;
              case -1072037882:
                v21 = 18;
                break;
              case -1073741791:
                v21 = 19;
                break;
              default:
                v21 = (v14 != -1073741661) + 20;
                break;
            }
          }
          v15 = v25;
          if ( v25 && a5 )
            PfSnLogIdentifier((__int64)v25, a5);
        }
        else
        {
          v15 = v25;
        }
        if ( (v9 & 2) != 0 )
        {
          v18 = a4 | 0x10;
          if ( (v13[208] & 3) == 0 )
            v18 = a4;
          v19 = PfSnPrefetchScenario(v13, v18);
          P = 0LL;
          v13 = 0LL;
          if ( v19 >= 0 )
            LOBYTE(v12) = 0;
        }
        started = 0;
        if ( !(_BYTE)v12 )
          goto LABEL_17;
        goto LABEL_16;
      }
      v9 &= ~2u;
      v22 = 10;
    }
    v13 = P;
    goto LABEL_7;
  }
  v21 = v11 + 1;
  started = -1073741631;
  v22 = v11 + 1;
LABEL_16:
  _InterlockedDecrement(&dword_140C546F0);
  v13 = P;
  v15 = v25;
LABEL_17:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v15 )
  {
    started = PfSnStartTraceTimer(v15);
    ExReleaseRundownProtection(v15 + 45);
  }
  LODWORD(v8) = (_DWORD)a2;
  v6 = a3;
LABEL_22:
  PfSnLogScenarioDecision(v8, v6, v9, v21, v22, v23, v10);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}
