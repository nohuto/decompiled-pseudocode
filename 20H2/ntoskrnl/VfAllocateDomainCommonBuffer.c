/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x14059F480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     ViGetRealDmaOperation @ 0x1409D1A60 (ViGetRealDmaOperation.c)
 *     ViHalTrackDomainCommonBuffer @ 0x1409D1D64 (ViHalTrackDomainCommonBuffer.c)
 */

__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *PoolWithTag; // rbx
  int v14; // edi
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, __int64, int, _QWORD *, __int64); // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x566C6148u);
  if ( PoolWithTag )
  {
    RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64, int, _QWORD *, __int64))ViGetRealDmaOperation(a1);
    v14 = RealDmaOperation(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    if ( v14 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      PoolWithTag[2] = *a8;
      ViHalTrackDomainCommonBuffer(PoolWithTag);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v14;
}
