/*
 * XREFs of ?Initialize@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NI@Z @ 0x1C01516B0
 * Callers:
 *     ?Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ @ 0x1C0151654 (-Create@CBackTraceStoreEx@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     <none>
 */

char __fastcall NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Initialize(
        __int64 a1)
{
  char v1; // bl
  _DWORD *PoolWithTag; // rax
  PVOID v4; // rax
  unsigned int i; // ecx
  __int64 v6; // rax
  _QWORD *v7; // rax

  v1 = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 4uLL, 0x32497355u);
  if ( PoolWithTag )
    *PoolWithTag = 0;
  *(_QWORD *)(a1 + 40) = PoolWithTag;
  *(_QWORD *)(a1 + 32) = 256LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000uLL, 0x64497355u);
  *(_QWORD *)(a1 + 48) = v4;
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 32); v7[1] = 0LL )
    {
      v6 = i++;
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16 * v6);
      *v7 = 0LL;
    }
    return 1;
  }
  return v1;
}
