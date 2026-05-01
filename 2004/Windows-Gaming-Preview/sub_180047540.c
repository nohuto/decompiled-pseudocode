/*
 * XREFs of sub_180047540 @ 0x180047540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180047540()
{
  volatile signed __int32 *v0; // rbx

  v0 = (volatile signed __int32 *)*((_QWORD *)&xmmword_18005AF18 + 1);
  if ( *((_QWORD *)&xmmword_18005AF18 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&xmmword_18005AF18 + 1) + 8LL), 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v0)(v0);
    if ( _InterlockedExchangeAdd(v0 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v0 + 8LL))(v0);
  }
}
