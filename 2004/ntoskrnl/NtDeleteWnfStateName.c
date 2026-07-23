/*
 * XREFs of NtDeleteWnfStateName @ 0x1406211F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExpWnfDeleteNameInstance @ 0x140620DAC (ExpWnfDeleteNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406220E0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpCaptureWnfStateName @ 0x140623534 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406235A4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x140623C90 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14070E388 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x140710E48 (ExpWnfDeletePermanentName.c)
 *     ExpWnfDeletePermanentStateData @ 0x1409594D4 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  NTSTATUS v3; // esi
  char v4; // r8
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r15
  _BOOL8 v9; // r12
  _KPROCESS *Process; // rax
  int v11; // r13d
  struct _EX_RUNDOWN_REF *v13; // [rsp+38h] [rbp-70h] BYREF
  int v14[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-50h]
  char PreviousMode; // [rsp+B8h] [rbp+10h]
  int v19; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v20; // [rsp+C8h] [rbp+20h]

  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v14 = 0LL;
  v13 = 0LL;
  v3 = ExpCaptureWnfStateName(StateName, &v15, PreviousMode);
  if ( v3 >= 0 )
  {
    v5 = v15;
    v6 = v15 >> 4;
    v7 = (v15 >> 6) & 0xF;
    v17 = v7;
    v8 = (v15 >> 4) & 3;
    if ( ((v15 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_19;
    }
    v9 = v4 == 0;
    if ( (_DWORD)v8 != 3 )
    {
      if ( v4 )
      {
        v3 = ExpWnfLookupPermanentName(v15, &P);
        if ( v3 < 0 )
          goto LABEL_19;
        v3 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v3 < 0 )
          goto LABEL_19;
        LODWORD(v9) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v5);
      if ( v3 < 0 )
        goto LABEL_19;
      v19 = 1;
      v7 = v17;
      v4 = PreviousMode;
    }
    if ( v4 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v5 = v15;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v20 = Process;
    if ( (_DWORD)v8 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((int)v14, (int)Process, 0, v7, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v14;
      if ( v3 < 0 )
        goto LABEL_19;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v7, 0LL);
    }
    if ( v2 )
    {
      v11 = v6 & 3;
      while ( 1 )
      {
        v3 = ExpWnfLookupNameInstance(v2, v5, &v13);
        if ( v3 >= 0 )
        {
          if ( !v9 )
          {
            v3 = ExpWnfCheckCallerAccess(v13[9].Ptr, 0x10000u);
            if ( v3 < 0 )
              goto LABEL_19;
            LODWORD(v9) = 1;
          }
          if ( v11 == 3LL && (_KPROCESS *)v13[19].Count != v20 )
          {
            v3 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v13, 16LL, 1LL);
          if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v2, v13, 1) )
            v13 = 0LL;
          else
            v3 = -1073741772;
        }
        if ( v11 != 3LL )
        {
          if ( v13 )
          {
            ExReleaseRundownProtection_0(v13 + 1);
            v13 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v17, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v5 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v5);
  }
LABEL_19:
  if ( v19 )
    v3 = 0;
  if ( v13 )
    ExReleaseRundownProtection_0(v13 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
