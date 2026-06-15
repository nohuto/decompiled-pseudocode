/*
 * XREFs of sub_1800BE318 @ 0x1800BE318
 * Callers:
 *     sub_1800BE2C0 @ 0x1800BE2C0 (sub_1800BE2C0.c)
 *     sub_1800BE530 @ 0x1800BE530 (sub_1800BE530.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BEA84 @ 0x1800BEA84 (sub_1800BEA84.c)
 */

// Hidden C++ exception states: #wind=2
HRESULT __fastcall sub_1800BE318(__int64 a1)
{
  HRESULT result; // eax
  int v3; // r8d
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+40h] [rbp-10h]
  __int64 v6; // [rsp+70h] [rbp+20h] BYREF
  __int64 v7; // [rsp+78h] [rbp+28h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x18u, (__int64)&unk_18016DA10, *(const wchar_t **)(a1 + 32));
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
             *(_QWORD *)&dwCreationFlags,
             *(_QWORD *)(a1 + 32),
             &v7);
  if ( result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 1LL, &v6);
    if ( result >= 0 )
    {
      *(_OWORD *)pvar = 0LL;
      v5 = 0LL;
      LOWORD(pvar[0]) = 11;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BEA84(*((_QWORD *)off_18019C348 + 2), 25, v3, *(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 24));
      }
      if ( *(_DWORD *)(a1 + 24) )
        LOWORD(pvar[1]) = -1;
      else
        LOWORD(pvar[1]) = 0;
      (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 48LL))(v6, &unk_180172E38, pvar);
      result = PropVariantClear(pvar);
      *(_BYTE *)(a1 + 104) = 0;
    }
  }
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return result;
}
