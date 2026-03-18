/*
 * XREFs of sub_1C004C3AC @ 0x1C004C3AC
 * Callers:
 *     sub_1C004B8A0 @ 0x1C004B8A0 (sub_1C004B8A0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C004C3AC(__int64 a1, _BYTE *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rdi
  _DWORD *v6; // rax

  v2 = 0;
  *a2 = 0;
  v5 = sub_1C000F050(a1);
  if ( *((_QWORD *)v5 + 548) )
  {
    v6 = sub_1C000F050(a1);
    *a2 = (*((__int64 (__fastcall **)(_QWORD, _QWORD))v5 + 548))(*((_QWORD *)v5 + 529), *((_QWORD *)v6 + 149));
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v2;
}
