/*
 * XREFs of ?vPFFC_DeleteAndCleanup@PFFOBJ@@QAEXXZ @ 0x221DA8
 * Callers:
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 *     ?CleanUpPFF@@YGXPAVPFF@@@Z @ 0x2214F4 (-CleanUpPFF@@YGXPAVPFF@@@Z.c)
 * Callees:
 *     ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6 (-vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 */

void __thiscall PFFOBJ::vPFFC_DeleteAndCleanup(PFFOBJ *this)
{
  _DWORD v1[3]; // [esp+4h] [ebp-Ch] BYREF

  memset(v1, 0, sizeof(v1));
  PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v1);
  vCleanupFontFile(v1);
}
