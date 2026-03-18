/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C013F8C8
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C013FAC0 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C013FC0C (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  __int64 v1; // r10
  int v2; // r9d
  _DWORD *v4; // rdx
  _DWORD *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v7; // r11

  v1 = *((_QWORD *)this + 18);
  v2 = *((_DWORD *)this + 22);
  if ( (*(_DWORD *)(v1 + 24) & 0x800000) != 0 )
  {
    while ( v2 != 1 )
    {
      v6 = (_DWORD *)*((_QWORD *)this + 10);
      *((_DWORD *)this + 22) = --v2;
      v7 = (_DWORD *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
      *((_QWORD *)this + 10) = v7;
      if ( v7[1] > *(_DWORD *)(v1 + 124) )
        break;
      if ( *v7 )
        return 1LL;
    }
  }
  else
  {
    while ( v2 != 1 )
    {
      --v2;
      v4 = (_DWORD *)(*((_QWORD *)this + 10) - 4LL);
      *((_DWORD *)this + 22) = v2;
      v5 = (_DWORD *)((char *)v4 - (unsigned int)(4 * *v4 + 16) + 4);
      *((_QWORD *)this + 10) = v5;
      if ( v5[2] <= *(_DWORD *)(v1 + 124) )
        break;
      if ( *v5 )
        return 1LL;
    }
  }
  return 0LL;
}
