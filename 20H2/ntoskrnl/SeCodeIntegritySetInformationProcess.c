/*
 * XREFs of SeCodeIntegritySetInformationProcess @ 0x14091E6A0
 * Callers:
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCodeIntegritySetInformationProcess(__int64 a1, unsigned int a2, const void *a3, unsigned int a4)
{
  size_t v4; // r14
  PVOID PoolWithTag; // rax
  void *v10; // rbx
  unsigned int v11; // edi

  v4 = a4;
  if ( !qword_140C1D9F0 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4, 0x20206553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memmove(PoolWithTag, a3, v4);
  v11 = ((__int64 (__fastcall *)(__int64, _QWORD, void *, _QWORD))qword_140C1D9F0)(a1, a2, v10, (unsigned int)v4);
  ExFreePoolWithTag(v10, 0);
  return v11;
}
