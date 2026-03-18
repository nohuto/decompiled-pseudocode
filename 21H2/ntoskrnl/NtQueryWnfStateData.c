/*
 * XREFs of NtQueryWnfStateData @ 0x140794AD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14075ADF8 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfReadStateData @ 0x1407944BC (ExpWnfReadStateData.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1407945D4 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407946F8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14079474C (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1407947BC (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140798234 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryWnfStateData(
        __int64 *a1,
        __int128 *a2,
        struct _KPROCESS *a3,
        _DWORD *a4,
        volatile void *Address,
        _DWORD *a6)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  unsigned __int64 v9; // r14
  int StateData; // edi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned int *v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  int v21; // r13d
  struct _KTHREAD *v22; // r8
  struct _KPROCESS *Process; // rcx
  int v24; // eax
  _DWORD *v25; // rax
  int v27; // [rsp+3Ch] [rbp-CCh]
  unsigned int v28; // [rsp+40h] [rbp-C8h]
  struct _EX_RUNDOWN_REF *v29; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  int v31[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct _KPROCESS *v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int128 *v35; // [rsp+78h] [rbp-90h]
  PSID Sid; // [rsp+80h] [rbp-88h] BYREF
  _DWORD *v37; // [rsp+88h] [rbp-80h]
  _DWORD *v38; // [rsp+90h] [rbp-78h]
  void *v39; // [rsp+98h] [rbp-70h]
  __int128 v40; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-48h] BYREF

  v38 = a4;
  v32 = a3;
  v37 = a6;
  v39 = (void *)Address;
  v34 = 0LL;
  v41 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v31 = 0LL;
  v29 = 0LL;
  LODWORD(v9) = 0;
  v40 = 0LL;
  v35 = a2;
  StateData = ExpCaptureWnfStateName(a1, &v34, PreviousMode);
  if ( StateData >= 0 )
  {
    if ( PreviousMode )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( v12 )
      {
        v20 = 0x7FFFFFFF0000LL;
        if ( v12 < 0x7FFFFFFF0000LL )
          v20 = v12;
        v41 = *(_OWORD *)v20;
        v35 = &v41;
      }
      v16 = 0x7FFFFFFF0000LL;
      if ( v14 < 0x7FFFFFFF0000LL )
        v16 = v14;
      *(_DWORD *)v16 = *(_DWORD *)v16;
      if ( (unsigned __int64)v13 < 0x7FFFFFFF0000LL )
        v15 = (__int64)v13;
      v28 = *(_DWORD *)v15;
      v17 = *(_DWORD *)v15;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      if ( v17 )
        ProbeForWrite(Address, v17, 1u);
    }
    else
    {
      v28 = *v13;
    }
    v18 = v34;
    v19 = (v34 >> 4) & 3;
    v33 = (v34 >> 4) & 3;
    v9 = (v34 >> 6) & 0xF;
    v27 = (v34 >> 6) & 0xF;
    LOBYTE(v11) = PreviousMode;
    StateData = ExpWnfCaptureScopeInstanceId(v27, (char *)a3, v11, (__int64)&Sid, (__int64)&v40);
    if ( StateData >= 0 )
    {
      if ( PreviousMode )
      {
        v21 = 0;
        if ( v32 )
        {
          StateData = ExpWnfCheckCrossScopeAccess(v18);
          if ( StateData < 0 )
            goto LABEL_29;
        }
      }
      else
      {
        v21 = 1;
      }
      if ( PreviousMode )
      {
        v22 = KeGetCurrentThread();
        Process = v22->ApcState.Process;
        v18 = v34;
        LODWORD(v19) = v33;
        LODWORD(v9) = v27;
      }
      else
      {
        LODWORD(v22) = 0;
        Process = PsInitialSystemProcess;
      }
      v32 = Process;
      StateData = ExpWnfResolveScopeInstance((int)v31, (int)Process, (int)v22, v9, Sid);
      if ( StateData >= 0 )
      {
        v24 = ExpWnfLookupNameInstance(*(_QWORD *)v31, v18, &v29);
        StateData = v24;
        if ( v24 != -1073741772 || (_DWORD)v19 == 3 )
        {
          if ( v24 < 0 )
            goto LABEL_29;
          StateData = ExpWnfValidatePubSubPreconditions(1u, (__int64)&v29[7], 0, v35, v21);
          if ( StateData < 0 )
            goto LABEL_29;
        }
        else
        {
          StateData = ExpWnfLookupPermanentName(v18, (PSECURITY_DESCRIPTOR **)&P);
          if ( StateData < 0 )
            goto LABEL_29;
          StateData = ExpWnfValidatePubSubPreconditions(1u, (__int64)P, 0, v35, v21);
          if ( StateData < 0 )
            goto LABEL_29;
          if ( (_DWORD)v9 == 5 || (v18 & 0x400) != 0 )
          {
            StateData = ExpWnfCreateNameInstance(*(unsigned __int64 *)v31, v18, (__int64)P, v32, &v29);
            ExFreePoolWithTag(P, 0x20666E57u);
            P = 0LL;
            if ( StateData < 0 )
              goto LABEL_29;
          }
        }
        v25 = v37;
        if ( v29 )
        {
          StateData = ExpWnfReadStateData((__int64)v29, v38, v39, v28, v37);
        }
        else
        {
          *v38 = 0;
          *v25 = 0;
          StateData = 0;
        }
      }
    }
  }
LABEL_29:
  if ( v29 )
    ExReleaseRundownProtection(v29 + 1);
  if ( *(_QWORD *)v31 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v31 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  ExpWnfReleaseCapturedScopeInstanceId(v9, (PVOID *)&v40, PreviousMode);
  return (unsigned int)StateData;
}
