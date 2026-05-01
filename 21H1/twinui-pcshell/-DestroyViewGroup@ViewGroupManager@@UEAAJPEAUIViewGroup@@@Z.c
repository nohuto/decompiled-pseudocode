/*
 * XREFs of ?DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z @ 0x18026A0D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUIViewGroup@@@Z @ 0x18009D4E4 (--$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA-AV-$com_ptr_t@UIViewGroupInternal@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAU?$_Tree_node@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180231FCC (-_Extract@-$_Tree_val@U-$_Tree_simple_types@V-$com_ptr_t@UIViewGroupInternal@@Uerr_exception_pol.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewGroupManager::DestroyViewGroup(RTL_SRWLOCK *this, struct IViewGroup *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 Ptr; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IViewGroup *v13; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp+18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+48h] [rbp+20h]

  v13 = a2;
  try
  {
    wil::com_query<IViewGroupInternal,IViewGroup * &>((__int64)&v14, &v13);
    v3 = this + 31;
    AcquireSRWLockExclusive(this + 31);
    v15 = this + 31;
    Ptr = (__int64)this[32].Ptr;
    v7 = *(_QWORD *)(Ptr + 8);
    if ( *(_BYTE *)(v7 + 25) )
      goto LABEL_9;
    do
    {
      if ( *(_QWORD *)(v7 + 32) >= v14 )
      {
        Ptr = v7;
        v7 = *(_QWORD *)v7;
      }
      else
      {
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( !*(_BYTE *)(v7 + 25) );
    if ( (PVOID)Ptr == this[32].Ptr || v14 < *(_QWORD *)(Ptr + 32) )
LABEL_9:
      Ptr = (__int64)this[32].Ptr;
    if ( (PVOID)Ptr == this[32].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)0x80070490LL);
    v8 = std::_Tree_val<std::_Tree_simple_types<wil::com_ptr_t<IViewGroupInternal,wil::err_exception_policy>>>::_Extract(
           &this[32].Ptr,
           Ptr,
           v4,
           v5);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8 + 4);
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x28);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 104LL))(v14);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAD,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB1,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\viewgroupmanager.cpp",
                           v10);
  }
  return result;
}
