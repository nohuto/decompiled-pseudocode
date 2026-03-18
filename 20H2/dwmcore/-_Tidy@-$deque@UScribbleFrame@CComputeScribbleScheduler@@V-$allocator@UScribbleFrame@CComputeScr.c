/*
 * XREFs of ?_Tidy@?$deque@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAXXZ @ 0x1801A4FB8
 * Callers:
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A3750 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A44D0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x1801A48B4 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::deque<CComputeScribbleScheduler::ScribbleFrame>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rdx
  CDrawListEntry *v3; // rcx
  __int64 v4; // rdi
  void *v5; // rcx
  void *v6; // rcx

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v3 = **(CDrawListEntry ***)(a1[1] + 8 * ((a1[2] - 1LL) & (v2 + a1[3] - 1LL)));
    if ( v3 )
    {
      CDrawListEntry::Release(v3);
      v2 = a1[4];
    }
    a1[4] = v2 - 1;
    if ( v2 == 1 )
      a1[3] = 0LL;
  }
  v4 = a1[2];
  while ( v4 )
  {
    --v4;
    v5 = *(void **)(a1[1] + 8 * v4);
    if ( v5 )
      std::_Deallocate<16,0>(v5, 0x20uLL);
  }
  v6 = (void *)a1[1];
  if ( v6 )
    std::_Deallocate<16,0>(v6, 8LL * a1[2]);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
