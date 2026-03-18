/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C008BB14
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00829C0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C008B9DC (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0146EA8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  int v2; // eax

  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 )
    {
      if ( qword_1C0257680 )
        v2 = qword_1C0257680();
      else
        v2 = -1073741637;
      if ( v2 >= 0 )
      {
        if ( qword_1C0257688 )
          qword_1C0257688(this);
      }
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
