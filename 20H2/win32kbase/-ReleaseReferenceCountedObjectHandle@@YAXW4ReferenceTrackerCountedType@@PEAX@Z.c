/*
 * XREFs of ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C014E75C
 * Callers:
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C0018DC0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     bDeleteBrush @ 0x1C00371E0 (bDeleteBrush.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C0057950 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAXPEAUSCircularBuffer@123@@Z @ 0x1C014EEFC (-ReleaseToMostRecentlyFreedList@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAX.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C014F9FC (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall ReleaseReferenceCountedObjectHandle(unsigned int a1, void *a2)
{
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v3; // rbx
  NSInstrumentation::CPointerHashTable *v4; // rcx
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(&qword_1C02453D8 + 2 * a1);
  if ( v3 )
  {
    v4 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)v3 + 3);
    v5 = 0LL;
    NSInstrumentation::CPointerHashTable::Remove(v4, a2, &v5);
    NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReleaseToMostRecentlyFreedList(
      v3,
      v5,
      (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)a2);
  }
}
