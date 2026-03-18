/*
 * XREFs of _DxgkEngGetClientRect@8 @ 0xBA8A2
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall DxgkEngGetClientRect(int a1, _DWORD *a2)
{
  int v2; // ebx
  int *v3; // eax
  int *v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = 1;
  v5[1] = 0;
  v5[2] = 0;
  v3 = (int *)HmgShareLockEx(a1, 1, 0);
  v5[0] = v3;
  if ( v3 )
  {
    *a2 = v3[266];
    a2[1] = v3[267];
    a2[2] = v3[268];
    a2[3] = v3[269];
  }
  else
  {
    v2 = 0;
  }
  if ( v3 )
    XDCOBJ::vAltUnlockFast(v5);
  return v2;
}
