/*
 * XREFs of sub_1405CD0C0 @ 0x1405CD0C0
 * Callers:
 *     WbReEncryptWarbirdEncryptionSegment @ 0x1405CD01C (WbReEncryptWarbirdEncryptionSegment.c)
 * Callees:
 *     sub_1405CD1D8 @ 0x1405CD1D8 (sub_1405CD1D8.c)
 *     sub_14065C1BC @ 0x14065C1BC (sub_14065C1BC.c)
 *     sub_14065CF98 @ 0x14065CF98 (sub_14065CF98.c)
 *     sub_1406ED14C @ 0x1406ED14C (sub_1406ED14C.c)
 */

__int64 __fastcall sub_1405CD0C0(__int64 a1, _DWORD *a2)
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
  v6 = sub_14065CF98(v5);
  if ( v6 >= 0 )
  {
    v6 = sub_1405CD1D8((_DWORD)v5, a2[2] & 0xFFFFFFF, (*a2 & 2) == 0, (unsigned int)&Mdl, (__int64)&v8);
    if ( v6 >= 0 )
    {
      v6 = sub_14065C1BC(
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
  sub_1406ED14C(Mdl);
  return (unsigned int)v6;
}
