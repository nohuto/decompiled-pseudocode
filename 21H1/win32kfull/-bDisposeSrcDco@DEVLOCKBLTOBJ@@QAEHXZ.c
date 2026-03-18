/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x5A9C8
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QAE@XZ @ 0x5DBF8 (--1DEVLOCKBLTOBJ@@QAE@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z @ 0x1D48D3 (-vUnLock@DEVLOCKBLTOBJ@@QAEXH@Z.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x5BD44 (-vClearRenderState@DEVLOCKBLTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 */

int __thiscall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  DC *v6; // eax
  DC *v7; // ecx
  int v8; // edx
  int v9; // edi
  int CurrentProcess; // eax
  int v12; // [esp-4h] [ebp-10h]
  int v13; // [esp+8h] [ebp-4h] BYREF

  v2 = (DEVLOCKBLTOBJ *)((char *)this + 64);
  v3 = *((_DWORD *)this + 16);
  if ( v3 && *((_BYTE *)v2 + 13) )
  {
    v4 = *(_DWORD *)(v3 + 36);
    if ( (*((_BYTE *)this + 40) & 0x20) != 0 )
    {
      *(_DWORD *)(v3 + 24) &= ~0x4000u;
      DC::pSurface(*(DC **)v2, *(struct SURFACE **)(v4 + 1820));
    }
    v5 = *((_DWORD *)this + 20);
    if ( v5 )
    {
      v12 = *(_DWORD *)(v5 + 44);
      CurrentProcess = PsGetCurrentProcess();
      MmUnmapViewOfSection(CurrentProcess, v12);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v2);
    v6 = *(DC **)v2;
    if ( *(_DWORD *)v2 )
    {
      if ( *((_BYTE *)v2 + 12) )
      {
        *((_DWORD *)v6 + 7) &= ~2u;
        v6 = *(DC **)v2;
        *((_BYTE *)v2 + 12) = 0;
      }
      if ( v6 )
      {
        v7 = v6;
        if ( *((_DWORD *)v2 + 1) )
        {
          v7 = v6;
          if ( (*((_BYTE *)v6 + 32) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper(v2);
            *(_DWORD *)(*(_DWORD *)v2 + 32) &= ~2u;
            v7 = *(DC **)v2;
            *((_DWORD *)v2 + 1) = 0;
          }
        }
        v8 = *((_DWORD *)v2 + 2);
        v13 = 0;
        v9 = *(_DWORD *)v7;
        HmgDecrementExclusiveReferenceCountEx(v7, v8, &v13);
        if ( v13 )
          bDeleteDCInternalEx(v9, 0);
      }
    }
    *(_DWORD *)v2 = 0;
  }
  return 1;
}
