/*
 * XREFs of ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C004B474
 * Callers:
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0159260 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C02FCB18 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGWORKQUEUE::QueueWork(PLIST_ENTRY ListHead, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v6; // rax

  v6 = (struct _LIST_ENTRY *)operator new[](0x20uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( !v6 )
    return 3221225495LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[1].Flink = a2;
  v6[1].Blink = a3;
  ExInterlockedInsertTailList(ListHead, v6, (PKSPIN_LOCK)&ListHead[1]);
  return 0LL;
}
