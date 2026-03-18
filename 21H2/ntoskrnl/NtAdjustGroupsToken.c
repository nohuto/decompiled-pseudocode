/*
 * XREFs of NtAdjustGroupsToken @ 0x140662780
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepAdjustGroups @ 0x140662AC8 (SepAdjustGroups.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406651C8 (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     SeCaptureSidAndAttributesArray @ 0x140799DB0 (SeCaptureSidAndAttributesArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustGroupsToken(
        HANDLE TokenHandle,
        BOOLEAN ResetToDefault,
        PTOKEN_GROUPS NewState,
        ULONG BufferLength,
        PTOKEN_GROUPS PreviousState,
        PULONG ReturnLength)
{
  void *v9; // r12
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rdx
  int v15; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // r8d
  __int64 v20; // r14
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rdx
  signed __int32 v26[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v29; // [rsp+50h] [rbp-58h]
  __int64 v30; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v31; // [rsp+5Ch] [rbp-4Ch]
  int GroupCount; // [rsp+60h] [rbp-48h]
  _DWORD Object[3]; // [rsp+64h] [rbp-44h] BYREF
  __int64 v34; // [rsp+70h] [rbp-38h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v36; // [rsp+C8h] [rbp+20h]

  v36 = BufferLength;
  GroupCount = 0;
  v34 = 0LL;
  Object[0] = 0;
  v30 = 0LL;
  LOBYTE(v35) = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ResetToDefault )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
    }
    v12 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
  }
  else
  {
    v12 = PreviousState;
  }
  if ( ResetToDefault
    || (GroupCount = NewState->GroupCount,
        result = SeCaptureSidAndAttributesArray(
                   NewState->Groups,
                   0,
                   (int)HandleInformation,
                   (int)DestinationSid,
                   (__int64)&v34,
                   (__int64)Object),
        v31 = result,
        result >= 0) )
  {
    *(_QWORD *)&Object[1] = 0LL;
    v15 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            (PVOID *)&Object[1],
            0LL);
    if ( v15 < 0 )
    {
      if ( v34 )
      {
        LOBYTE(v14) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v34, v14);
      }
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = *(_QWORD *)&Object[1];
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&Object[1] + 48LL), 1u);
      _InterlockedOr(v26, 0);
      v18 = v34;
      LOBYTE(v19) = ResetToDefault;
      v20 = *(_QWORD *)&Object[1];
      v21 = SepAdjustGroups(
              Object[1],
              0,
              v19,
              GroupCount,
              v34,
              (__int64)v12,
              0LL,
              (__int64)&v30,
              (__int64)&v30 + 4,
              (__int64)&v35);
      v31 = v21;
      if ( v12 )
      {
        v22 = (int)ReturnLength;
        *ReturnLength = v30;
      }
      if ( v21 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v23) = ResetToDefault;
        LOBYTE(v22) = 1;
        v31 = SepAdjustGroups(
                v20,
                v22,
                v23,
                GroupCount,
                v18,
                (__int64)v12,
                v9,
                (__int64)&v30,
                (__int64)&v30 + 4,
                (__int64)&v35);
        if ( v12 )
          v12->GroupCount = HIDWORD(v30);
        if ( (_BYTE)v35 )
          *(_QWORD *)(v20 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v26, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        ObfDereferenceObject(*(PVOID *)&Object[1]);
        if ( v34 )
        {
          LOBYTE(v24) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v34, v24);
        }
        return v31;
      }
      if ( (unsigned int)v30 <= v36 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[0].Sid + (unsigned int)(16 * HIDWORD(v30)) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v26, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObject(*(PVOID *)&Object[1]);
      if ( v34 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v34, v25);
      }
      return -1073741789;
    }
  }
  return result;
}
