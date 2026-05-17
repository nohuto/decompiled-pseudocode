/*
 * XREFs of LdrpUnmapModule @ 0x180070DB0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpUnloadNode @ 0x18006A4F8 (LdrpUnloadNode.c)
 *     LdrpLoadEnclaveModule @ 0x1800CD998 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlRemoveInvertedFunctionTable @ 0x180070DF4 (RtlRemoveInvertedFunctionTable.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall LdrpUnmapModule(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( v1 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 0x200) != 0 )
    {
      RtlRemoveInvertedFunctionTable(*(_QWORD *)(a1 + 48));
      v1 = *(_QWORD *)(a1 + 48);
    }
    result = NtUnmapViewOfSection(-1LL, v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
