/*
 * XREFs of ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXW4_POOL_TYPE@@II@Z @ 0x249A1A
 * Callers:
 *     NSInstrumentation::UAFMitigationAllocator_Win32UAFMAllocatorCollection_::AllocateWrapper__lambda_aceb5b600a42fcee516b896182f9bfd9___ @ 0xF3FF4 (NSInstrumentation--UAFMitigationAllocator_Win32UAFMAllocatorCollection_--AllocateWrappe_ea_F3FF4.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z @ 0xE62FE (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

char *__thiscall NSInstrumentation::CLeakTrackingAllocator::Allocate(
        NSInstrumentation::CLeakTrackingAllocator *this,
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag)
{
  SIZE_T v4; // esi
  int v6; // ebx
  char *PoolWithTag; // esi
  char v9; // [esp+Fh] [ebp-51h]
  PVOID BackTrace[20]; // [esp+10h] [ebp-50h] BYREF

  v4 = NumberOfBytes;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(this, Tag) )
    return (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  v6 = 0;
  v9 = 0;
  if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 )
  {
    v9 = 1;
    v4 = NumberOfBytes + 8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v4, Tag);
  if ( PoolWithTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
    if ( v9 && ((unsigned __int16)PoolWithTag & 0xFFFu) + 8 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (struct NSInstrumentation::CPointerHashTable **)this,
             PoolWithTag,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        return PoolWithTag + 8;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                this,
                (char)PoolWithTag,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (char *)v6;
}
