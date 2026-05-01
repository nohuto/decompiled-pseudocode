/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x1802E5170
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@UAppViewInfoValue@AppViewInfoCache@DataEngine@TaskFlow@Shell@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800BB8A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$com_ptr_t@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___ @ 0x1802E3BA8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 Ptr; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  const char *v13; // r9
  __int64 result; // rax
  int v15[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  signed int v18; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v19; // [rsp+50h] [rbp+18h]

  v18 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  v19 = v3;
  Ptr = (__int64)a1[4].Ptr;
  v5 = *(_QWORD *)(Ptr + 8);
  v6 = v5;
  v7 = Ptr;
  v8 = (unsigned int)v18;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_DWORD *)(v6 + 32) >= v18 )
    {
      if ( *(_BYTE *)(v7 + 25) && v18 < *(_DWORD *)(v6 + 32) )
        v7 = v6;
      Ptr = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( !*(_BYTE *)(v7 + 25) )
    v5 = *(_QWORD *)v7;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    if ( v18 >= *(_DWORD *)(v5 + 32) )
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
    else
    {
      v7 = v5;
      v5 = *(_QWORD *)v5;
    }
  }
  v17 = Ptr;
  v9 = 0LL;
  while ( Ptr != v7 )
  {
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,Windows::Internal::Shell::TaskFlow::DataEngine::AppViewInfoCache::AppViewInfoValue>>>,std::_Iterator_base0>::operator++(
      &v17,
      v5,
      v8,
      v7);
    Ptr = v17;
  }
  try
  {
    if ( !v9 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        166LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)0x80070057LL);
    *(_QWORD *)v15 = a1 - 17;
    *(_QWORD *)&v15[2] = &v18;
    CurrentThreadId = GetCurrentThreadId();
    v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f27b60bae871d07517fb334ba178f733___(
            v11,
            CurrentThreadId,
            (__int128 *)v15);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        211LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
        (const char *)(unsigned int)v12);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD7,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                           v13);
  }
  return result;
}
