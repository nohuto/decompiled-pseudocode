/*
 * XREFs of ?Initialize@CD2DResource@@MEAAJXZ @ 0x1800CA110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023946C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DResource::Initialize(CD2DResource *this)
{
  __int64 *v1; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rcx

  v1 = (__int64 *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)((char *)this + 40);
  v4 = *v1;
  if ( *(__int64 **)(*v1 + 8) != v1 )
    __fastfail(3u);
  *v3 = v4;
  v3[1] = v1;
  *(_QWORD *)(v4 + 8) = v3;
  *v1 = (__int64)v3;
  v5 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 32) = 1;
  v6 = (char *)this + *(int *)(v5 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v6 + 24LL))(v6) )
    *((_BYTE *)this + 34) = 1;
  if ( *((_BYTE *)this + 33) )
  {
    ++*((_DWORD *)v1 + 4);
    if ( *((_BYTE *)this + 34) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)v1[3]);
  }
  return 0LL;
}
