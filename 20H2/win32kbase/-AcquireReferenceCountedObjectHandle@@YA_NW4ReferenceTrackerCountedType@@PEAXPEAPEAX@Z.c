/*
 * XREFs of ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C001CBFC
 * Callers:
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C001CAB8 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C001CB6C (-Allocate@SURFACE@@SAPEAV1@_KG@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1C001EDB0 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C014EA50 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 */

char __fastcall AcquireReferenceCountedObjectHandle(unsigned int a1, void *a2, _QWORD *a3)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx
  void *v5; // rax

  v4 = *(&qword_1C02453D8 + 2 * a1);
  if ( v4 )
  {
    v5 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v4, a2);
    if ( !v5 )
      return (char)v5;
    *a3 = v5;
  }
  else
  {
    *a3 = 0LL;
  }
  LOBYTE(v5) = 1;
  return (char)v5;
}
