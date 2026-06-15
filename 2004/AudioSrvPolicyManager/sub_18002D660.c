/*
 * XREFs of sub_18002D660 @ 0x18002D660
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002D660(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  *a1 = off_18003F4A8;
  v4 = (volatile signed __int32 *)a1[3];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
    a1[3] = 0LL;
  }
  v5 = a1[2];
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    a1[2] = 0LL;
  }
  v6 = a1[1];
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    a1[1] = 0LL;
  }
  *a1 = &off_18003EAC8;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
