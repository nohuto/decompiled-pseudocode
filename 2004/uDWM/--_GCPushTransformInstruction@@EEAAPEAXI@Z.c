/*
 * XREFs of ??_GCPushTransformInstruction@@EEAAPEAXI@Z @ 0x180016200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

CPushTransformInstruction *__fastcall CPushTransformInstruction::`scalar deleting destructor'(
        CPushTransformInstruction *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &CPushTransformInstruction::`vftable';
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CPushTransformInstruction *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
