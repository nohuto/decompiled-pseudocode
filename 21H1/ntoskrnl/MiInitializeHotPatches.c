/*
 * XREFs of MiInitializeHotPatches @ 0x140A4EBFC
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
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
  dword_140C4CBF0 = (*(_DWORD *)(result + 3464) + 4095) & 0xFFFFF000;
  MiUserHotPatchReserveSize = dword_140C4CBF0;
  return result;
}
