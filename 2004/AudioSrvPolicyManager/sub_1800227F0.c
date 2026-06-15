/*
 * XREFs of sub_1800227F0 @ 0x1800227F0
 * Callers:
 *     sub_1800230B0 @ 0x1800230B0 (sub_1800230B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800227F0(__int64 *a1, _QWORD *a2, unsigned __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  if ( a3 )
  {
    if ( *a2 == unk_180042830 && a2[1] == 0x2E392D41351758A2LL )
    {
      *a3 = (unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL);
      v4 = *a1;
    }
    else
    {
      if ( *a2 != unk_180042888 || a2[1] != 0x46000000000000C0LL )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467262;
      }
      *a3 = (unsigned __int64)a1;
      v4 = *a1;
    }
    (*(void (__fastcall **)(__int64 *))(v4 + 8))(a1);
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
