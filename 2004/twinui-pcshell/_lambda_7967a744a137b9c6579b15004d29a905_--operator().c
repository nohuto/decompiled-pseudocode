/*
 * XREFs of _lambda_7967a744a137b9c6579b15004d29a905_::operator() @ 0x1802E67CC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7967a744a137b9c6579b15004d29a905___::Run @ 0x1802E7E10 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_7967a744a137b9c6579b15004d29a905___--.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089B14 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@2@@Z @ 0x180281018 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7967a744a137b9c6579b15004d29a905_::operator()(_QWORD **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 i; // r8
  __int64 *v14; // rax
  const char *v15; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = 0LL;
  v2 = (*a1)[10];
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = v19;
    v19 = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, &v19);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        235LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5);
    v18 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*a1)[10] + 40LL))((*a1)[10]);
    v7 = v18;
    v18 = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 56LL))(
           v6,
           *(unsigned int *)(*a1[1] + 32LL),
           &v18);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        238LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*a1)[8] + 104LL))((*a1)[8], v18);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        239LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        241LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10);
    v11 = (__int64 *)*a1[1];
    v12 = v11;
    if ( *(_BYTE *)(v11[2] + 25) )
    {
      for ( i = v11[1]; !*(_BYTE *)(i + 25) && v12 == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
        v12 = (__int64 *)i;
    }
    v14 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,DisplayRegionInfo>>>::_Extract(
            *a1 + 13,
            v11);
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)0x40);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF5,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v15);
  }
  return result;
}
