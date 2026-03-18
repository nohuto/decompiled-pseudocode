/*
 * XREFs of sub_1C004BD30 @ 0x1C004BD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DFF8 @ 0x1C002DFF8 (sub_1C002DFF8.c)
 */

__int64 __fastcall sub_1C004BD30(__int64 a1)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  __int64 result; // rax

  v2 = sub_1C000F050(a1);
  if ( (v2[640] & 4) != 0 )
  {
    v3 = sub_1C000F050(a1);
    if ( *((_QWORD *)v3 + 531) )
      (*((void (__fastcall **)(_QWORD))v3 + 531))(*((_QWORD *)v3 + 529));
  }
  result = (unsigned int)v2[640];
  if ( (result & 8) != 0 )
  {
    sub_1C002DFF8(a1, *((_QWORD *)v2 + 570));
    result = (unsigned int)v2[640];
  }
  if ( (result & 0x20000000) != 0 )
  {
    result = (__int64)sub_1C000F050(a1);
    if ( *(_QWORD *)(result + 4672) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4672))(*(_QWORD *)(result + 4656));
  }
  if ( (v2[640] & 0x800000) != 0 )
  {
    result = (__int64)sub_1C000F050(a1);
    if ( *(_QWORD *)(result + 4712) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4712))(*(_QWORD *)(result + 4696));
  }
  if ( (int)v2[640] < 0 )
  {
    result = (__int64)sub_1C000F050(a1);
    if ( *(_QWORD *)(result + 4760) )
      result = (*(__int64 (__fastcall **)(_QWORD))(result + 4760))(*(_QWORD *)(result + 4744));
  }
  v2[640] &= 0x5F7FFFF3u;
  return result;
}
