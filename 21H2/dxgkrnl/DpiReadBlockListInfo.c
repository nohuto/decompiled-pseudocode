/*
 * XREFs of DpiReadBlockListInfo @ 0x1C01EEA98
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DpiReadBlockListInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  __int64 v4; // r10
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  const void *v10; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8

  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 || *(_DWORD *)(v4 + 16) != 1953656900 || *(_DWORD *)(v4 + 20) != 2 )
    return 3221225485LL;
  if ( a4 )
  {
    if ( !*(_BYTE *)(v4 + 5708) )
    {
LABEL_6:
      v6 = *a2;
      v7 = -1;
      v8 = *a2 + 4;
      if ( v8 >= v6 )
        v7 = v8;
      if ( a3 < v7 || v8 < v6 )
      {
        v13 = a3;
        v14 = -1073741789LL;
      }
      else
      {
        if ( a4 )
        {
          v9 = *(_DWORD *)(v4 + 5704);
          v10 = *(const void **)(v4 + 5696);
        }
        else
        {
          v9 = *(_DWORD *)(v4 + 5720);
          v10 = *(const void **)(v4 + 5712);
        }
        if ( !v6 )
          goto LABEL_13;
        if ( v9 <= v6 )
        {
          if ( v9 )
            memmove(a2 + 1, v10, v9);
LABEL_13:
          *a2 = v9;
          return 0LL;
        }
        v13 = a3;
        v14 = -1073741811LL;
      }
      WdLogSingleEntry2(3LL, v13, v14);
      v12 = -1073741789;
      goto LABEL_24;
    }
  }
  else if ( !*(_BYTE *)(v4 + 5724) )
  {
    goto LABEL_6;
  }
  v12 = -1073741637;
  WdLogSingleEntry1(3LL, -1073741637LL);
LABEL_24:
  *a2 = 0;
  return v12;
}
