/*
 * XREFs of ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180002130
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180002420 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18004437C (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180045B58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ExecutionModel::ExternalResourceSet *__fastcall ExecutionModel::ExternalResourceSet::`scalar deleting destructor'(
        ExecutionModel::ExternalResourceSet *this,
        char a2)
{
  void *v4; // rcx
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rax

  *(_QWORD *)this = &ExecutionModel::ExternalResourceSet::`vftable';
  v4 = (void *)*((_QWORD *)this + 167);
  if ( v4 )
    RmpObjectRelease(v4);
  if ( *((_QWORD *)this + 168) )
    TpReleaseTimer();
  v5 = (__int64 **)((char *)this + 1312);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (__int64 *)v5 )
      break;
    v8 = (__int64 *)v6[1];
    v9 = *v6;
    *v8 = *v6;
    *(_QWORD *)(v9 + 8) = v8;
    operator delete(v6);
  }
  *((_QWORD *)this + 166) = 0LL;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear((char *)this + 40);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
