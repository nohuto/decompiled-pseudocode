/*
 * XREFs of sub_1C00583EC @ 0x1C00583EC
 * Callers:
 *     sub_1C0057830 @ 0x1C0057830 (sub_1C0057830.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C00583EC(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // ebx

  v5 = sub_1C000F050(a1);
  v6 = 0;
  if ( *((_QWORD *)v5 + 547) )
    (*((void (__fastcall **)(_QWORD, __int64, __int64))v5 + 547))(*((_QWORD *)v5 + 529), a2, a3);
  else
    return (unsigned int)-1073741822;
  return v6;
}
