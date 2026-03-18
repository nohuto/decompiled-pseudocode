/*
 * XREFs of ?Free@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30EE
 * Callers:
 *     ?FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z @ 0xD30C4 (-FreePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEXPAX@Z.c)
 *     _Win32UAFMFreePagedLookasideListImpl@8 @ 0x1836E4 (_Win32UAFMFreePagedLookasideListImpl@8.c)
 *     _Win32UAFMFreePoolImpl@8 @ 0x18371B (_Win32UAFMFreePoolImpl@8.c)
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E (-LookUpAndRemove@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::Free(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *P)
{
  char *v3; // edi
  NSInstrumentation::CPointerHashTable *v4; // ecx
  struct NSInstrumentation::CBackTraceStorageUnit *v5; // [esp+Ch] [ebp-4h] BYREF

  v5 = 0;
  v3 = P;
  v4 = (NSInstrumentation::CPointerHashTable *)*((_DWORD *)this + 12);
  if ( v4
    && ((unsigned __int16)P & 0xFFFu) >= 8
    && NSInstrumentation::CPointerHashTable::Remove(v4, (_QWORD *)P - 1, (void **)&v5) )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
      *((NSInstrumentation::CPrioritizedWriterLock **)this + 14),
      v5);
    ExFreePoolWithTag(v3 - 8, 0);
  }
  else
  {
    if ( *((_DWORD *)this + 13) )
    {
      if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(&P, &v5) )
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
          *((NSInstrumentation::CPrioritizedWriterLock **)this + 14),
          v5);
    }
    ExFreePoolWithTag(v3, 0);
  }
}
