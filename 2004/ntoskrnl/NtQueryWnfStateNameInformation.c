/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x1406F6990
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1406234D8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x140623534 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1406235A4 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406236A4 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140623B18 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x140623C90 (ExpWnfCheckCallerAccess.c)
 *     ExpWnfLookupPermanentName @ 0x14063CBD0 (ExpWnfLookupPermanentName.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140707BF4 (ExpWnfCheckCrossScopeAccess.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  NTSTATUS v10; // esi
  char v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // r14d
  int v14; // eax
  ACCESS_MASK v15; // r13d
  __int64 v16; // r8
  struct _KTHREAD *v17; // rax
  PEPROCESS Process; // rdx
  int v19; // eax
  void *v20; // rcx
  __int64 v21; // r9
  int v23; // [rsp+3Ch] [rbp-8Ch]
  int v24; // [rsp+40h] [rbp-88h]
  int v25; // [rsp+44h] [rbp-84h]
  __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-78h] BYREF
  int v28; // [rsp+58h] [rbp-70h]
  int v29[2]; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[4]; // [rsp+70h] [rbp-58h] BYREF
  PVOID v32[7]; // [rsp+90h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  v27 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v29 = 0LL;
  v26 = 0LL;
  v24 = 0;
  *(_OWORD *)v32 = 0LL;
  v10 = ExpCaptureWnfStateName((__int64 *)StateName, &v27, PreviousMode);
  if ( v10 >= 0 )
  {
    v12 = v27;
    v28 = (v27 >> 4) & 3;
    v24 = (v27 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId(v24, ExplicitScope, v11, (__int64 *)Sid, (__int64)v32);
    if ( v10 >= 0 )
    {
      if ( (unsigned int)NameInfoClass > WnfInfoIsQuiescent )
      {
        v10 = -1073741821;
      }
      else
      {
        if ( InfoBufferSize >= 4 )
        {
          if ( PreviousMode )
            ProbeForWrite(v5, InfoBufferSize, 4u);
          v13 = 1;
          if ( NameInfoClass )
          {
            v25 = 0;
          }
          else
          {
            v25 = 1;
            if ( ExplicitScope )
            {
              v10 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            v23 = 0;
            if ( ExplicitScope )
            {
              v10 = ExpWnfCheckCrossScopeAccess(v12);
              if ( v10 < 0 )
                goto LABEL_52;
              v14 = 0;
            }
          }
          else
          {
            v14 = 1;
            v23 = 1;
          }
          v15 = 0;
          if ( !v14 && (unsigned int)(NameInfoClass - 1) <= 1 )
            v15 = 2;
          v16 = 0LL;
          if ( PreviousMode )
          {
            v17 = KeGetCurrentThread();
            Process = v17->ApcState.Process;
            v12 = v27;
            if ( !v25 )
              v16 = (__int64)v17;
          }
          else
          {
            Process = PsInitialSystemProcess;
          }
          v10 = ExpWnfResolveScopeInstance(
                  (struct _EX_RUNDOWN_REF **)v29,
                  (__int64)Process,
                  v16,
                  v24,
                  (__int64 *)Sid[0]);
          if ( v10 < 0 )
            goto LABEL_52;
          v19 = ExpWnfLookupNameInstance(*(__int64 *)v29, v12, &v26);
          v10 = v19;
          if ( v19 != -1073741772 || v28 == 3 )
          {
            if ( v19 < 0 )
              goto LABEL_52;
            if ( v23 )
              goto LABEL_29;
            v20 = *(void **)(v26 + 72);
          }
          else
          {
            v10 = ExpWnfLookupPermanentName(v12, (PSECURITY_DESCRIPTOR **)&P);
            if ( v10 < 0 )
              goto LABEL_52;
            if ( v23 )
            {
LABEL_29:
              if ( NameInfoClass )
              {
                if ( NameInfoClass == WnfInfoSubscribersPresent )
                {
                  if ( v26 && *(_DWORD *)(v26 + 160) )
                    goto LABEL_36;
                }
                else if ( !v26 || !*(_DWORD *)(v26 + 164) )
                {
                  goto LABEL_36;
                }
                v13 = 0;
              }
LABEL_36:
              *(_DWORD *)InfoBuffer = v13;
              v10 = 0;
              v5 = InfoBuffer;
              goto LABEL_37;
            }
            v20 = (void *)*((_QWORD *)P + 2);
          }
          v10 = ExpWnfCheckCallerAccess(v20, v15);
          if ( v10 >= 0 )
            goto LABEL_29;
LABEL_52:
          v5 = InfoBuffer;
          goto LABEL_37;
        }
        v10 = -1073741811;
      }
    }
  }
LABEL_37:
  if ( v10 == -1073741772 && NameInfoClass == WnfInfoStateNameExist )
  {
    *v5 = 0;
    v10 = 0;
  }
  if ( v26 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v26 + 8));
  if ( *(_QWORD *)v29 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v29 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  ExpWnfReleaseCapturedScopeInstanceId(v24, v32, PreviousMode, v21);
  return v10;
}
