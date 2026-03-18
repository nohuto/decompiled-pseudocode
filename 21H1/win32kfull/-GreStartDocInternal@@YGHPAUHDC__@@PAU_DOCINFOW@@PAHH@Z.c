/*
 * XREFs of ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909
 * Callers:
 *     _NtGdiStartDoc@16 @ 0x1D998C (_NtGdiStartDoc@16.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AAEHXZ @ 0x5A4BA (-SaveAttributesHelper@XDCOBJ@@AAEHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 *     _GreExtEscape@24 @ 0x1D8C5F (_GreExtEscape@24.c)
 *     ?bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z @ 0x1E7C30 (-bIsProcessLocalSystem@@YGHPAU_EPROCESS@@@Z.c)
 */

int __userpurge GreStartDocInternal@<eax>(int a1@<edx>, HDC a2@<ecx>, HDC a3, struct _DOCINFOW *a4, int *a5, int a6)
{
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  DC *v11; // edx
  int v12; // ecx
  DC **v13; // esi
  int (__stdcall *v14)(int, _DWORD, struct _DOCINFOW *); // ebx
  int v15; // ebx
  HDC v16; // esi
  struct _EPROCESS *v18; // [esp+0h] [ebp-28h]
  _DWORD *v19; // [esp+10h] [ebp-18h] BYREF
  HDC v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h] BYREF
  DC *v22[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v21 = a1;
  v7 = 0;
  v20 = a2;
  memset(v22, 0, sizeof(v22));
  XDCOBJ::vLock((XDCOBJ *)v22, a2);
  if ( v22[0] )
  {
    if ( ((unsigned int)a2 & 0x7F0000) != 0x10000 && ((unsigned int)a2 & 0x7F0000) != 0x660000 )
    {
      v8 = (_DWORD *)*((_DWORD *)v22[0] + 9);
      v19 = v8;
      v9 = v8[6];
      if ( (v9 & 1) == 0 && v8[456] && !*((_DWORD *)v22[0] + 5) && !*((_DWORD *)v22[0] + 126) )
      {
        if ( (v9 & 0x8000) != 0 )
        {
          if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v19, 0) )
          {
            v10 = v19;
            *(_DWORD *)a3 = *(_DWORD *)(v19[455] + 72) & 0x2000000;
            DC::pSurface(v22[0], (struct SURFACE *)v10[455]);
            if ( *(_DWORD *)a3 )
            {
              v11 = v22[0];
              v12 = v19[455];
              *((_DWORD *)v22[0] + 128) = *(_DWORD *)(v12 + 32);
              *((_DWORD *)v11 + 129) = *(_DWORD *)(v12 + 36);
              DC::bSetDefaultRegion(v22[0]);
            }
            v13 = 0;
            v14 = (int (__stdcall *)(int, _DWORD, struct _DOCINFOW *))v19[510];
            if ( (v19[6] & 0x8000) != 0 )
            {
              v13 = v22;
              if ( (*((_BYTE *)v22[0] + 32) & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v22);
                *((_DWORD *)v22[0] + 8) &= ~2u;
              }
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel && (PsGetCurrentProcess(), bIsProcessLocalSystem(v18))
              || v14 )
            {
              v15 = v14(v19[455] != 0 ? v19[455] + 16 : 0, *(_DWORD *)(v21 + 4), a4);
            }
            else
            {
              if ( gfUMPDDebug )
                _DbgPrint(
                  "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n",
                  1710);
              v15 = 0;
            }
            if ( v13 && XDCOBJ::SaveAttributesHelper((XDCOBJ *)v13) )
              *((_DWORD *)*v13 + 8) |= 2u;
            v16 = v20;
            if ( *((_DWORD *)v22[0] + 457) != -1 )
            {
              v21 = *((_DWORD *)v22[0] + 457);
              GreExtEscape(v20, (struct DCOBJ *)4, (int)&v21, 0, 0);
              *((_DWORD *)v22[0] + 457) = -1;
            }
            if ( (*((_DWORD *)v22[0] + 6) & 0x400) != 0 )
            {
              v21 = 1;
              GreExtEscape(v16, (struct DCOBJ *)2, (int)&v21, 0, 0);
              *((_DWORD *)v22[0] + 6) &= ~0x400u;
            }
            if ( v15 )
            {
              v7 = (int)a4;
              *((_DWORD *)v22[0] + 18) = *((_DWORD *)v22[0] + 17);
            }
          }
        }
        else
        {
          v7 = -1;
        }
      }
    }
  }
  if ( v22[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v7;
}
