/*
 * XREFs of ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C001D6A0
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C001D490 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C002050C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00646D8 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02BA72C (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vCleanupFontFile(struct PFFCLEANUP *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    if ( !*((_QWORD *)a1 + 2) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 3056LL))(*((_QWORD *)a1 + 1));
  }
}
