/*
 * XREFs of ??_ECBitmapSource@@MEAAPEAXI@Z @ 0x1800228F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

CBitmapSource *__fastcall CBitmapSource::`vector deleting destructor'(CBitmapSource *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CBitmapSource::`vftable';
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 12) = 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v5)(v5, 1LL);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CBitmapSource *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
