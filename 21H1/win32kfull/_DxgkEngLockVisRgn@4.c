/*
 * XREFs of _DxgkEngLockVisRgn@4 @ 0xBAFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall DxgkEngLockVisRgn(int a1)
{
  int v1; // esi
  int *v2; // eax
  int *v4[3]; // [esp+4h] [ebp-Ch] BYREF

  v1 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v2 = (int *)HmgShareLockEx(a1, 1, 0);
  v4[0] = v2;
  if ( v2 )
  {
    v1 = v2[9];
    XDCOBJ::vAltUnlockFast(v4);
  }
  return v1;
}
