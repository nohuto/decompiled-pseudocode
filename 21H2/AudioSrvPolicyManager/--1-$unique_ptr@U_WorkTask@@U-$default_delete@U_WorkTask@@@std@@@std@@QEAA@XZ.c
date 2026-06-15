/*
 * XREFs of ??1?$unique_ptr@U_WorkTask@@U?$default_delete@U_WorkTask@@@std@@@std@@QEAA@XZ @ 0x18000F300
 * Callers:
 *     _CSerialWorkQueue::QueueWorkItem_::_1_::dtor$2 @ 0x18003B81C (_CSerialWorkQueue--QueueWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(_QWORD **a1)
{
  _QWORD *v1; // rdi
  volatile signed __int32 *v2; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (volatile signed __int32 *)v1[1];
    if ( v2 && _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
    operator delete(v1, (const struct std::nothrow_t *)0x18);
  }
}
