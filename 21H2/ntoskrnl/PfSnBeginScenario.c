/*
 * XREFs of PfSnBeginScenario @ 0x14067A4B4
 * Callers:
 *     PfSnOperationProcess @ 0x1406193A4 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x14067A99C (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnStartTraceTimer @ 0x140246098 (PfSnStartTraceTimer.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     PfSnPrefetchScenario @ 0x140612630 (PfSnPrefetchScenario.c)
 *     PfSnLogIdentifier @ 0x140617660 (PfSnLogIdentifier.c)
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     PfSnLogScenarioDecision @ 0x14067A78C (PfSnLogScenarioDecision.c)
 *     PfSnGetPrefetchInstructions @ 0x1406A5F08 (PfSnGetPrefetchInstructions.c)
 *     PfSnBeginTrace @ 0x1406C859C (PfSnBeginTrace.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnBeginScenario(
        __int64 a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        const void **a5)
{
  __int64 CurrentThread; // r13
  unsigned int v6; // esi
  unsigned __int8 *v8; // r14
  int v9; // ebx
  __int64 v10; // rdi
  int v11; // r8d
  int v12; // r12d
  _BYTE *v13; // r14
  struct _EX_RUNDOWN_REF *v14; // rsi
  unsigned int started; // r15d
  int v17; // ecx
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
  v8 = a2;
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
    goto LABEL_19;
  }
  v12 = v11 + 1;
  if ( v11 + 1 + _InterlockedExchangeAdd(&dword_140C504F0, v11 + 1) < (unsigned int)dword_140C50188 )
  {
    v9 = PfSnCheckActionsNeeded(v8, v6, CurrentThread, &v21, &v22);
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
          v17 = PfSnBeginTrace(
                  a2,
                  v6,
                  a1,
                  CurrentThread & -(__int64)(((unsigned __int8)v12 & (unsigned __int8)a4) != 0),
                  v12 & (a4 >> 3),
                  &v25);
          if ( v17 < 0 )
          {
            switch ( v17 )
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
                v21 = (v17 != -1073741661) + 20;
                break;
            }
          }
          v14 = v25;
          if ( v25 && a5 )
            PfSnLogIdentifier((__int64)v25, a5);
        }
        else
        {
          v14 = v25;
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
          goto LABEL_14;
        goto LABEL_13;
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
LABEL_13:
  _InterlockedDecrement(&dword_140C504F0);
  v13 = P;
  v14 = v25;
LABEL_14:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v14 )
  {
    started = PfSnStartTraceTimer(v14);
    ExReleaseRundownProtection(v14 + 45);
  }
  LODWORD(v8) = (_DWORD)a2;
  v6 = a3;
LABEL_19:
  PfSnLogScenarioDecision((_DWORD)v8, v6, v9, v21, v22, v23, v10);
  *(_BYTE *)(CurrentThread + 562) = v20;
  return started;
}
