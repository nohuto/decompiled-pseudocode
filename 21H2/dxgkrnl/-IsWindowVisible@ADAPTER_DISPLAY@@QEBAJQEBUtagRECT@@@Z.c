/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0167190
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C016701C (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C01489B4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(struct DXGADAPTER **this, const struct tagRECT *const a2)
{
  DXGPROCESS *Current; // rax
  unsigned int v5; // eax
  unsigned int v6; // esi
  __int64 v8; // rax
  unsigned int v9; // ebp
  struct DXGADAPTER *v10; // r9
  LONG right; // ecx
  LONG left; // r8d
  __int64 v13; // rsi
  LONG bottom; // ecx
  LONG top; // r8d
  struct DXGADAPTER *v16; // rcx

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v8 + 24) = 2447LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  v5 = *((_DWORD *)this + 20);
  v6 = 0;
  if ( v5 )
  {
    while ( *((_DWORD *)this[14] + 992 * v6 + 174) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v6) )
    {
      v5 = *((_DWORD *)this + 20);
      if ( ++v6 >= v5 )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v9 = 0;
  if ( !v5 )
    return 261LL;
  while ( 1 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v9)
      || !DmmIsTargetNonStandard(this[2], *((unsigned int *)this[14] + 992 * v9 + 267)) )
    {
      v10 = this[14];
      right = a2->right;
      left = a2->left;
      v13 = 3968LL * v9;
      if ( right >= *(_DWORD *)((char *)v10 + v13 + 636) )
        right = *(_DWORD *)((char *)v10 + v13 + 636);
      if ( left <= *(_DWORD *)((char *)v10 + v13 + 628) )
        left = *(_DWORD *)((char *)v10 + v13 + 628);
      if ( left < right )
      {
        bottom = a2->bottom;
        top = a2->top;
        if ( bottom >= *(_DWORD *)((char *)v10 + v13 + 640) )
          bottom = *(_DWORD *)((char *)v10 + v13 + 640);
        if ( top <= *(_DWORD *)((char *)v10 + v13 + 632) )
          top = *(_DWORD *)((char *)v10 + v13 + 632);
        if ( top < bottom )
        {
          if ( !*(_DWORD *)((char *)v10 + v13 + 696)
            && ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v9) )
          {
            return 0LL;
          }
          v16 = this[14];
          if ( a2->left >= *(_DWORD *)((char *)v16 + v13 + 628)
            && a2->right <= *(_DWORD *)((char *)v16 + v13 + 636)
            && a2->top >= *(_DWORD *)((char *)v16 + v13 + 632)
            && a2->bottom <= *(_DWORD *)((char *)v16 + v13 + 640) )
          {
            break;
          }
        }
      }
    }
    if ( ++v9 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
