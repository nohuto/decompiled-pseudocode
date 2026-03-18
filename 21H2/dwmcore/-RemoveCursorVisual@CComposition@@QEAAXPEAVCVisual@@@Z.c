/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x1801937E4
 * Callers:
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800FF89C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z @ 0x18010386C (-RemoveAt@-$DynArray@PEAUTouchUpdateInfo@InteractionLatencyTelemetry@@$0A@@@QEAAJI@Z.c)
 *     ??_GCExcludeVisualReference@@QEAAPEAXI@Z @ 0x180192CAC (--_GCExcludeVisualReference@@QEAAPEAXI@Z.c)
 *     ?GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x1801A9220 (-GetVisual@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  int v2; // ebx
  _QWORD *v4; // rsi
  CExcludeVisualReference *v5; // rdi
  CExcludeVisualReference *v6; // rcx
  unsigned int v7; // r8d

  v2 = *((_DWORD *)this + 248);
  if ( v2 > 0 )
  {
    v4 = (_QWORD *)((char *)this + 968);
    do
    {
      v5 = *(CExcludeVisualReference **)(*v4 + 8LL * (unsigned int)(v2 - 1));
      if ( !CExcludeVisualReference::GetVisual(v5) || CExcludeVisualReference::GetVisual(v6) == a2 )
      {
        DynArray<InteractionLatencyTelemetry::TouchUpdateInfo *,0>::RemoveAt((__int64)v4, v7);
        if ( v5 )
          CExcludeVisualReference::`scalar deleting destructor'(v5);
      }
      --v2;
    }
    while ( v2 > 0 );
  }
}
