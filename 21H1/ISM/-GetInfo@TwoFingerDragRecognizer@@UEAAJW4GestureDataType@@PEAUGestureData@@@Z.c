/*
 * XREFs of ?GetInfo@TwoFingerDragRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x180186250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x180186200 (-GetDragInfo@TwoFingerDragRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::GetInfo(TwoFingerDragRecognizer *a1, int a2, struct GestureData *a3)
{
  bool DragInfo; // bl
  __int64 v4; // r10

  DragInfo = 0;
  if ( (unsigned int)(a2 - 11) <= 1 )
  {
    DragInfo = TwoFingerDragRecognizer::GetDragInfo(a1, a3);
    if ( DragInfo )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0xFFFFFFFFLL);
  }
  return !DragInfo ? 0x80070057 : 0;
}
