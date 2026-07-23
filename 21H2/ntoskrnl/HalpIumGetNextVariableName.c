/*
 * XREFs of HalpIumGetNextVariableName @ 0x1404D65B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

unsigned __int64 __fastcall HalpIumGetNextVariableName(size_t *a1, void *a2, _OWORD *a3)
{
  size_t v7; // rax
  __int64 v8; // rcx
  SIZE_T v9; // rbp
  char *PoolWithTag; // rax
  void *v11; // rdi
  __int64 v12; // rbx

  if ( !qword_140C4A290 )
    return 0x8000000000000003uLL;
  v7 = *a1;
  v8 = 2072544LL;
  if ( v7 < 0x1F9FE0 )
    v8 = v7;
  *a1 = v8;
  v9 = (v8 + 4127) & 0xFFFFFFFFFFFFF000uLL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x77466B53u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 0x8000000000000009uLL;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 32;
  memmove(PoolWithTag + 32, a2, *a1);
  *(_QWORD *)v11 = *a1;
  *((_OWORD *)v11 + 1) = *a3;
  v12 = ((__int64 (__fastcall *)(__int64, void *, SIZE_T))qword_140C4A290)(4LL, v11, v9);
  *a1 = *(_QWORD *)v11;
  *a3 = *((_OWORD *)v11 + 1);
  if ( v12 )
  {
    if ( v12 == 0x8000000000000005uLL && v9 == 2072576 )
      v12 = 0x8000000000000004uLL;
  }
  else
  {
    memmove(a2, *((const void **)v11 + 1), *a1);
  }
  ExFreePoolWithTag(v11, 0);
  return v12;
}
