/*
 * XREFs of sub_1403E9B1C @ 0x1403E9B1C
 * Callers:
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     sub_1403E9BFC @ 0x1403E9BFC (sub_1403E9BFC.c)
 *     sub_1403EAB68 @ 0x1403EAB68 (sub_1403EAB68.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409FB010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A0F0FC @ 0x140A0F0FC (sub_140A0F0FC.c)
 *     sub_140A1EFE4 @ 0x140A1EFE4 (sub_140A1EFE4.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140A14330 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403E9B1C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}
