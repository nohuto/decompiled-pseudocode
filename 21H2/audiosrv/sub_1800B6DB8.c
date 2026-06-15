/*
 * XREFs of sub_1800B6DB8 @ 0x1800B6DB8
 * Callers:
 *     sub_1800BEF90 @ 0x1800BEF90 (sub_1800BEF90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800B6DB8(__int64 a1)
{
  char v1; // di
  __int64 v3; // rsi

  v1 = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( GetTickCount64() - v3 > 0x3E8 )
    {
      (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, v3 - *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
      return 1;
    }
  }
  return v1;
}
