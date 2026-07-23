/*
 * XREFs of NtQueryWnfStateNameInformation @ 0x140604510
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140618AC4 (ExpWnfCheckCrossScopeAccess.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     ExpWnfLookupPermanentName @ 0x140663338 (ExpWnfLookupPermanentName.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14069ED98 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14069EDF4 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x14069EE64 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14069EF64 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14069F3D8 (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfCheckCallerAccess @ 0x14069F550 (ExpWnfCheckCallerAccess.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateNameInformation(
        PCWNF_STATE_NAME StateName,
        WNF_STATE_NAME_INFORMATION NameInfoClass,
        const void *ExplicitScope,
        PVOID InfoBuffer,
        ULONG InfoBufferSize)
{
  _DWORD *v5; // r14
  const void *v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  NTSTATUS v10; // esi
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  int v13; // r14d
  int v14; // eax
  ACCESS_MASK v15; // r13d
  int v16; // r8d
  struct _KTHREAD *v17; // rax
  _KPROCESS *Process; // rdx
  int v19; // eax
  void *v20; // rcx
  __int64 v21; // r8
  int v23; // [rsp+3Ch] [rbp-8Ch]
  unsigned int v24; // [rsp+40h] [rbp-88h]
  int v25; // [rsp+44h] [rbp-84h]
  __int64 v26; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-78h] BYREF
  int v28; // [rsp+58h] [rbp-70h]
  int v29[2]; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  PSID Sid[4]; // [rsp+70h] [rbp-58h] BYREF
  _OWORD v32[3]; // [rsp+90h] [rbp-38h] BYREF

  v5 = InfoBuffer;
  v6 = ExplicitScope;
  v27 = 0LL;
  Sid[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v29 = 0LL;
  v26 = 0LL;
  v24 = 0;
  v32[0] = 0LL;
  LOBYTE(ExplicitScope) = PreviousMode;
  v10 = ExpCaptureWnfStateName(StateName, &v27, ExplicitScope);
  if ( v10 >= 0 )
  {
    v12 = v27;
    v28 = (v27 >> 4) & 3;
    v24 = (v27 >> 6) & 0xF;
    v10 = ExpWnfCaptureScopeInstanceId((v27 >> 6) & 0xF, v6, v11, Sid, v32);
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
            if ( v6 )
            {
              v10 = -1073741811;
              goto LABEL_52;
            }
          }
          if ( PreviousMode && NameInfoClass )
          {
            v14 = 0;
            v23 = 0;
            if ( v6 )
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
          v16 = 0;
          if ( PreviousMode )
          {
            v17 = KeGetCurrentThread();
            Process = v17->ApcState.Process;
            v12 = v27;
            if ( !v25 )
              v16 = (int)v17;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          v10 = ExpWnfResolveScopeInstance((int)v29, (int)Process, v16, v24, Sid[0]);
          if ( v10 < 0 )
            goto LABEL_52;
          v19 = ExpWnfLookupNameInstance(*(_QWORD *)v29, v12, &v26);
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
            v10 = ExpWnfLookupPermanentName(v12, &P);
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
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v26 + 8));
  if ( *(_QWORD *)v29 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v29 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v21) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId(v24, v32, v21);
  return v10;
}
