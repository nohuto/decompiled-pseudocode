/*
 * XREFs of MiInitializeLargeUserBasePfn @ 0x1403F7C20
 * Callers:
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
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
