/*
 * XREFs of bKillPFFOBJ @ 0xCE000
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z @ 0xCDD06 (-bUnloadAllButPermanentFonts@PFTOBJ@@QAEHH@Z.c)
 * Callees:
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 */

int __fastcall bKillPFFOBJ(PFFOBJ *a1, struct PFFCLEANUP *a2)
{
  int result; // eax

  result = 0;
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 48) && !*(_DWORD *)(*(_DWORD *)a1 + 44) )
  {
    PFFOBJ::vPFFC_Delete(a1, a2);
    return 1;
  }
  return result;
}
