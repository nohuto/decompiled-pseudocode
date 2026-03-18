/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C0013344
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0012A4C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0013134 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00DC92C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02BBC8C (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !*((_QWORD *)a1 + 2) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 3056LL))(*((_QWORD *)a1 + 1));
  }
}
