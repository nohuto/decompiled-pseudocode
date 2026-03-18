/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1C014F604
 * Callers:
 *     ?Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@Z @ 0x1C014EB24 (-Create@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@SAPEAV123@PEAU_LIST_ENTRY@@K@.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C014F6BC (-Destroy@CPointerHashTable@NSInstrumentation@@SAXPEAV12@@Z.c)
 */

struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create()
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v1; // rbx
  struct NSInstrumentation::CPointerHashTable *result; // rax
  PVOID v3; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x38uLL, 0x38497355u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  PoolWithTag[4] = 0LL;
  *((_DWORD *)PoolWithTag + 10) = 0;
  *((_DWORD *)PoolWithTag + 11) = 0;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_BYTE *)PoolWithTag + 52) &= ~1u;
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_DWORD *)PoolWithTag + 7) = 0;
  *PoolWithTag = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  v3 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x38497355u);
  v1[4] = v3;
  if ( !v3 )
  {
    NSInstrumentation::CPointerHashTable::Destroy(v1);
    return 0LL;
  }
  memset(v3, 0, 0x1000uLL);
  *((_DWORD *)v1 + 12) = 0;
  result = (struct NSInstrumentation::CPointerHashTable *)v1;
  *((_BYTE *)v1 + 52) &= ~1u;
  *((_DWORD *)v1 + 10) = 256;
  *((_DWORD *)v1 + 11) = 8;
  return result;
}
