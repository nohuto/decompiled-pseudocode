/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C013C0F8
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C002C58C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C013C154 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
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
