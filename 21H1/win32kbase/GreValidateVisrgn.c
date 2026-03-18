/*
 * XREFs of GreValidateVisrgn @ 0x1C008CBA0
 * Callers:
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0089390 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008CC7C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall GreValidateVisrgn(unsigned int a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v7 = 0;
  v3 = HmgShareLockEx(a1, 1, 0);
  v5 = v3;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 36) | 0x100000;
    if ( !a2 )
      v4 = *(_DWORD *)(v3 + 36) & 0xFFEFFFFF;
    *(_DWORD *)(v3 + 36) = v4;
    GrepValidateVisRgn((struct DC *)v3, *(struct _RECTL **)(v3 + 1120));
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v5);
  }
}
