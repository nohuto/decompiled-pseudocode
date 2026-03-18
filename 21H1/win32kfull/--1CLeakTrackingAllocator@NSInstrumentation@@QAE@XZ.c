/*
 * XREFs of ??1CLeakTrackingAllocator@NSInstrumentation@@QAE@XZ @ 0xD42E8
 * Callers:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SGXPAV12@@Z @ 0xD42C2 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SGXPAV12@@Z.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z @ 0xD3A64 (-Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z.c)
 *     ?DestroyBuckets@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@CGXPAVCHashBucket@12@I@Z @ 0x24A20C (-DestroyBuckets@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUni.c)
 */

void __thiscall NSInstrumentation::CLeakTrackingAllocator::~CLeakTrackingAllocator(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  _DWORD *v2; // ecx
  PVOID *v3; // ebx
  int v4; // esi
  void *v5; // eax

  v2 = (_DWORD *)*((_DWORD *)this + 12);
  if ( v2 )
    NSInstrumentation::CPointerHashTable::Destroy(v2);
  v3 = (PVOID *)*((_DWORD *)this + 13);
  if ( v3 )
  {
    ExFreePoolWithTag(v3[7], 0);
    ExFreePoolWithTag(v3, 0);
  }
  v4 = *((_DWORD *)this + 14);
  if ( v4 )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::DestroyBuckets(*(PVOID *)(v4 + 32));
    v5 = *(void **)(v4 + 28);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 20) = 0;
    *(_DWORD *)(v4 + 24) = 0;
    ExFreePoolWithTag((PVOID)v4, 0);
  }
}
