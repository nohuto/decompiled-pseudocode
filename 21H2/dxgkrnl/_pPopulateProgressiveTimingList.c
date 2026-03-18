/*
 * XREFs of _pPopulateProgressiveTimingList @ 0x1C03B4B78
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C01DC608 (_pLoadAdditinalMode.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall pPopulateProgressiveTimingList(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // esi
  _DWORD *v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  int v12; // eax
  unsigned int v14; // r8d
  __int64 v15; // r9
  __int64 v16; // rcx

  v4 = a1[4];
  v5 = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
  {
    v9 = a1 + 7;
    v10 = v4;
    do
    {
      v11 = (*v9 & 0x10000000) == 0;
      v12 = v8 + 1;
      v9 += 7;
      if ( !v11 )
        v12 = v8;
      v8 = v12;
      --v10;
    }
    while ( v10 );
    if ( v12 )
    {
      v7 = operator new[]((unsigned int)(28 * v12 + 20), 0x4D677844u, 256LL, a4);
      if ( !v7 )
      {
        WdLogSingleEntry0(6LL);
        return 0LL;
      }
      v14 = 0;
      *(_DWORD *)(v7 + 8) = a1[2];
      *(_BYTE *)(v7 + 12) = 1;
      for ( *(_DWORD *)(v7 + 16) = v8; v14 < a1[4]; ++v14 )
      {
        v15 = 7LL * v14;
        if ( (a1[v15 + 7] & 0x10000000) == 0 )
        {
          v16 = 28LL * v5++;
          *(_OWORD *)(v16 + v7 + 20) = *(_OWORD *)&a1[v15 + 5];
          *(_QWORD *)(v16 + v7 + 36) = *(_QWORD *)&a1[v15 + 9];
          *(_DWORD *)(v16 + v7 + 44) = a1[v15 + 11];
        }
      }
    }
  }
  return v7;
}
