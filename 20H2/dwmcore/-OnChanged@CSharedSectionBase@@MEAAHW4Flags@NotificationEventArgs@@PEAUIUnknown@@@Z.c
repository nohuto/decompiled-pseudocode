/*
 * XREFs of ?OnChanged@CSharedSectionBase@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D4680
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ @ 0x1800D3FB0 (-UnmapSharedMemory@CSharedSectionBase@@IEBAXXZ.c)
 *     ?MapSharedMemory@CSharedSectionBase@@KAPEAXPEAX_K@Z @ 0x1800D46CC (-MapSharedMemory@CSharedSectionBase@@KAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CSharedSectionBase::OnChanged(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rcx
  void *v4; // rax

  v2 = 0LL;
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    v4 = CSharedSectionBase::MapSharedMemory(v3, *(unsigned int *)(a1 + 64));
    *(_QWORD *)(a1 + 56) = 0LL;
    v2 = v4;
  }
  if ( *(_QWORD *)(a1 + 72) )
    CSharedSectionBase::UnmapSharedMemory((CSharedSectionBase *)a1);
  *(_QWORD *)(a1 + 72) = v2;
  return 0LL;
}
