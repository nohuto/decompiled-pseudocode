/*
 * XREFs of NtDeleteWnfStateName @ 0x140666910
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfDeleteNameInstance @ 0x1406664CC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140667800 (ExpWnfNotifyNameSubscribers.c)
 *     ExpCaptureWnfStateName @ 0x140668C54 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x140668CC4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140668DC4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x1406693B0 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14068A1F4 (ExpWnfLookupPermanentName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406EA720 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x1406ED2C8 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x140958134 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // r14
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // r15
  BOOL v13; // r12d
  _KPROCESS *Process; // rax
  int v15; // r13d
  struct _EX_RUNDOWN_REF *v17; // [rsp+38h] [rbp-70h] BYREF
  int v18[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+B8h] [rbp+10h]
  int v23; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v24; // [rsp+C8h] [rbp+20h]

  v19 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v22 = a3;
  v23 = 0;
  P = 0LL;
  v4 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v17 = 0LL;
  v6 = ExpCaptureWnfStateName(a1, &v19, a3);
  if ( v6 >= 0 )
  {
    v9 = v19;
    v10 = v19 >> 4;
    v11 = (v19 >> 6) & 0xF;
    v21 = v11;
    v12 = (v19 >> 4) & 3;
    if ( ((v19 >> 4) & 3) == 0 )
    {
      v6 = -1073741811;
      goto LABEL_19;
    }
    v13 = (_BYTE)v7 == 0;
    if ( (_DWORD)v12 != 3 )
    {
      if ( (_BYTE)v7 )
      {
        v6 = ExpWnfLookupPermanentName(v19, &P);
        if ( v6 < 0 )
          goto LABEL_19;
        v6 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v6 < 0 )
          goto LABEL_19;
        v13 = 1;
      }
      v6 = ExpWnfDeletePermanentName(v9);
      if ( v6 < 0 )
        goto LABEL_19;
      v23 = 1;
      v11 = v21;
      LOBYTE(v7) = v22;
    }
    if ( (_BYTE)v7 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = v19;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v24 = Process;
    if ( (_DWORD)v12 == 3 )
    {
      v6 = ExpWnfResolveScopeInstance((int)v18, (int)Process, 0, v11, 0LL);
      v4 = *(struct _EX_RUNDOWN_REF **)v18;
      if ( v6 < 0 )
        goto LABEL_19;
    }
    else
    {
      v6 = 0;
      v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v11, 0LL);
    }
    if ( v4 )
    {
      v15 = v10 & 3;
      while ( 1 )
      {
        v6 = ExpWnfLookupNameInstance(v4, v9, &v17);
        if ( v6 >= 0 )
        {
          if ( !v13 )
          {
            v6 = ExpWnfCheckCallerAccess(v17[9].Ptr, 0x10000u);
            if ( v6 < 0 )
              goto LABEL_19;
            v13 = 1;
          }
          if ( v15 == 3LL && (_KPROCESS *)v17[19].Count != v24 )
          {
            v6 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v17, 16LL, 1LL);
          if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v4, v17, 1) )
            v17 = 0LL;
          else
            v6 = -1073741772;
        }
        if ( v15 != 3LL )
        {
          if ( v17 )
          {
            ExReleaseRundownProtection_0(v17 + 1);
            v17 = 0LL;
          }
          v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v21, v4);
          if ( v4 )
            continue;
        }
        break;
      }
    }
    if ( (v9 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v9);
  }
LABEL_19:
  if ( v23 )
    v6 = 0;
  if ( v17 )
    ExReleaseRundownProtection_0(v17 + 1);
  if ( v4 )
    ExReleaseRundownProtection_0(v4 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v7, v8);
  return (unsigned int)v6;
}
