/*
 * XREFs of _NtGdiStartPage@4 @ 0x1D9D27
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA (-SaveAttributesHelper@XDCOBJ@@AAEHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 */

int __stdcall NtGdiStartPage(HDC a1)
{
  int v1; // edi
  DC *v2; // eax
  int v3; // ebx
  int v4; // esi
  struct _EPROCESS *v6; // [esp+0h] [ebp-18h]
  unsigned __int16 v7; // [esp+4h] [ebp-14h]
  DC *v8[3]; // [esp+Ch] [ebp-Ch] BYREF

  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v1 = 0;
  if ( !XDCOBJ::bValidSurf(v8) || ((unsigned int)a1 & 0x7F0000) == 0x10000 || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
    goto LABEL_22;
  }
  v2 = v8[0];
  v3 = *((_DWORD *)v8[0] + 126);
  if ( v3 )
  {
    v4 = *((_DWORD *)v8[0] + 9);
    if ( *(_DWORD *)(v4 + 1824) )
    {
      if ( (*(_DWORD *)(v4 + 24) & 0x8000) != 0 )
      {
        if ( (*((_BYTE *)v8[0] + 32) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v8);
          *((_DWORD *)v8[0] + 8) &= ~2u;
        }
        if ( gUMPDSecurityLevel == 2
          || gUMPDSecurityLevel && (PsGetCurrentProcess(), bIsProcessLocalSystem(v6))
          || *(_DWORD *)(v4 + 2032) )
        {
          v1 = (*(int (__stdcall **)(int))(v4 + 2032))(v3 + 16);
          if ( v1 )
          {
            if ( XDCOBJ::SaveAttributesHelper((XDCOBJ *)v8) )
              *((_DWORD *)v8[0] + 8) |= 2u;
            *((_DWORD *)v8[0] + 6) |= 0x100u;
            *((_DWORD *)v8[0] + 459) = 0;
            *((_DWORD *)v8[0] + 460) = 0;
            goto LABEL_22;
          }
        }
        else
        {
          v1 = 0;
        }
        if ( XDCOBJ::SaveAttributesHelper((XDCOBJ *)v8) )
          *((_DWORD *)v8[0] + 8) |= 2u;
        bEndDocInternal(1, a1, (HDC)2, (unsigned int)v6, v7);
LABEL_22:
        v2 = v8[0];
      }
    }
  }
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v1;
}
