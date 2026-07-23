/*
 * XREFs of NtAdjustGroupsToken @ 0x1406087B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     SepAdjustGroups @ 0x140608AF8 (SepAdjustGroups.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406980D0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406CCCC0 (SeCaptureSidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  signed __int32 v32[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v35; // [rsp+50h] [rbp-58h]
  __int64 v36; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v37; // [rsp+5Ch] [rbp-4Ch]
  int GroupCount; // [rsp+60h] [rbp-48h]
  _DWORD Object[3]; // [rsp+64h] [rbp-44h] BYREF
  __int64 v40; // [rsp+70h] [rbp-38h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v42; // [rsp+C8h] [rbp+20h]

  v42 = BufferLength;
  GroupCount = 0;
  v40 = 0LL;
  Object[0] = 0;
  v36 = 0LL;
  LOBYTE(v41) = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v35 = PreviousMode;
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
                   (__int64)&v40,
                   (__int64)Object),
        v37 = result,
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
      if ( v40 )
      {
        LOBYTE(v14) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v40, v14);
      }
      return v15;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v17 = *(_QWORD *)&Object[1];
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&Object[1] + 48LL), 1u);
      _InterlockedOr(v32, 0);
      v18 = v40;
      LOBYTE(v19) = ResetToDefault;
      v20 = *(_QWORD *)&Object[1];
      v21 = SepAdjustGroups(
              Object[1],
              0,
              v19,
              GroupCount,
              v40,
              (__int64)v12,
              0LL,
              (__int64)&v36,
              (__int64)&v36 + 4,
              (__int64)&v41);
      v37 = v21;
      if ( v12 )
      {
        v22 = (int)ReturnLength;
        *ReturnLength = v36;
      }
      if ( v21 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v23) = ResetToDefault;
        LOBYTE(v22) = 1;
        v37 = SepAdjustGroups(
                v20,
                v22,
                v23,
                GroupCount,
                v18,
                (__int64)v12,
                v9,
                (__int64)&v36,
                (__int64)&v36 + 4,
                (__int64)&v41);
        if ( v12 )
          v12->GroupCount = HIDWORD(v36);
        if ( (_BYTE)v41 )
          *(_QWORD *)(v20 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v32, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v24, v25, v26);
        HalPutDmaAdapter(*(PADAPTER_OBJECT *)&Object[1]);
        if ( v40 )
        {
          LOBYTE(v27) = PreviousMode;
          SeReleaseLuidAndAttributesArray(v40, v27);
        }
        return v37;
      }
      if ( (unsigned int)v36 <= v42 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[0].Sid + (unsigned int)(16 * HIDWORD(v36)) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v32, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v28, v29, v30);
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&Object[1]);
      if ( v40 )
      {
        LOBYTE(v31) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v40, v31);
      }
      return -1073741789;
    }
  }
  return result;
}
