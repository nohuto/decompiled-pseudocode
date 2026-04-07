/*
 * XREFs of ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x1800B6B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800144A4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

void __fastcall CVirtualDesktopThumbnail::NotifyWindowDestruction(
        CVirtualDesktopThumbnail *this,
        const struct CTopLevelWindow **a2)
{
  const struct CTopLevelWindow **v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  DynArray<CWindowData *,0>::Remove((__int64 *)(*((_QWORD *)this + 35) + 128LL), &v4);
  DynArray<CWindowData *,0>::Remove((__int64 *)(*((_QWORD *)this + 35) + 160LL), &v4);
  CDesktopThumbnailBase::NotifyWindowDestruction(this, a2);
}
