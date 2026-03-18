/*
 * XREFs of ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0 (-iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762 (-ipfdDevMaxGet@XDCOBJ@@QAEJXZ.c)
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bValid@EWNDOBJ@@QBEHXZ @ 0x1E6503 (-bValid@EWNDOBJ@@QBEHXZ.c)
 */

int __userpurge hdevFindDeviceHdev@<eax>(
        EWNDOBJ *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        struct _RECTL a4,
        struct EWNDOBJ *a5)
{
  _DWORD *v5; // edi
  int v6; // esi
  int v7; // edx
  _DWORD *i; // eax
  _DWORD *v9; // edi
  int v10; // ebx
  HDEV v12; // [esp+10h] [ebp-18h] BYREF
  LONG left; // [esp+14h] [ebp-14h]
  LONG top; // [esp+18h] [ebp-10h]
  LONG right; // [esp+1Ch] [ebp-Ch]

  v12 = a3;
  left = a4.left;
  top = a4.top;
  right = a4.right;
  v5 = *(_DWORD **)(a2 + 1108);
  v6 = 0;
  if ( a1 && EWNDOBJ::bValid(a1) )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 132) + 16) + 28);
    for ( i = (_DWORD *)*v5; i; i = (_DWORD *)*i )
    {
      if ( v6 == i[9] )
        return v6;
    }
  }
  v9 = (_DWORD *)*v5;
  v10 = 0;
  if ( v9 )
  {
    do
    {
      if ( v9[5] <= (int)v12 && v9[7] >= top && v9[6] <= left && v9[8] >= right )
        return v9[9];
      if ( bIntersect(v9 + 5, &v12) )
      {
        v6 = v9[9];
        if ( (*(_DWORD *)(v6 + 1416) & 0x100) != 0 )
          return v6;
        ++v10;
      }
      v9 = (_DWORD *)*v9;
    }
    while ( v9 );
    if ( v10 == 1 )
      return v6;
  }
  return 0;
}
