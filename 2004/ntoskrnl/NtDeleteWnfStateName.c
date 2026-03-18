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

__int64 __fastcall NtDeleteWnfStateName(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v4; // r14
  int v5; // esi
  char v6; // r8
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r15
  BOOL v11; // r12d
  _KPROCESS *Process; // rax
  int v13; // r13d
  struct _EX_RUNDOWN_REF *v15; // [rsp+38h] [rbp-70h] BYREF
  int v16[2]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h] BYREF
  __int64 v19; // [rsp+58h] [rbp-50h]
  char v20; // [rsp+B8h] [rbp+10h]
  int v21; // [rsp+C0h] [rbp+18h]
  _KPROCESS *v22; // [rsp+C8h] [rbp+20h]

  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
  v20 = a3;
  v21 = 0;
  P = 0LL;
  v4 = 0LL;
  *(_QWORD *)v16 = 0LL;
  v15 = 0LL;
  v5 = ExpCaptureWnfStateName(a1, &v17, a3);
  if ( v5 >= 0 )
  {
    v7 = v17;
    v8 = v17 >> 4;
    v9 = (v17 >> 6) & 0xF;
    v19 = v9;
    v10 = (v17 >> 4) & 3;
    if ( ((v17 >> 4) & 3) == 0 )
    {
      v5 = -1073741811;
      goto LABEL_19;
    }
    v11 = v6 == 0;
    if ( (_DWORD)v10 != 3 )
    {
      if ( v6 )
      {
        v5 = ExpWnfLookupPermanentName(v17, &P);
        if ( v5 < 0 )
          goto LABEL_19;
        v5 = ExpWnfCheckCallerAccess(*((PSECURITY_DESCRIPTOR *)P + 2), 0x10000u);
        if ( v5 < 0 )
          goto LABEL_19;
        v11 = 1;
      }
      v5 = ExpWnfDeletePermanentName(v7);
      if ( v5 < 0 )
        goto LABEL_19;
      v21 = 1;
      v9 = v19;
      v6 = v20;
    }
    if ( v6 )
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
      v5 = ExpWnfResolveScopeInstance((int)v16, (int)Process, 0, v9, 0LL);
      v4 = *(struct _EX_RUNDOWN_REF **)v16;
      if ( v5 < 0 )
        goto LABEL_19;
    }
    else
    {
      v5 = 0;
      v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v9, 0LL);
    }
    if ( v4 )
    {
      v13 = v8 & 3;
      while ( 1 )
      {
        v5 = ExpWnfLookupNameInstance(v4, v7, &v15);
        if ( v5 >= 0 )
        {
          if ( !v11 )
          {
            v5 = ExpWnfCheckCallerAccess(v15[9].Ptr, 0x10000u);
            if ( v5 < 0 )
              goto LABEL_19;
            v11 = 1;
          }
          if ( v13 == 3LL && (_KPROCESS *)v15[19].Count != v22 )
          {
            v5 = -1073741790;
            goto LABEL_19;
          }
          ExpWnfNotifyNameSubscribers(v15, 16LL, 1LL);
          if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v4, v15, 1) )
            v15 = 0LL;
          else
            v5 = -1073741772;
        }
        if ( v13 != 3LL )
        {
          if ( v15 )
          {
            ExReleaseRundownProtection_0(v15 + 1);
            v15 = 0LL;
          }
          v4 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v19, v4);
          if ( v4 )
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
    v5 = 0;
  if ( v15 )
    ExReleaseRundownProtection_0(v15 + 1);
  if ( v4 )
    ExReleaseRundownProtection_0(v4 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
