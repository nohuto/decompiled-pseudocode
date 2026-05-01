/*
 * XREFs of sub_180041B28 @ 0x180041B28
 * Callers:
 *     sub_180041ACC @ 0x180041ACC (sub_180041ACC.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_180041B28(_QWORD *a1)
{
  __int64 *v1; // rdi
  int v3; // eax
  __int64 v4; // r8
  int v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+28h] [rbp-50h]
  __int64 v8; // [rsp+30h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int128 v10; // [rsp+40h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]
  int v14; // [rsp+60h] [rbp-18h]

  v6 = 3;
  v1 = a1 + 17;
  v7 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v10 = 0LL;
  v13 = 1;
  v14 = 72;
  v3 = TpAllocCleanupGroup(a1 + 17);
  if ( v3 >= 0 )
  {
    v4 = a1[4];
    v8 = *v1;
    v9 = 0LL;
    v3 = TpAllocWork(a1 + 18, sub_180015F40, v4, &v6);
    if ( v3 >= 0 )
    {
      v3 = TpAllocWork(a1 + 19, sub_180015F40, a1[3], &v6);
      if ( v3 >= 0 )
        v3 = 0;
    }
  }
  return v3 | 0x10000000;
}
