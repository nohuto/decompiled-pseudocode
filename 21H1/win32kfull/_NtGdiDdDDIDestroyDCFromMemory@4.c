/*
 * XREFs of _NtGdiDdDDIDestroyDCFromMemory@4 @ 0xCB254
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x7C296 (--1DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ @ 0xF636A (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YGHXZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z @ 0x1D3836 (-vAltCheckLockIgnoreStockBit@SURFREF@@QAEXPAUHSURF__@@@Z.c)
 */

int __stdcall NtGdiDdDDIDestroyDCFromMemory(ULONG a1)
{
  int *v1; // ecx
  int v2; // ebx
  HSURF v3; // edi
  int v4; // esi
  DYNAMICMODECHANGESHARELOCK *v5; // ecx
  SURFOBJ *v6; // eax
  ULONG cjBits; // esi

  v1 = (int *)a1;
  if ( a1 >= _MmUserProbeAddress )
    v1 = (int *)_MmUserProbeAddress;
  v2 = *v1;
  v3 = (HSURF)v1[1];
  if ( !v3 || !v2 )
    return -1073741811;
  v4 = -1073741811;
  if ( Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&a1 + 3));
    a1 = 0;
    SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)&a1, v3);
    if ( SURFREF::bValid((SURFREF *)&a1) )
      v4 = *(_DWORD *)(a1 + 144) == 0 ? 0xC000000D : 0;
    SURFREF::vUnlock((SURFREF *)&a1);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v5);
  }
  else
  {
    v6 = EngLockSurface(v3);
    if ( v6 )
    {
      cjBits = v6[2].cjBits;
      EngUnlockSurface(v6);
      v4 = cjBits != 0 ? 0 : -1073741811;
    }
  }
  if ( v4 >= 0 )
  {
    if ( !bDeleteDCInternal(v2, 0, 0, 1) )
      v4 = -1073741811;
    if ( v4 >= 0 && !bDeleteSurface(v3) )
      return -1073741811;
  }
  return v4;
}
