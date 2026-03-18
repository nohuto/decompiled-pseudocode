/*
 * XREFs of ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B3290
 * Callers:
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180017844 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18003CCB0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800685EC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007AA50 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18007CDE0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18007CF48 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18007EE60 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007EF90 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x1800925D4 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180092A40 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z @ 0x1801B1550 (-DebugDump@CVisual@@UEAAXPEAVCVisualTreeDumpContext@@@Z.c)
 *     ?VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z @ 0x1802377FC (-VisualHasAnyChildFlagged@CManipulationContext@@SA_NPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B32C8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 */

unsigned __int64 __fastcall CPtrArrayBase::operator[](CPtrArrayBase *a1)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v2; // rdx
  __int64 *v3; // rcx
  bool v4; // zf
  __int64 v5; // rax

  Count = CPtrArrayBase::GetCount(a1);
  if ( v2 >= Count )
    return 0LL;
  v4 = Count == 1;
  v5 = *v3;
  if ( v4 )
    return v5 & 0xFFFFFFFFFFFFFFFCuLL;
  else
    return *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFCuLL) + 8 * v2 + 16);
}
