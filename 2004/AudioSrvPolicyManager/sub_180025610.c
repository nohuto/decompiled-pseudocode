/*
 * XREFs of sub_180025610 @ 0x180025610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180025610(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == 1375751684 && a2[1] == 1107034510 && a2[2] == 49628841 && a2[3] == 1533252209 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
