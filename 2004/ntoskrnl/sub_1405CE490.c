/*
 * XREFs of sub_1405CE490 @ 0x1405CE490
 * Callers:
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405CE3EC (WbReEncryptWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405CE5A8 @ 0x1405CE5A8 (sub_1405CE5A8.c)
 *     sub_1406D9444 @ 0x1406D9444 (sub_1406D9444.c)
 *     sub_1406D9554 @ 0x1406D9554 (sub_1406D9554.c)
 *     sub_1406DA058 @ 0x1406DA058 (sub_1406DA058.c)
 */

__int64 __fastcall sub_1405CE490(__int64 a1, _DWORD *a2)
{
  int v2; // esi
  void *v5; // rsi
  int v6; // edi
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF
  PMDL Mdl; // [rsp+90h] [rbp+18h] BYREF

  v2 = a2[1];
  v8 = 0LL;
  v5 = (void *)(*(_QWORD *)(a1 + 32) + (v2 & 0xFFFFFFF));
  Mdl = 0LL;
  v6 = sub_1406D9444(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1405CE5A8((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_1406D9554(
             1,
             (_DWORD)v5,
             v8,
             a2[2] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 72LL,
             a2[1] & 0xFFFFFFF,
             *(_QWORD *)(a1 + 56) + 80LL);
      if ( v6 >= 0 )
        *a2 &= 0xFFFFFC03;
    }
  }
  sub_1406DA058(Mdl);
  return (unsigned int)v6;
}
