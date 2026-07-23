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
  __int64 v9; // rcx
  __int64 v10; // r15
  _BOOL8 v11; // r12
  _KPROCESS *Process; // rax
  int v13; // r13d
  struct _EX_RUNDOWN_REF *v15; // [rsp+38h] [rbp-70h] BYREF
  int v16[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  char PreviousMode; // [rsp+B8h] [rbp+10h]
  int v21; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v22; // [rsp+C8h] [rbp+20h]

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v15 = 0LL;
  v4 = ExpCaptureWnfStateName(StateName, &v17, PreviousMode);
  if ( v4 >= 0 )
  {
    v7 = v17;
    v8 = v17 >> 4;
    v9 = (v17 >> 6) & 0xF;
    v19 = v9;
    v10 = (v17 >> 4) & 3;
    if ( ((v17 >> 4) & 3) == 0 )
    {
      v4 = -1073741811;
      goto LABEL_19;
    }
    v11 = (_BYTE)v5 == 0;
    if ( (_DWORD)v10 != 3 )
    {
      if ( (_BYTE)v5 )
      {
        v4 = ExpWnfLookupPermanentName(v17, &P);
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
      v21 = 1;
      v9 = v19;
      LOBYTE(v5) = PreviousMode;
    }
    if ( (_BYTE)v5 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v7 = v17;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v22 = Process;
    if ( (_DWORD)v10 == 3 )
    {
      v4 = ExpWnfResolveScopeInstance((int)v16, (int)Process, 0, v9, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v16;
      if ( v4 < 0 )
        goto LABEL_19;
    }
    else
    {
      v4 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v9, 0LL);
    }
    if ( v2 )
    {
      v13 = v8 & 3;
      while ( 1 )
      {
        v4 = ExpWnfLookupNameInstance(v2, v7, &v15);
        if ( v4 >= 0 )
        {
          if ( !v11 )
          {
            v4 = ExpWnfCheckCallerAccess(v15[9].Ptr, 0x10000u);
            if ( v4 < 0 )
              goto LABEL_19;
            LODWORD(v11) = 1;
          }
          if ( v13 == 3LL && (_KPROCESS *)v15[19].Count != v22 )
          {
            v4 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v15, 16LL, 1LL);
          if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v2, v15, 1) )
            v15 = 0LL;
          else
            v4 = -1073741772;
        }
        if ( v13 != 3LL )
        {
          if ( v15 )
          {
            ExReleaseRundownProtection_0(v15 + 1);
            v15 = 0LL;
          }
          v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v19, v2);
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
  if ( v21 )
    v4 = 0;
  if ( v15 )
    ExReleaseRundownProtection_0(v15 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v5, v6);
  return v4;
}
