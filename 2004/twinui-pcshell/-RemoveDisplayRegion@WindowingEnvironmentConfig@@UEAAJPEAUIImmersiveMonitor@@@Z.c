/*
 * XREFs of ?RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E7C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7967a744a137b9c6579b15004d29a905___ @ 0x1802E5C90 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7967a744a137b9c6579b15004d29a905.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@AEBK@Z @ 0x1802E827C (-find@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKUDis.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::RemoveDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  const char *v9; // r9
  __int64 result; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+20h]

  v4 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v13 = 0;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 24LL))(a2, &v13);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        225LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::find(
      (char *)this + 72,
      &v14,
      &v13);
    if ( v14 == *((_QWORD *)this + 9) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        228LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL);
    *(_QWORD *)v11 = (char *)this - 32;
    *(_QWORD *)&v11[2] = &v14;
    CurrentThreadId = GetCurrentThreadId();
    v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7967a744a137b9c6579b15004d29a905___(
           v7,
           CurrentThreadId,
           (__int128 *)v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        249LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v8);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFD,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v9);
  }
  return result;
}
