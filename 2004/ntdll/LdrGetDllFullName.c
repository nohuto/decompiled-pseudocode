/*
 * XREFs of LdrGetDllFullName @ 0x180010240
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180087274 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

NTSTATUS __cdecl LdrGetDllFullName(PVOID DllHandle, PUNICODE_STRING FullDllName)
{
  NTSTATUS v2; // esi
  NTSTATUS LoadedDllByHandle; // eax
  PVOID v5; // rbx
  const UNICODE_STRING *v6; // rdi
  void *SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  BaseAddress = 0LL;
  if ( DllHandle )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(DllHandle, &BaseAddress, &v9);
    v5 = BaseAddress;
    v2 = LoadedDllByHandle;
    if ( !BaseAddress )
      return v2;
    v6 = (const UNICODE_STRING *)((char *)BaseAddress + 72);
  }
  else
  {
    BaseAddress = (PVOID)LdrpImageEntry;
    v6 = (const UNICODE_STRING *)(LdrpImageEntry + 72);
    v5 = (PVOID)LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && *((_QWORD *)SubSystemTib + 1) )
      v6 = (const UNICODE_STRING *)*((_QWORD *)SubSystemTib + 1);
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(FullDllName, v6);
    if ( v6->Length > FullDllName->MaximumLength )
      v2 = -1073741789;
    if ( v5 != (PVOID)LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v2;
}
