/*
 * XREFs of HvpDelistFreeCell @ 0x140720B84
 * Callers:
 *     HvpDoAllocateCell @ 0x140720248 (HvpDoAllocateCell.c)
 *     HvpIsFreeNeighbor @ 0x140720AC0 (HvpIsFreeNeighbor.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpRemoveFreeCellHint @ 0x14071F510 (HvpRemoveFreeCellHint.c)
 */

_DWORD *__fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  unsigned int v4; // edi
  _DWORD *result; // rax
  __int64 v7; // r8
  unsigned int v8; // r8d
  int v9; // [rsp+58h] [rbp+20h] BYREF
  int v10; // [rsp+5Ch] [rbp+24h]

  v9 = -1;
  v10 = 0;
  v4 = BugCheckParameter3;
  result = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                       BugCheckParameter2,
                       BugCheckParameter3,
                       &v9);
  if ( result )
  {
    if ( --result )
    {
      v7 = (unsigned int)((*result >> 3) - 1);
      if ( (unsigned int)v7 >= 0x10 )
      {
        v8 = (unsigned int)v7 >> 4;
        if ( v8 > 0xFF )
        {
          v7 = 23LL;
        }
        else
        {
          _BitScanReverse(&v8, v8);
          v7 = v8 + 16;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter2, v4, v7, a3, 0);
      return (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
    }
  }
  return result;
}
