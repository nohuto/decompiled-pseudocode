/*
 * XREFs of sub_1403E6E8C @ 0x1403E6E8C
 * Callers:
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     sub_1403E6F6C @ 0x1403E6F6C (sub_1403E6F6C.c)
 *     sub_1403E7ED8 @ 0x1403E7ED8 (sub_1403E7ED8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F5010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140A090FC @ 0x140A090FC (sub_140A090FC.c)
 *     sub_140A18FE4 @ 0x140A18FE4 (sub_140A18FE4.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     KeGuardDispatchICall @ 0x140A0E330 (KeGuardDispatchICall.c)
 */

unsigned __int8 __fastcall sub_1403E6E8C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
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
