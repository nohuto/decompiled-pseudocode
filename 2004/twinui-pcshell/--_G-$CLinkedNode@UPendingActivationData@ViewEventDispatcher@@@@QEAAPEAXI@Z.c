/*
 * XREFs of ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1802A1AD8
 * Callers:
 *     ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x1802A0754 (--1-$CAutoMemPtr@U-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ.c)
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x1802A0BFC (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1802A4FDC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x1802ABEA4 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(__int64 *a1)
{
  HSTRING v2; // rcx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  v2 = (HSTRING)a1[2];
  if ( v2 )
    WindowsDeleteString(v2);
  operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
