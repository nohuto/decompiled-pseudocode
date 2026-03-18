/*
 * XREFs of _DxgkEngGetRedirBitmapSharedHandle@8 @ 0xBA5AA
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetDxSharedSurface@24 @ 0x38958 (_GreGetDxSharedSurface@24.c)
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

void __stdcall DxgkEngGetRedirBitmapSharedHandle(int a1, _DWORD *a2)
{
  int *v2; // eax
  _DWORD *v3; // edx
  int *v4[3]; // [esp+4h] [ebp-1Ch] BYREF
  int v5; // [esp+10h] [ebp-10h] BYREF
  _DWORD v6[2]; // [esp+18h] [ebp-8h] BYREF

  v4[1] = 0;
  v4[2] = 0;
  v2 = (int *)HmgShareLockEx(a1, 1, 0);
  v3 = a2;
  v4[0] = v2;
  *a2 = 0;
  if ( v2 )
  {
    a1 = 0;
    v6[0] = 0;
    v6[1] = 0;
    GreGetDxSharedSurface(v2[122], v3, v6, &a2, &a1, &v5);
    XDCOBJ::vAltUnlockFast(v4);
  }
}
