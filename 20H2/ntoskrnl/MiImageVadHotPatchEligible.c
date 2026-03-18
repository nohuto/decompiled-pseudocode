/*
 * XREFs of MiImageVadHotPatchEligible @ 0x140681898
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiSetImageHotPatchAllowed @ 0x1408D0D44 (MiSetImageHotPatchAllowed.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiImageVadHotPatchEligible(__int64 a1)
{
  return MiUserHotPatchReserveSize
      && (*(_DWORD *)(a1 + 64) & 0x1000000) == 0
      && (*(_DWORD *)(a1 + 48) & 0xF80) == 0x380
      && (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
       - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
       + 1 > *(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL);
}
