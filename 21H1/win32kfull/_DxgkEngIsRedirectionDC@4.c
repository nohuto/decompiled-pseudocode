/*
 * XREFs of _DxgkEngIsRedirectionDC@4 @ 0x1D43D8
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0DCOBJA@@QAE@PAUHDC__@@@Z @ 0x7AB76 (--0DCOBJA@@QAE@PAUHDC__@@@Z.c)
 */

int __stdcall DxgkEngIsRedirectionDC(HDC a1)
{
  int v1; // esi
  int *v3[3]; // [esp+4h] [ebp-Ch] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v3, a1);
  if ( v3[0] )
    v1 = v3[0][6] & 0x4000;
  else
    v1 = 1;
  if ( v3[0] )
    XDCOBJ::vAltUnlockFast(v3);
  return v1;
}
