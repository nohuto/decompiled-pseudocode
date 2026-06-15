/*
 * XREFs of sub_18000F200 @ 0x18000F200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F200(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( *a2 == unk_180042888 && a2[1] == 0x46000000000000C0LL )
    {
      *a3 = a1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    }
    else
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
