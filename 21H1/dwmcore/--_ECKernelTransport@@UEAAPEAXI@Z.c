/*
 * XREFs of ??_ECKernelTransport@@UEAAPEAXI@Z @ 0x180156AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CKernelTransport *__fastcall CKernelTransport::`vector deleting destructor'(CKernelTransport *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CKernelTransport::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    NtDCompositionDestroyConnection();
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &ICompositorSchedulerTelemetry::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x18);
    else
      operator delete(this);
  }
  return this;
}
