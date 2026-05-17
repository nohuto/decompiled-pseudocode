/*
 * XREFs of LdrGetDllFullName @ 0x180010240
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x180087974 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     LdrpFindLoadedDllByHandle @ 0x180010500 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 */

__int64 __fastcall LdrGetDllFullName(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int LoadedDllByHandle; // eax
  __int64 v5; // rbx
  _WORD *v6; // rdi
  _QWORD *SubSystemTib; // rcx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    LoadedDllByHandle = LdrpFindLoadedDllByHandle(a1, &v10, &v9);
    v5 = v10;
    v2 = LoadedDllByHandle;
    if ( !v10 )
      return v2;
    v6 = (_WORD *)(v10 + 72);
  }
  else
  {
    v10 = LdrpImageEntry;
    v6 = (_WORD *)(LdrpImageEntry + 72);
    v5 = LdrpImageEntry;
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && SubSystemTib[1] )
      v6 = (_WORD *)SubSystemTib[1];
  }
  if ( v5 )
  {
    RtlCopyUnicodeString(a2);
    if ( *v6 > *(_WORD *)(a2 + 2) )
      v2 = -1073741789;
    if ( v5 != LdrpImageEntry )
      LdrpDereferenceModule(v5);
  }
  return v2;
}
