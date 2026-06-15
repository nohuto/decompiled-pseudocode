/*
 * XREFs of ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E57C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800E3050 (_lambda_3ea8e7556f72cf8b3f162dbd37187d30_--operator()_Microsoft--WRL--WeakRef_const__.c)
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800E6AC8 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::EnumerateProcessSubmixes(CBaseStreamGroupProxy *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+38h] [rbp+10h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v11 = v4;
  CBaseStreamGroupProxy::PruneStaleProcessSubmixes(this);
  v10 = a2;
  v6 = (_QWORD *)*((_QWORD *)this + 28);
  v7 = (_QWORD *)*((_QWORD *)this + 27);
  try
  {
    while ( v7 != v6 )
      lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__(&v10, v7++);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1F1,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v5);
  }
  return result;
}
