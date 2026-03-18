/*
 * XREFs of ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C004A2D0
 * Callers:
 *     <none>
 * Callees:
 *     HmgShareLockIgnoreStockBit @ 0x1C0044178 (HmgShareLockIgnoreStockBit.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 */

__int64 __fastcall W32kCddSetDeviceBitmapAdapterLuid(HSURF a1, struct _LUID a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi

  v3 = HmgShareLockIgnoreStockBit((unsigned int)a1);
  if ( v3 && ((v4 = 1, (*(_DWORD *)(v3 + 112) & 0x400000) != 0) || *(_WORD *)(v3 + 100) == 1) )
    *(struct _LUID *)(v3 + 576) = a2;
  else
    v4 = 0;
  if ( v3 )
    HmgDecrementShareReferenceCountEx(v3, 0LL);
  return v4;
}
