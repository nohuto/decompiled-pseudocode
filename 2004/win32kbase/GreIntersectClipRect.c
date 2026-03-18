/*
 * XREFs of GreIntersectClipRect @ 0x1C007EB80
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0029CC4 (bCvtPts1.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C007ECC0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rcx
  LONG bottom; // edx
  int v11; // eax
  int v12; // eax
  ULONG v14; // ecx
  DC *v15[2]; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  int v18; // [rsp+3Ch] [rbp-24h]
  struct _RECTL v19; // [rsp+40h] [rbp-20h] BYREF

  v6 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v15, a1);
  if ( !v15[0] )
  {
    v14 = 6;
LABEL_22:
    EngSetLastError(v14);
    goto LABEL_14;
  }
  v9 = *((_QWORD *)v15[0] + 122);
  v17 = *(_DWORD *)(v9 + 208);
  v18 = *(_DWORD *)(v9 + 108) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v16, (struct XDCOBJ *)v15, 0x204u, 0x80000000);
  bottom = a5;
  v19.left = left;
  v19.top = top;
  v11 = *(_DWORD *)(v16 + 32);
  v19.right = right;
  v19.bottom = a5;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x43) != 0x43 )
    {
      bCvtPts1(v16, &v19, 2LL);
      bottom = v19.bottom;
      right = v19.right;
      top = v19.top;
      left = v19.left;
    }
    if ( v18 )
    {
      ++left;
      ++right;
      v19.left = left;
      v19.right = right;
    }
    if ( left > right )
    {
      v19.left = right;
      v19.right = left;
    }
    if ( top > bottom )
    {
      v19.top = bottom;
      v19.bottom = top;
    }
    v12 = DC::iCombine(v15[0], &v19, 1);
    goto LABEL_12;
  }
  if ( (left & 0xF8000000) != 0 && (left & 0xF8000000) != -134217728
    || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    v14 = 87;
    goto LABEL_22;
  }
  v12 = DC::iCombine(v15[0], (struct EXFORMOBJ *)&v16, &v19, 1);
LABEL_12:
  v6 = v12;
  if ( v12 > 1 )
    v6 = 3;
LABEL_14:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
  return v6;
}
