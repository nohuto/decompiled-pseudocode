/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14001C8EC
 * Callers:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x140016710 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140017C30 (--_GCSystemEffectWrapper@@UEAAPEAXI@Z.c)
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140018540 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x14001D320 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x140045D50 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140045D80 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1400462F0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
