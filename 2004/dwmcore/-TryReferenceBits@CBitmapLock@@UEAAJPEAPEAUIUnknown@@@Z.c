/*
 * XREFs of ?TryReferenceBits@CBitmapLock@@UEAAJPEAPEAUIUnknown@@@Z @ 0x180217980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapLock::TryReferenceBits(CBitmapLock *this, struct IUnknown **a2)
{
  __int64 v3; // rcx
  struct IUnknown *v5; // rbx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *a2 = (struct IUnknown *)*((_QWORD *)this + 9);
  }
  else if ( *((_BYTE *)this + 65) )
  {
    v5 = (struct IUnknown *)((char *)this - 16);
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->AddRef)(v5);
    *a2 = v5;
  }
  return 0LL;
}
