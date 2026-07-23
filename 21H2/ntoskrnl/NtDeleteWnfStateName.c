/*
 * XREFs of NtDeleteWnfStateName @ 0x14069CE70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14061FA28 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x140621F90 (ExpWnfDeletePermanentName.c)
 *     ExpWnfLookupPermanentName @ 0x140663338 (ExpWnfLookupPermanentName.c)
 *     ExpCaptureWnfStateName @ 0x14069EDF4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14069EE64 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCallerAccess @ 0x14069F550 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406A033C (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfDeleteNameInstance @ 0x1406A0880 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x14095CCD4 (ExpWnfDeletePermanentStateData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  __int64 v3; // rdx
  NTSTATUS v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r15
  _BOOL8 v11; // r12
  _KPROCESS *Process; // rax
  int v13; // r13d
  __int64 v14; // r8
  struct _EX_RUNDOWN_REF *v16; // [rsp+38h] [rbp-70h] BYREF
  int v17[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-50h]
  char PreviousMode; // [rsp+B8h] [rbp+10h]
  int v22; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v23; // [rsp+C8h] [rbp+20h]

  v18 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v17 = 0LL;
  v16 = 0LL;
  v4 = ExpCaptureWnfStateName(StateName, &v18, PreviousMode);
  if ( v4 >= 0 )
  {
    v7 = v18;
    v8 = v18 >> 4;
    v9 = (v18 >> 6) & 0xF;
    v20 = v9;
    v10 = (v18 >> 4) & 3;
    if ( ((v18 >> 4) & 3) == 0 )
    {
      v4 = -1073741811;
      goto LABEL_19;
    }
    v11 = (_BYTE)v5 == 0;
    if ( (_DWORD)v10 != 3 )
    {
      if ( (_BYTE)v5 )
      {
        v4 = ExpWnfLookupPermanentName(v18, (PSECURITY_DESCRIPTOR **)&P);
        if ( v4 < 0 )
          goto LABEL_19;
        v4 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v4 < 0 )
          goto LABEL_19;
        LODWORD(v11) = 1;
      }
      v4 = ExpWnfDeletePermanentName(v7);
      if ( v4 < 0 )
        goto LABEL_19;
      v22 = 1;
      v9 = v20;
      LOBYTE(v5) = PreviousMode;
    }
    if ( (_BYTE)v5 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v7 = v18;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v23 = Process;
    if ( (_DWORD)v10 == 3 )
    {
      v4 = ExpWnfResolveScopeInstance((int)v17, (int)Process, 0, v9, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v17;
      if ( v4 < 0 )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
      v2 = ExpWnfEnumerateScopeInstances(v9, 0LL);
    }
    if ( v2 )
    {
      v13 = v8 & 3;
      while ( 1 )
      {
        v4 = ExpWnfLookupNameInstance(v2, v7, &v16);
        if ( v4 >= 0 )
        {
          if ( !v11 )
          {
            v4 = ExpWnfCheckCallerAccess(v16[9].Ptr, 0x10000u);
            if ( v4 < 0 )
              goto LABEL_19;
            LODWORD(v11) = 1;
          }
          if ( v13 == 3LL && (_KPROCESS *)v16[19].Count != v23 )
          {
            v4 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v16, 16LL, 1LL, PreviousMode != 0);
          LOBYTE(v14) = 1;
          if ( (unsigned int)ExpWnfDeleteNameInstance(v2, v16, v14) )
            v16 = 0LL;
          else
            v4 = -1073741772;
        }
        if ( v13 != 3LL )
        {
          if ( v16 )
          {
            ExReleaseRundownProtection(v16 + 1);
            v16 = 0LL;
          }
          v2 = ExpWnfEnumerateScopeInstances((unsigned int)v20, v2);
          if ( v2 )
            continue;
        }
        break;
      }
    }
    if ( (v7 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v7);
  }
LABEL_19:
  if ( v22 )
    v4 = 0;
  if ( v16 )
    ExReleaseRundownProtection(v16 + 1);
  if ( v2 )
    ExReleaseRundownProtection(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v5, v6);
  return v4;
}
