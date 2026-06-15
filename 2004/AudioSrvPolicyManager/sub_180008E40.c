/*
 * XREFs of sub_180008E40 @ 0x180008E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008E40(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98((void *)a1);
  return a1;
}
