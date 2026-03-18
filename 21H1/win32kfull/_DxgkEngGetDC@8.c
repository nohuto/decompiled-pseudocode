/*
 * XREFs of _DxgkEngGetDC@8 @ 0xBB5EA
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QAEXXZ @ 0x7AB50 (-vAltUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ??0MDCOBJA@@QAE@PAUHDC__@@H@Z @ 0x7C2B6 (--0MDCOBJA@@QAE@PAUHDC__@@H@Z.c)
 */

HDC __stdcall DxgkEngGetDC(int a1, _DWORD *a2)
{
  HDC DC; // eax
  int v3; // ecx
  HDC v4; // edi
  int *v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a2 )
    *a2 = 0;
  DC = (HDC)NtUserGetDC(a1);
  v4 = DC;
  if ( DC )
  {
    if ( !a2 )
      return v4;
    MDCOBJA::MDCOBJA((MDCOBJA *)v6, DC, v3);
    if ( v6[0] )
    {
      *a2 = GreCreateDisplayDC(v6[0][9], 0, 0);
      XDCOBJ::vAltUnlockFast(v6);
    }
    if ( *a2 )
      return v4;
    UserReleaseDC(v4);
  }
  return 0;
}
