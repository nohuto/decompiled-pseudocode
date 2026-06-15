/*
 * XREFs of sub_18000A240 @ 0x18000A240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000A240(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 || (a2[1] || a2[2] != 192 || a2[3] != 1174405120) && (*a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120) )
  {
    return (unsigned int)-2147467262;
  }
  else
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, 192LL);
  }
  return v3;
}
