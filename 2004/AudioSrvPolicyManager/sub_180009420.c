/*
 * XREFs of sub_180009420 @ 0x180009420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

signed __int32 __fastcall sub_180009420(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rbx
  signed __int32 result; // eax

  v4 = (volatile signed __int32 *)a1[1];
  if ( v4 )
  {
    result = _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
  }
  if ( a2 )
    return sub_180039D98(a1);
  return result;
}
