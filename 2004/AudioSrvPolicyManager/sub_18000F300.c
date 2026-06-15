/*
 * XREFs of sub_18000F300 @ 0x18000F300
 * Callers:
 *     sub_18003B81C @ 0x18003B81C (sub_18003B81C.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall sub_18000F300(_QWORD **a1)
{
  _QWORD *v1; // rdi
  volatile signed __int32 *v2; // rbx
  BOOL result; // eax

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
    return sub_180039D98(v1);
  }
  return result;
}
