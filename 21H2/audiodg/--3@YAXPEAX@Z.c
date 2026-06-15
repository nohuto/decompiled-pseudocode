/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14001CC5C
 * Callers:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400166F0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F44 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140017C10 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018520 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x14001D680 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140050560 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140050590 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x140050B00 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
