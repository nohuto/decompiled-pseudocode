/*
 * XREFs of sub_18000D3A0 @ 0x18000D3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall sub_18000D3A0(void *a1, char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)a1 + 8);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  *((_DWORD *)a1 + 13) = -1073741823;
  *(_QWORD *)a1 = &off_18003ED50;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}
