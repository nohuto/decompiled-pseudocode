/*
 * XREFs of ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212
 * Callers:
 *     _NtGdiDoBanding@16 @ 0x1D932A (_NtGdiDoBanding@16.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 */

int __userpurge GreDoBanding@<eax>(
        int a1@<edx>,
        HDC a2@<ecx>,
        HDC a3,
        _DWORD *a4,
        struct _POINTL *a5,
        struct tagSIZE *a6)
{
  int v7; // ebx
  _DWORD *v8; // esi
  int (__stdcall *v9)(int, HDC); // esi
  int v10; // edi
  HDC v11; // edx
  DC *v12; // ecx
  int (__stdcall *v13)(int, HDC); // edi
  struct _EPROCESS *v15; // [esp+0h] [ebp-18h]
  DC *v16[3]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v16, 0, sizeof(v16));
  XDCOBJ::vLock((XDCOBJ *)v16, a2);
  if ( !XDCOBJ::bValidSurf(v16)
    || (v7 = *((_DWORD *)v16[0] + 126)) == 0
    || (v8 = (_DWORD *)*((_DWORD *)v16[0] + 9), !v8[456])
    || (*(_DWORD *)(v7 + 72) & 0x2000000) == 0 )
  {
LABEL_22:
    v10 = 0;
    goto LABEL_23;
  }
  if ( a1 )
  {
    v9 = (int (__stdcall *)(int, HDC))v8[532];
    if ( gUMPDSecurityLevel == 2 || gUMPDSecurityLevel && (PsGetCurrentProcess(), bIsProcessLocalSystem(v15)) || v9 )
    {
      v10 = v9(v7 + 16, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        _DbgPrint(
          "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n",
          2440);
      v10 = 0;
    }
    v11 = a3;
    *a4 = *(_DWORD *)(v7 + 32);
    a4[1] = *(_DWORD *)(v7 + 36);
    goto LABEL_15;
  }
  v13 = (int (__stdcall *)(int, HDC))v8[533];
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel || (PsGetCurrentProcess(), !bIsProcessLocalSystem(v15)) )
    {
      if ( !v13 )
      {
        if ( gfUMPDDebug )
          _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2467);
        goto LABEL_22;
      }
    }
  }
  v10 = v13(v7 + 16, a3);
  if ( v10 )
  {
    v11 = a3;
    if ( *(_DWORD *)a3 != -1 )
    {
LABEL_15:
      v12 = v16[0];
      *(_DWORD *)((struct HDC__ *)v16[0] + 459) = *(_DWORD *)v11;
      *(_DWORD *)((struct HDC__ *)v12 + 460) = v11[1];
      goto LABEL_23;
    }
    v10 = (v8[6] & 0x8000) != 0 ? v10 : 0;
    if ( v10 )
    {
      *((_DWORD *)v16[0] + 6) &= ~0x100u;
      if ( *(_DWORD *)(v7 + 92) )
      {
        GreDeleteWnd(*(EWNDOBJ **)(v7 + 92));
        *(_DWORD *)(v7 + 92) = 0;
      }
      *((_WORD *)v16[0] + 912) = 0;
    }
  }
LABEL_23:
  if ( v16[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v10;
}
