/*
 * XREFs of ?Invoke@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJPEAUIThreadPoolTimer@Threading@System@5@@Z @ 0x18016D260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::Invoke(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::System::Threading::IThreadPoolTimer *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v4; // rbx
  __int64 OwningThread; // rdi
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 2;
  v4 = 0LL;
  EnterCriticalSection(this + 2);
  OwningThread = (__int64)this[1].OwningThread;
  if ( OwningThread )
  {
    v10 = OwningThread;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v10);
    v4 = OwningThread;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v4 && (v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4), v7 = v6, v6 < 0) )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v6);
  else
    v7 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
