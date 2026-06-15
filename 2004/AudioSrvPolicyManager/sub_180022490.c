/*
 * XREFs of sub_180022490 @ 0x180022490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_180022490(__int64 a1)
{
  int result; // eax
  LPVOID *v3; // rbx

  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 8))(qword_18004FE78, *(_QWORD *)(a1 + 16));
  v3 = *(LPVOID **)(a1 + 16);
  if ( v3 )
  {
    if ( *v3 )
    {
      CoTaskMemFree(*v3);
      *v3 = 0LL;
    }
    return sub_180039D98(v3);
  }
  return result;
}
