/*
 * XREFs of sub_180007DE4 @ 0x180007DE4
 * Callers:
 *     sub_180004818 @ 0x180004818 (sub_180004818.c)
 *     sub_180007C3C @ 0x180007C3C (sub_180007C3C.c)
 *     sub_180007CF8 @ 0x180007CF8 (sub_180007CF8.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 *     sub_18003C57C @ 0x18003C57C (sub_18003C57C.c)
 *     sub_180044710 @ 0x180044710 (sub_180044710.c)
 *     sub_18006B4F0 @ 0x18006B4F0 (sub_18006B4F0.c)
 *     sub_1800746B0 @ 0x1800746B0 (sub_1800746B0.c)
 * Callees:
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 */

__int64 __fastcall sub_180007DE4(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  v1 = *a1;
  v2 = 0LL;
  if ( *a1 )
  {
    v5 = *(_QWORD *)(v1 + 1296);
    v6 = *(int *)(v1 + 1328);
    v7 = *(_QWORD *)(v1 + 1320);
    if ( v5 != v7 + 8 * (v6 + 2 * v6 + 139) )
      v2 = v5 - 1296;
    if ( !v2 )
      v2 = sub_180007E58(v7, *((unsigned int *)a1 + 2), (unsigned int)(v6 + 1));
  }
  *a1 = v2;
  return v1;
}
