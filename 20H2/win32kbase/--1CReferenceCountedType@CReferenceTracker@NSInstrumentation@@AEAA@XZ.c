/*
 * XREFs of ??1CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAA@XZ @ 0x1C014E954
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C014EB24 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     ?Uninitialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAAXXZ @ 0x1C014F540 (-Uninitialize@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C014F6BC (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

void __fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::~CReferenceCountedType(
        NSInstrumentation::CReferenceTracker::CReferenceCountedType *this)
{
  void *v1; // rbx
  void *v3; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType **v5; // rcx
  unsigned int v6; // esi
  void *v7; // rbx
  void **v8; // rcx
  void ***v9; // rax

  v1 = (void *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Uninitialize(*((_QWORD *)this + 4));
    ExFreePoolWithTag(v1, 0);
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    NSInstrumentation::CPointerHashTable::Destroy(v3);
  v4 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)this;
  if ( *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)this + 8LL) != this
    || (v5 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType **)*((_QWORD *)this + 1), *v5 != this) )
  {
LABEL_16:
    __fastfail(3u);
  }
  *v5 = v4;
  v6 = 0;
  *((_QWORD *)v4 + 1) = v5;
  do
  {
    v7 = (void *)*((_QWORD *)this + 2 * v6 + 7);
    if ( v7 )
    {
      while ( *(void **)v7 != v7 )
      {
        v8 = (void **)*((_QWORD *)v7 + 1);
        if ( *v8 != v7 )
          goto LABEL_16;
        v9 = (void ***)v8[1];
        if ( *v9 != v8 )
          goto LABEL_16;
        *((_QWORD *)v7 + 1) = v9;
        *v9 = (void **)v7;
        ExFreePoolWithTag(v8, 0);
      }
      ExFreePoolWithTag(*((PVOID *)v7 + 2), 0);
      ExFreePoolWithTag(*((PVOID *)v7 + 3), 0);
      ExFreePoolWithTag(v7, 0);
    }
    ++v6;
  }
  while ( v6 < 0x60 );
}
