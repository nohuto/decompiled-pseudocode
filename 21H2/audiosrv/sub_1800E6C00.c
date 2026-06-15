/*
 * XREFs of sub_1800E6C00 @ 0x1800E6C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E6C00(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  *a2 = off_18014A4A8;
  v4 = a1[1];
  a2[1] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  a2[2] = 0LL;
  a2[3] = 0LL;
  v5 = a1[3];
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  a2[2] = a1[2];
  a2[3] = a1[3];
  return a2;
}
