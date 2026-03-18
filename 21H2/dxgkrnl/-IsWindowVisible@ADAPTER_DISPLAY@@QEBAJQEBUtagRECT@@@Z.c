/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C01C3C78
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C01C3AFC (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000F6D8 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C01D7AB4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(
        ADAPTER_DISPLAY *this,
        const struct tagRECT *const a2,
        __int64 a3,
        __int64 a4)
{
  DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // ebp
  __int64 v11; // r9
  LONG right; // ecx
  LONG left; // r8d
  __int64 v14; // rsi
  LONG top; // r8d
  LONG bottom; // edx
  __int64 v17; // rcx

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2489LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pWindowClientRect != NULL", 2489LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  v7 = *((_DWORD *)this + 24);
  v8 = 0;
  if ( v7 )
  {
    while ( *(_DWORD *)(4000LL * v8 + *((_QWORD *)this + 16) + 736) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v8) )
    {
      v7 = *((_DWORD *)this + 24);
      if ( ++v8 >= v7 )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v10 = 0;
  if ( !v7 )
    return 261LL;
  while ( 1 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(this, v10)
      || !DmmIsTargetNonStandard(
            *((struct DXGADAPTER **)this + 2),
            *(_DWORD *)(4000LL * v10 + *((_QWORD *)this + 16) + 1088)) )
    {
      v11 = *((_QWORD *)this + 16);
      right = a2->right;
      left = a2->left;
      v14 = 4000LL * v10;
      if ( right >= *(_DWORD *)(v11 + v14 + 636) )
        right = *(_DWORD *)(v11 + v14 + 636);
      if ( left <= *(_DWORD *)(v11 + v14 + 628) )
        left = *(_DWORD *)(v11 + v14 + 628);
      if ( left < right )
      {
        top = a2->top;
        bottom = a2->bottom;
        if ( top <= *(_DWORD *)(v11 + v14 + 632) )
          top = *(_DWORD *)(v11 + v14 + 632);
        if ( bottom >= *(_DWORD *)(v11 + v14 + 640) )
          bottom = *(_DWORD *)(v11 + v14 + 640);
        if ( top < bottom )
        {
          if ( !*(_DWORD *)(v11 + v14 + 736) && ADAPTER_DISPLAY::IsVidPnSourceActive(this, v10) )
            return 0LL;
          v17 = *((_QWORD *)this + 16);
          if ( a2->left >= *(_DWORD *)(v17 + v14 + 628)
            && a2->right <= *(_DWORD *)(v17 + v14 + 636)
            && a2->top >= *(_DWORD *)(v17 + v14 + 632)
            && a2->bottom <= *(_DWORD *)(v17 + v14 + 640) )
          {
            break;
          }
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 24) )
      return 261LL;
  }
  return 3221225473LL;
}
