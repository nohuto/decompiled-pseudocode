/*
 * XREFs of sub_18000EA80 @ 0x18000EA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000EA80(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
    goto LABEL_11;
  if ( !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, 192LL);
    return v3;
  }
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
LABEL_11:
    v4 = -2147467262;
    a1 = 0LL;
  }
  else
  {
    *a3 = a1;
    v4 = 0;
  }
  if ( v4 >= 0 )
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, 192LL);
  return (unsigned int)v4;
}
