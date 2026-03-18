/*
 * XREFs of ?Initialize@CD2DInk@@IEAAJPEAUID2D1Ink@@PEAUID2D1InkStyle@@@Z @ 0x18024B1FC
 * Callers:
 *     ?Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z @ 0x18024B11C (-Create@CD2DInk@@SAJPEAVCD2DResourceManager@@PEAUID2D1Ink@@PEAUID2D1InkStyle@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023946C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CD2DInk::Initialize(CD2DInk *this, struct ID2D1Ink *a2, struct ID2D1InkStyle *a3)
{
  __int64 *v5; // rdi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rcx

  *((_QWORD *)this + 10) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 11) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)a3 + 8LL))(a3);
  v5 = (__int64 *)*((_QWORD *)this + 3);
  v6 = (_QWORD *)((char *)this + 40);
  v7 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v6 = v7;
  *((_QWORD *)this + 6) = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *v5 = (__int64)v6;
  v8 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 32) = 1;
  v9 = (char *)this + *(int *)(v8 + 8) + 16;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v9 + 24LL))(v9) )
    *((_BYTE *)this + 34) = 1;
  if ( *((_BYTE *)this + 33) )
  {
    ++*((_DWORD *)v5 + 4);
    if ( *((_BYTE *)this + 34) )
      CD2DContext::AddHwProtectedResource((CD2DContext *)v5[3]);
  }
  return 0LL;
}
