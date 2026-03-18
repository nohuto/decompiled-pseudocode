/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C33C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990 (NtGdiGetAppliedDeviceGammaRamp.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
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
      v2 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 48) = 0;
    }
    if ( v2 )
      XDCOBJ::vUnlockFast((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
}
