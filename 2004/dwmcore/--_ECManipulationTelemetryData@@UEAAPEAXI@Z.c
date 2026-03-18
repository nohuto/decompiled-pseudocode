/*
 * XREFs of ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x1801C724C
 * Callers:
 *     ??_ECManipulationTelemetryData@@W7EAAPEAXI@Z @ 0x1800F0D00 (--_ECManipulationTelemetryData@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180175554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801C8018 (-Remove@-$CQueue@V-$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA-AV-$shared_ptr@UMa.c)
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::`vector deleting destructor'(
        CManipulationTelemetryData *this,
        char a2,
        __int64 a3)
{
  bool v5; // bp
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]

  do
  {
    CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove((char *)this + 104, &v7, a3, 0LL);
    v5 = v7 != 0;
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  while ( v5 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC0);
    else
      operator delete(this);
  }
  return this;
}
