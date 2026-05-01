/*
 * XREFs of ?GetItemInternal@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18045E300
 * Callers:
 *     ?GetItem@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18045DFF0 (-GetItem@CAppLayout@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppLayout::GetItemInternal(CAppLayout *this, unsigned int a2, const struct _GUID *a3, void **a4)
{
  __int64 result; // rax
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  *a4 = 0LL;
  result = 2147942487LL;
  if ( (unsigned __int64)a2 < *((_QWORD *)this + 10) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 9) + 8LL * a2);
    return (**v5)(v5, a3, a4);
  }
  return result;
}
