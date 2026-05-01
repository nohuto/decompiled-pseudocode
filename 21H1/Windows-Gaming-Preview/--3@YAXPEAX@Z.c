/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180045210
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003F4F0 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180041900 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 *     ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x180042530 (--_ECEnumerateEntries@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180042CE0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WR.c)
 *     ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180042EF0 (--1-$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180044900 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180045310 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
