/*
 * XREFs of NtAdjustGroupsToken @ 0x1406759E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406706E0 (SeReleaseLuidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140673AA0 (SeCaptureSidAndAttributesArray.c)
 *     SepAdjustGroups @ 0x140675D28 (SepAdjustGroups.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
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
  char PreviousMode; // di
  __int64 v11; // rsi
  PTOKEN_GROUPS v12; // rbx
  NTSTATUS result; // eax
  int v14; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  int v18; // r8d
  __int64 v19; // r14
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int32 v29[8]; // [rsp+0h] [rbp-A8h] BYREF
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  PSID DestinationSid; // [rsp+30h] [rbp-78h]
  char v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+54h] [rbp-54h] BYREF
  NTSTATUS v34; // [rsp+5Ch] [rbp-4Ch]
  int GroupCount; // [rsp+60h] [rbp-48h]
  unsigned int Object[3]; // [rsp+64h] [rbp-44h] BYREF
  __int64 v37; // [rsp+70h] [rbp-38h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+10h] BYREF
  ULONG v39; // [rsp+C8h] [rbp+20h]

  v39 = BufferLength;
  GroupCount = 0;
  v37 = 0LL;
  Object[0] = 0;
  v33 = 0LL;
  LOBYTE(v38) = 0;
  v9 = 0LL;
  if ( !ResetToDefault && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
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
                   (char *)NewState->Groups,
                   GroupCount,
                   PreviousMode,
                   0LL,
                   0,
                   (int)HandleInformation,
                   (int)DestinationSid,
                   (PVOID *)&v37,
                   Object),
        v34 = result,
        result >= 0) )
  {
    *(_QWORD *)&Object[1] = 0LL;
    v14 = ObReferenceObjectByHandle(
            TokenHandle,
            v12 != 0LL ? 72 : 64,
            (POBJECT_TYPE)SeTokenObjectType,
            PreviousMode,
            (PVOID *)&Object[1],
            0LL);
    if ( v14 < 0 )
    {
      if ( v37 )
        SeReleaseLuidAndAttributesArray((void *)v37, PreviousMode);
      return v14;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = *(_QWORD *)&Object[1];
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(*(_QWORD *)&Object[1] + 48LL), 1u);
      _InterlockedOr(v29, 0);
      v17 = v37;
      LOBYTE(v18) = ResetToDefault;
      v19 = *(_QWORD *)&Object[1];
      v20 = SepAdjustGroups(
              Object[1],
              0,
              v18,
              GroupCount,
              v37,
              (__int64)v12,
              0LL,
              (__int64)&v33,
              (__int64)&v33 + 4,
              (__int64)&v38);
      v34 = v20;
      if ( v12 )
      {
        v21 = (int)ReturnLength;
        *ReturnLength = v33;
      }
      if ( v20 < 0 )
        goto LABEL_24;
      if ( !v12 )
      {
LABEL_20:
        LOBYTE(v22) = ResetToDefault;
        LOBYTE(v21) = 1;
        v34 = SepAdjustGroups(
                v19,
                v21,
                v22,
                GroupCount,
                v17,
                (__int64)v12,
                v9,
                (__int64)&v33,
                (__int64)&v33 + 4,
                (__int64)&v38);
        if ( v12 )
          v12->GroupCount = HIDWORD(v33);
        if ( (_BYTE)v38 )
          *(_QWORD *)(v19 + 56) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
LABEL_24:
        _InterlockedOr(v29, 0);
        ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v23, v24, v25);
        HalPutDmaAdapter(*(PADAPTER_OBJECT *)&Object[1]);
        if ( v37 )
          SeReleaseLuidAndAttributesArray((void *)v37, PreviousMode);
        return v34;
      }
      if ( (unsigned int)v33 <= v39 )
      {
        v9 = (void *)(((unsigned __int64)&v12->Groups[0].Sid + (unsigned int)(16 * HIDWORD(v33)) + 3) & 0xFFFFFFFFFFFFFFFCuLL);
        goto LABEL_20;
      }
      _InterlockedOr(v29, 0);
      ExReleaseResourceLite(*(PERESOURCE *)(v16 + 48));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&Object[1]);
      if ( v37 )
        SeReleaseLuidAndAttributesArray((void *)v37, PreviousMode);
      return -1073741789;
    }
  }
  return result;
}
