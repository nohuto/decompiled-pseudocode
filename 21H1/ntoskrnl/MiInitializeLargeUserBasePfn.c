/*
 * XREFs of MiInitializeLargeUserBasePfn @ 0x1403F0C10
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 * Callees:
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 */

__int64 __fastcall MiInitializeLargeUserBasePfn(__int64 a1, __int64 a2, unsigned __int64 a3, _DWORD *a4)
{
  unsigned __int8 v7; // al
  char v8; // dl

  v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = (a3 >> 3) & 0xFFFFFFFFFFELL;
  *(_BYTE *)(a1 + 34) = v8 & 0xF8 | 6;
  return MiUnlockPage(a1, v7);
}
