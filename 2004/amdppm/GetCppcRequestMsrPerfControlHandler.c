/*
 * XREFs of GetCppcRequestMsrPerfControlHandler @ 0x1C0002180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCppcRequestMsrPerfControlHandler(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _BYTE *a6,
        _DWORD *a7)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  unsigned int v10; // ebx

  v7 = *(_QWORD *)(a1 + 112);
  v8 = 0LL;
  v9 = 0LL;
  v10 = -1073741637;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_BYTE *)(v7 + 128) != 127 || *(_BYTE *)(v7 + 129) != 8 || *(_BYTE *)(v7 + 130) != 16 )
      return v10;
    v8 = *(_QWORD *)(v7 + 132);
    v9 = 16711680LL;
  }
  if ( *(_BYTE *)(a1 + 94) )
  {
    if ( *(_BYTE *)(v7 + 152) != 127 || *(_BYTE *)(v7 + 153) != 8 || *(_BYTE *)(v7 + 154) != 8 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 156) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 156);
    }
    v9 |= 0xFF00uLL;
  }
  if ( *(_BYTE *)(a1 + 95) )
  {
    if ( *(_BYTE *)(v7 + 176) != 127 || *(_BYTE *)(v7 + 177) != 8 || *(_BYTE *)(v7 + 178) )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 180) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 180);
    }
    v9 |= 0xFFuLL;
  }
  if ( *(_BYTE *)(a1 + 96) )
  {
    if ( *(_BYTE *)(v7 + 416) != 127 || *(_BYTE *)(v7 + 417) != 8 || *(_BYTE *)(v7 + 418) != 24 )
      return v10;
    if ( v8 )
    {
      if ( v8 != *(_QWORD *)(v7 + 420) )
        return v10;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 420);
    }
    v9 |= 0xFF000000uLL;
  }
  if ( !*(_BYTE *)(a1 + 97) && !*(_BYTE *)(a1 + 98) && v8 == 3221291699LL )
  {
    v10 = 0;
    *(_QWORD *)(a1 + 144) = v9;
    *a5 = PerfSelectionCppcRequestMsr;
    *a2 = PerfControlCppcRequestMsr;
    *a3 = PerfControlCppcRequestMsrHidden;
    *a4 = 0LL;
    *a6 = 1;
    *a7 = 1000;
  }
  return v10;
}
