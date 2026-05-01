/*
 * XREFs of sub_1800161FC @ 0x1800161FC
 * Callers:
 *     sub_18001D120 @ 0x18001D120 (sub_18001D120.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016298 @ 0x180016298 (sub_180016298.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800161FC(__int64 a1, __int128 *a2, __int64 *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v12 = 0;
  v10 = *a2;
  v4 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64 *, int *))sub_180016298)(a1, &v10, &v13, &v12);
  v6 = v4;
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    v8 = *a3;
    *a3 = v13;
    if ( v8 )
      j_j__o_free(v8, v5);
    v6 = 0;
  }
  else
  {
    sub_180003268(retaddr, 58, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp", v4);
    v7 = v13;
  }
  if ( v7 )
    j_j__o_free(v7, v5);
  return v6;
}
