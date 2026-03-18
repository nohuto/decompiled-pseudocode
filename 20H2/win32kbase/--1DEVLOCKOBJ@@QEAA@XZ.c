/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C004C120
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  __int64 v2; // rax

  DEVLOCKOBJ::vDestructor(this);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 48) )
    {
      *(_DWORD *)(v2 + 40) &= ~2u;
      *((_BYTE *)this + 48) = 0;
    }
    XDCOBJ::vUnlockNoNullSet((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
}
