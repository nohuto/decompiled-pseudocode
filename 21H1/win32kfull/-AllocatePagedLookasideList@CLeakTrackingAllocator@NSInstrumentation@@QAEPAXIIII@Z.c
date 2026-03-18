/*
 * XREFs of ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QAEPAXIIII@Z @ 0xE6274
 * Callers:
 *     _Win32AllocPagedLookasideListImpl@16 @ 0xE6268 (_Win32AllocPagedLookasideListImpl@16.c)
 *     ?AllocatePagedLookasideList@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SGPAXKIIIPAI@Z @ 0x1832CB (-AllocatePagedLookasideList@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumen.c)
 * Callees:
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z @ 0xE62FE (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AAE_NI@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

_BYTE *__thiscall NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        SIZE_T Size,
        ULONG Tag,
        ULONG a4,
        USHORT Depth)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // edi
  _BYTE *PoolWithTag; // esi
  bool IsTagTracked; // al
  SIZE_T v8; // ecx
  PVOID BackTrace[20]; // [esp+18h] [ebp-50h] BYREF

  v5 = (NSInstrumentation::CLeakTrackingAllocator *)*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
          *((NSInstrumentation::CLeakTrackingAllocator **)&WPP_MAIN_CB.Queue.Wcb.1 + 3),
          Tag) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)544, 0x70u, Tag);
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)544, 0x78u, Tag);
  if ( !PoolWithTag )
    return 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
  if ( ((unsigned __int16)PoolWithTag & 0xFFFu) + 8 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            (char)PoolWithTag,
                            (struct NSInstrumentation::CBackTrace *)BackTrace) )
      goto LABEL_3;
  }
  else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                               PoolWithTag,
                               (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
    PoolWithTag += 8;
    goto LABEL_3;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  PoolWithTag = 0;
LABEL_3:
  if ( !PoolWithTag )
    return 0;
  IsTagTracked = NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v5, a4);
  v8 = Size;
  if ( IsTagTracked )
    v8 = Size + 8;
  *PoolWithTag = IsTagTracked;
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)(PoolWithTag + 8),
    NSInstrumentation::PlatformAllocate,
    NSInstrumentation::PlatformFree,
    0x220u,
    v8,
    a4,
    Depth);
  return PoolWithTag;
}
