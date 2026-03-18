/*
 * XREFs of _NtGdiEndPage@4 @ 0x1D93FF
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA (-SaveAttributesHelper@XDCOBJ@@AAEHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 */

int __userpurge NtGdiEndPage@<eax>(struct _EPROCESS *a1@<edi>, HDC a2)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // ecx
  XDCOBJ *v5; // esi
  DC *v8[3]; // [esp+8h] [ebp-Ch] BYREF
  HDC v9; // [esp+1Ch] [ebp+8h]

  v2 = 0;
  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a2);
  if ( !XDCOBJ::bValidSurf(v8) )
    goto LABEL_28;
  if ( ((unsigned int)a2 & 0x7F0000) == 0x10000 )
    goto LABEL_28;
  if ( ((unsigned int)a2 & 0x7F0000) == 0x660000 )
    goto LABEL_28;
  v9 = (HDC)*((_DWORD *)v8[0] + 126);
  if ( !v9 )
    goto LABEL_28;
  v3 = (_DWORD *)*((_DWORD *)v8[0] + 9);
  v4 = v3[6];
  if ( (v4 & 1) != 0 || !v3[456] )
    goto LABEL_28;
  v5 = 0;
  if ( (v4 & 0x8000) != 0 )
  {
    v5 = (XDCOBJ *)v8;
    if ( (*((_BYTE *)v8[0] + 32) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v8);
      *((_DWORD *)v8[0] + 8) &= ~2u;
    }
  }
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel || (PsGetCurrentProcess(), !bIsProcessLocalSystem(a1)) )
    {
      if ( !v3[507] )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
            2336);
        v2 = 0;
        goto LABEL_25;
      }
    }
  }
  v2 = ((int (__stdcall *)(HDC))v3[507])(v9 + 4);
  if ( !v2 )
  {
LABEL_25:
    if ( v5 && XDCOBJ::SaveAttributesHelper(v5) )
      *(_DWORD *)(*(_DWORD *)v5 + 32) |= 2u;
    goto LABEL_28;
  }
  if ( v5 && XDCOBJ::SaveAttributesHelper(v5) )
    *(_DWORD *)(*(_DWORD *)v5 + 32) |= 2u;
  v5 = 0;
  if ( (v3[6] & 0x8000) != 0 )
  {
    *((_DWORD *)v8[0] + 6) &= ~0x100u;
    if ( *((_DWORD *)v9 + 23) )
    {
      GreDeleteWnd(*((EWNDOBJ **)v9 + 23));
      *((_DWORD *)v9 + 23) = 0;
    }
    *((_WORD *)v8[0] + 912) = -1;
    goto LABEL_25;
  }
LABEL_28:
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v2;
}
