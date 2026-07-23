/*
 * XREFs of NtAdjustPrivilegesToken @ 0x1406977C0
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x140915FE8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SepAdjustPrivileges @ 0x140697BA0 (SepAdjustPrivileges.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140697FEC (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1406980D0 (SeReleaseLuidAndAttributesArray.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAdjustPrivilegesToken(
        HANDLE TokenHandle,
        BOOLEAN DisableAllPrivileges,
        PTOKEN_PRIVILEGES NewState,
        ULONG BufferLength,
        PTOKEN_PRIVILEGES PreviousState,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v11; // rsi
  char *v12; // rcx
  PTOKEN_PRIVILEGES v13; // rbx
  NTSTATUS result; // eax
  __int64 v15; // rdx
  int v16; // edi
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v18; // rsi
  __int64 v19; // r12
  int v20; // r8d
  _QWORD *v21; // rdi
  int v22; // edx
  int v23; // r8d
  ULONG v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  signed __int32 v33[8]; // [rsp+0h] [rbp-A8h] BYREF
  PVOID *Object; // [rsp+20h] [rbp-88h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-80h]
  __int64 v36; // [rsp+30h] [rbp-78h]
  KPROCESSOR_MODE v37; // [rsp+50h] [rbp-58h]
  ULONG PrivilegeCount; // [rsp+54h] [rbp-54h]
  PVOID v39; // [rsp+58h] [rbp-50h] BYREF
  ULONG v40; // [rsp+60h] [rbp-48h] BYREF
  ULONG v41; // [rsp+64h] [rbp-44h] BYREF
  __int64 v42; // [rsp+68h] [rbp-40h] BYREF
  NTSTATUS v43; // [rsp+70h] [rbp-38h]
  _DWORD v44[3]; // [rsp+74h] [rbp-34h] BYREF
  char v45; // [rsp+B8h] [rbp+10h] BYREF

  PrivilegeCount = 0;
  v42 = 0LL;
  v44[0] = 0;
  v40 = 0;
  v41 = 0;
  v45 = 0;
  if ( !DisableAllPrivileges && !NewState )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( PreviousMode )
  {
    if ( DisableAllPrivileges )
    {
      v11 = 0x7FFFFFFF0000LL;
    }
    else
    {
      if ( ((unsigned __int8)NewState & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = 0x7FFFFFFF0000LL;
      PrivilegeCount = NewState->PrivilegeCount;
      v44[1] = 12 * (PrivilegeCount - 1) + 16;
      if ( 12 * (PrivilegeCount - 1) != -16 )
      {
        v12 = (char *)&NewState->Privileges[PrivilegeCount];
        if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < (char *)NewState )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v13 = PreviousState;
    if ( PreviousState )
    {
      ProbeForWrite(PreviousState, BufferLength, 4u);
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
LABEL_16:
    if ( !DisableAllPrivileges )
    {
      result = SeCaptureLuidAndAttributesArray(
                 NewState->Privileges,
                 (int)Object,
                 (int)HandleInformation,
                 v36,
                 (__int64)&v42,
                 (__int64)v44);
      v43 = result;
      if ( result < 0 )
        return result;
    }
    goto LABEL_18;
  }
  v13 = PreviousState;
  if ( !DisableAllPrivileges )
  {
    PrivilegeCount = NewState->PrivilegeCount;
    goto LABEL_16;
  }
LABEL_18:
  v39 = 0LL;
  v16 = ObReferenceObjectByHandle(
          TokenHandle,
          v13 != 0LL ? 40 : 32,
          (POBJECT_TYPE)SeTokenObjectType,
          PreviousMode,
          &v39,
          0LL);
  if ( v16 < 0 )
  {
    if ( v42 )
    {
      LOBYTE(v15) = PreviousMode;
      SeReleaseLuidAndAttributesArray(v42, v15);
    }
    return v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (PERESOURCE *)v39;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)v39 + 6), 1u);
    _InterlockedOr(v33, 0);
    v19 = v42;
    LOBYTE(v20) = DisableAllPrivileges;
    v21 = v39;
    SepAdjustPrivileges(
      (_DWORD)v39,
      0,
      v20,
      PrivilegeCount,
      v42,
      (__int64)v13,
      (__int64)&v40,
      (__int64)&v41,
      (__int64)&v45);
    if ( v13 && (*ReturnLength = v40, v40 > BufferLength) )
    {
      _InterlockedOr(v33, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
      HalPutDmaAdapter((PADAPTER_OBJECT)v39);
      if ( v42 )
      {
        LOBYTE(v32) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v42, v32);
      }
      return -1073741789;
    }
    else
    {
      LOBYTE(v23) = DisableAllPrivileges;
      LOBYTE(v22) = 1;
      v43 = SepAdjustPrivileges(
              (_DWORD)v21,
              v22,
              v23,
              PrivilegeCount,
              v19,
              (__int64)v13,
              (__int64)&v40,
              (__int64)&v41,
              (__int64)&v45);
      if ( v13 )
      {
        v24 = v41;
        v13->PrivilegeCount = v41;
        if ( !v24 )
        {
          v13->Privileges[0].Luid = 0LL;
          v13->Privileges[0].Attributes = 0;
        }
      }
      if ( v45 )
        v21[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      _InterlockedOr(v33, 0);
      ExReleaseResourceLite(v18[6]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v25, v26, v27);
      HalPutDmaAdapter((PADAPTER_OBJECT)v39);
      if ( v42 )
      {
        LOBYTE(v28) = PreviousMode;
        SeReleaseLuidAndAttributesArray(v42, v28);
      }
      return v43;
    }
  }
}
