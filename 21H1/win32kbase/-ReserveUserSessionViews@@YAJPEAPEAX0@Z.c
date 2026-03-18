/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0142444
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0014D10 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C01424A0 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 */

int __fastcall ReserveUserSessionViews(void **a1, void **a2)
{
  int result; // eax

  gbUsingDefaultSectionSize = 0;
  result = ReserveUserSessionViewsWorker(a1, a2);
  if ( result < 0 )
  {
    gdwNOIOSectionSize = 128;
    gdwDesktopSectionSize = 512;
    gbUsingDefaultSectionSize = 1;
    return ReserveUserSessionViewsWorker(a1, a2);
  }
  return result;
}
