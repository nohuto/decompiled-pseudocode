/*
 * XREFs of sub_180024710 @ 0x180024710
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180024710(__int64 a1)
{
  int result; // eax
  volatile signed __int32 **v3; // rdi
  volatile signed __int32 *v4; // rbx

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(qword_18004FE78, *(_QWORD *)(a1 + 16));
  v3 = *(volatile signed __int32 ***)(a1 + 16);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
      }
      *v3 = 0LL;
    }
    return sub_180039D98(v3);
  }
  return result;
}
