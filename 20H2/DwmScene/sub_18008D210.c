/*
 * XREFs of sub_18008D210 @ 0x18008D210
 * Callers:
 *     sub_180013220 @ 0x180013220 (sub_180013220.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 * Callees:
 *     sub_1800F00AC @ 0x1800F00AC (sub_1800F00AC.c)
 */

__int64 __fastcall sub_18008D210(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3[1];
  v6 = 0LL;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v3 = a3[1];
  }
  v4 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)&v6 = *a3;
  *((_QWORD *)&v6 + 1) = v3;
  return sub_1800F00AC(v4, a2, &v6);
}
