/*
 * XREFs of sub_18003F9D0 @ 0x18003F9D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 *     sub_180040E80 @ 0x180040E80 (sub_180040E80.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F9D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebp
  int v6; // ebx
  int v7; // edx
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // edi
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = a2;
  v14 = 0LL;
  if ( !a3 )
  {
    v6 = -2147467261;
    v7 = 312;
LABEL_3:
    sub_180003268(
      retaddr,
      v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v6);
    return (unsigned int)v6;
  }
  *a3 = 0LL;
  v6 = sub_180040E80(a1, a2, &v14);
  if ( v6 < 0 )
  {
    v7 = 316;
    goto LABEL_3;
  }
  v8 = v14;
  v9 = sub_180040654(a1, v14, v4, a3, -2LL);
  v11 = v9;
  v6 = -2147023728;
  if ( v9 != -2147023728 )
  {
    if ( v9 >= 0 )
    {
      v6 = 0;
    }
    else
    {
      sub_180003268(
        retaddr,
        321,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        v9);
      v6 = v11;
    }
  }
  j_j__o_free(v8, v10);
  return (unsigned int)v6;
}
