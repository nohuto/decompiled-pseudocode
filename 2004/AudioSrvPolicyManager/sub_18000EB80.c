/*
 * XREFs of sub_18000EB80 @ 0x18000EB80
 * Callers:
 *     sub_18000D470 @ 0x18000D470 (sub_18000D470.c)
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18000EB80(_QWORD *a1, char a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx

  v4 = a1[3];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (volatile signed __int32 *)a1[2];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  *a1 = &off_18003ED28;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
