/*
 * XREFs of LinkNodepAddAttachedDevice @ 0x1C00B66E0
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodepAddAttachedDevice(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rdx
  __int64 *i; // rcx
  __int64 *v5; // r9
  __int64 *v6; // r8
  __int64 *v7; // r8
  __int64 **v8; // rcx
  __int64 *v9; // rdx
  int v10; // edx
  int v11; // edx

  v3 = (__int64 *)(a1 + 72);
  for ( i = *(__int64 **)(a1 + 72); ; i = (__int64 *)*i )
  {
    if ( v3 == i )
    {
      v8 = (__int64 **)v3[1];
      if ( *v8 != v3 )
        __fastfail(3u);
      *a2 = v3;
      a2[1] = (__int64 *)v8;
      *v8 = (__int64 *)a2;
      v3[1] = (__int64)a2;
      return 0LL;
    }
    v5 = (__int64 *)i[6];
    if ( v5 )
    {
      v6 = a2[6];
      if ( v5 == v6 )
        break;
    }
    v7 = (__int64 *)i[2];
    if ( v7 && v7 == a2[2] )
    {
      v6 = a2[6];
      break;
    }
  }
  if ( v6 )
    i[6] = (__int64)v6;
  v9 = a2[2];
  if ( v9 )
    i[2] = (__int64)v9;
  v10 = *((_DWORD *)a2 + 9);
  if ( v10 )
    *((_DWORD *)i + 9) = v10;
  v11 = *((_DWORD *)a2 + 10);
  if ( v11 )
    *((_DWORD *)i + 10) = v11;
  ExFreePoolWithTag(a2, 0);
  return 0LL;
}
