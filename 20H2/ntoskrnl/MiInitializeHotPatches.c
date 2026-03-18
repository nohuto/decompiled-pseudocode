/*
 * XREFs of MiInitializeHotPatches @ 0x140A54F7C
 * Callers:
 *     MiInitSystem @ 0x140A52854 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeHotPatches(__int64 a1)
{
  __int64 result; // rax

  MiHotPatchGeneration = 1;
  *(_QWORD *)&MiGlobalHotPatchList = 0LL;
  MiUserSidPatchLists = 0LL;
  MiSecureImageActivePatches = 0LL;
  MiHotPatchListLock = 0LL;
  result = *(_QWORD *)(a1 + 240);
  dword_140C4CB30 = (*(_DWORD *)(result + 3464) + 4095) & 0xFFFFF000;
  MiUserHotPatchReserveSize = dword_140C4CB30;
  return result;
}
