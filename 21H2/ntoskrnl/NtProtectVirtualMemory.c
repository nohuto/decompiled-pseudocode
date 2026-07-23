/*
 * XREFs of NtProtectVirtualMemory @ 0x1406E85A0
 * Callers:
 *     <none>
 * Callees:
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwTiLogProtectExecVm @ 0x1406906F0 (EtwTiLogProtectExecVm.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 *     VslDebugProtectSecureProcessMemory @ 0x14088F498 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __cdecl NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  HANDLE v7; // r10
  PULONG v8; // r9
  int v9; // esi
  int ProtectionMask; // r13d
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  PVOID v17; // rcx
  ULONG_PTR v18; // r14
  NTSTATUS result; // eax
  _BYTE *v20; // rbx
  NTSTATUS v21; // eax
  NTSTATUS v22; // edi
  int v23; // r8d
  __int64 Tag; // [rsp+20h] [rbp-C8h]
  PVOID *Object; // [rsp+28h] [rbp-C0h]
  char v26; // [rsp+40h] [rbp-A8h]
  unsigned int v27; // [rsp+44h] [rbp-A4h] BYREF
  PVOID v28; // [rsp+48h] [rbp-A0h] BYREF
  PVOID v29; // [rsp+50h] [rbp-98h] BYREF
  ULONG_PTR v30; // [rsp+58h] [rbp-90h] BYREF
  PSIZE_T v31; // [rsp+60h] [rbp-88h]
  PULONG v32; // [rsp+68h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-78h] BYREF

  v31 = RegionSize;
  v7 = ProcessHandle;
  v8 = OldProtect;
  v32 = OldProtect;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0;
  v29 = 0LL;
  v28 = 0LL;
  v30 = 0LL;
  v27 = 0;
  if ( NewProtect == 0x80000000 || NewProtect == 0x10000000 )
  {
    LOBYTE(ProtectionMask) = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(NewProtect & 0xFF807FF);
    if ( ProtectionMask == -1 )
      return -1073741755;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v26 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    v16 = (__int64)v8;
    if ( (unsigned __int64)v8 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = *BaseAddress;
    v28 = *BaseAddress;
    v18 = *RegionSize;
    v30 = *RegionSize;
    PreviousMode = v26;
  }
  else
  {
    v18 = *RegionSize;
    v30 = *RegionSize;
    v17 = *BaseAddress;
    v28 = *BaseAddress;
  }
  if ( (unsigned __int64)v17 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)v17 < v18 || !v18 )
    return -1073741583;
  result = ObReferenceObjectByHandleWithTag(v7, 8u, (POBJECT_TYPE)PsProcessType, PreviousMode, 0x76506D4Du, &v29, 0LL);
  if ( result >= 0 )
  {
    v20 = v29;
    if ( Process != v29 )
    {
      KeStackAttachProcess((PRKPROCESS)v29, &ApcState);
      v9 = 1;
    }
    if ( (v20[992] & 1) != 0 )
      v21 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v20,
              (_DWORD)Process,
              (unsigned int)&v28,
              (unsigned int)&v30,
              NewProtect,
              (__int64)&v27);
    else
      v21 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v20,
              (unsigned int)&v28,
              (unsigned int)&v30,
              NewProtect,
              (__int64)&v27);
    v22 = v21;
    LODWORD(v29) = v21;
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
    if ( v22 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v27) | (unsigned __int8)ProtectionMask) & 2) != 0 )
    {
      LODWORD(Object) = v23;
      LODWORD(Tag) = NewProtect;
      EtwTiLogProtectExecVm((__int64)v20, v26, v28, v18, Tag, Object);
    }
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *v31 = v30;
    *BaseAddress = v28;
    *v32 = v27;
    return v22;
  }
  return result;
}
