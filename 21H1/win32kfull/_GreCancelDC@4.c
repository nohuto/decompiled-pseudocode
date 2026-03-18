/*
 * XREFs of _GreCancelDC@4 @ 0x1FF014
 * Callers:
 *     _NtGdiCancelDC@4 @ 0x2121E0 (_NtGdiCancelDC@4.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __thiscall GreCancelDC(void *this)
{
  int v2; // ebx
  int v3; // edx
  int *v4; // eax
  int v5; // eax
  int *v7[3]; // [esp+8h] [ebp-Ch] BYREF

  GreAcquireHmgrSemaphore();
  v7[1] = 0;
  v7[2] = 0;
  v2 = 1;
  LOBYTE(v3) = 1;
  v4 = (int *)HmgShareLockCheck(this, v3);
  v7[0] = v4;
  if ( v4 )
  {
    v5 = v4[126];
    if ( v5 )
      *(_DWORD *)(v5 + 72) |= 0x40000000u;
    XDCOBJ::vAltUnlockFast(v7);
  }
  else
  {
    v2 = 0;
  }
  GreReleaseHmgrSemaphore();
  return v2;
}
