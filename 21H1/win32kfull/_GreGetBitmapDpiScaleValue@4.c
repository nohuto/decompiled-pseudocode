/*
 * XREFs of _GreGetBitmapDpiScaleValue@4 @ 0x1FD33D
 * Callers:
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _NtGdiGetBitmapDpiScaleValue@4 @ 0x212774 (_NtGdiGetBitmapDpiScaleValue@4.c)
 * Callees:
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 */

int __thiscall GreGetBitmapDpiScaleValue(void *this)
{
  _DWORD *v1; // eax
  int v2; // ebx
  int v4; // [esp+14h] [ebp-1Ch]
  int v5[2]; // [esp+20h] [ebp-10h] BYREF
  _DWORD *v6; // [esp+28h] [ebp-8h]
  int v7; // [esp+2Ch] [ebp-4h] BYREF

  v1 = (_DWORD *)HmgShareLockCheck(this, 5);
  v7 = 0;
  v2 = 1;
  v6 = v1;
  if ( v1 )
  {
    if ( (v1[19] & 0x800) != 0 )
    {
      v4 = v1[116];
      v5[0] = v1[115];
      v5[1] = v4;
      if ( eftol_c(v5, &v7, 1) )
        v2 = v7;
    }
  }
  if ( v6 )
    DEC_SHARE_REF_CNT(v6);
  return v2;
}
