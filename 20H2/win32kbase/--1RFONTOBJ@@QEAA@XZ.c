/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C004BFB4
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00189F0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C003DE00 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C004BE7C (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C013E698 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  int v2; // eax

  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 )
    {
      if ( qword_1C024F6C0 )
        v2 = qword_1C024F6C0();
      else
        v2 = -1073741637;
      if ( v2 >= 0 )
      {
        if ( qword_1C024F6C8 )
          qword_1C024F6C8(this);
      }
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
