/*
 * XREFs of ??_GCParallelModeGroup@@QEAAPEAXI@Z @ 0x1801BFB60
 * Callers:
 *     ??$?4U?$default_delete@VCSyncLockGroup@@@std@@$0A@@?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801BF8B0 (--$-4U-$default_delete@VCSyncLockGroup@@@std@@$0A@@-$unique_ptr@VCSyncLockGroup@@U-$default_dele.c)
 *     ?GetGroup@CSyncLockGroup@@SAPEAV1@I@Z @ 0x1801BFBDC (-GetGroup@CSyncLockGroup@@SAPEAV1@I@Z.c)
 *     ?erase@?$vector@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCSyncLockGroup@@U?$default_delete@VCSyncLockGroup@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801C00F8 (-erase@-$vector@V-$unique_ptr@VCSyncLockGroup@@U-$default_delete@VCSyncLockGroup@@@std@@@std@@V-.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801941BC (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 */

CParallelModeGroup *__fastcall CParallelModeGroup::`scalar deleting destructor'(CParallelModeGroup *this)
{
  __int64 *v1; // rbx
  __int64 *v3; // rcx
  __int64 v4; // r8

  v1 = (__int64 *)((char *)this + 16);
  *(_QWORD *)this = &CSyncLockGroup::`vftable';
  v3 = (__int64 *)*((_QWORD *)this + 2);
  v4 = (v1[1] - (__int64)v3) >> 3;
  if ( v4 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
      v1,
      0LL,
      v4);
    v3 = (__int64 *)*v1;
  }
  *v1 = 0LL;
  if ( v3 == v1 + 3 )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  operator delete(this);
  return this;
}
