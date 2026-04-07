/*
 * XREFs of ?RemoveSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800BEC6C
 * Callers:
 *     ?Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800BED4C (-Validate@CPerMonitorWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B030 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z @ 0x18008A458 (-Remove@-$DynArray@PEAVCBitmapSource@@$0A@@@QEAAHAEBQEAVCBitmapSource@@@Z.c)
 *     ?FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@PEAUHMONITOR__@@@Z @ 0x1800BEC34 (-FindSecondaryRepresentation@CPerMonitorWindowRepresentation@@AEAAPEAUSecondaryRepresentation@1@.c)
 */

__int64 __fastcall CPerMonitorWindowRepresentation::RemoveSecondaryRepresentation(
        CPerMonitorWindowRepresentation *this,
        HMONITOR a2)
{
  unsigned int v3; // edi
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  struct CPerMonitorWindowRepresentation::SecondaryRepresentation *SecondaryRepresentation; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  SecondaryRepresentation = CPerMonitorWindowRepresentation::FindSecondaryRepresentation(this, a2);
  v4 = SecondaryRepresentation;
  if ( SecondaryRepresentation )
  {
    DynArray<CBitmapSource *,0>::Remove((__int64 *)this + 4, &SecondaryRepresentation);
    v5 = *((_QWORD *)this + 3);
    if ( v5
      && (v6 = VisualCollection::Remove((VisualCollection *)(v5 + 32), *(struct CVisual **)(*((_QWORD *)v4 + 1) + 88LL)),
          v3 = v6,
          v6 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x147u);
    }
    else
    {
      v7 = *((_QWORD *)v4 + 1);
      if ( *(_QWORD *)(v7 + 88) )
      {
        CBaseObject::Release(*(CBaseObject **)(v7 + 88));
        *(_QWORD *)(*((_QWORD *)v4 + 1) + 88LL) = 0LL;
        v7 = *((_QWORD *)v4 + 1);
      }
      if ( v7 )
      {
        (**(void (__fastcall ***)(__int64, __int64))v7)(v7, 1LL);
        *((_QWORD *)v4 + 1) = 0LL;
      }
      (*(void (__fastcall **)(WPF::HeapBase *, struct CPerMonitorWindowRepresentation::SecondaryRepresentation *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
    }
  }
  return v3;
}
