/*
 * XREFs of _GreIsReusedDeviceDependentBitmap@4 @ 0x9BB72
 * Callers:
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 * Callees:
 *     <none>
 */

int __thiscall GreIsReusedDeviceDependentBitmap(void *this)
{
  int v1; // eax
  int v2; // esi

  v1 = HmgShareLockCheck(this, 5);
  if ( !v1 )
    return 0;
  v2 = *(_DWORD *)(v1 + 76) & 0x2000;
  DEC_SHARE_REF_CNT(v1);
  return v2;
}
