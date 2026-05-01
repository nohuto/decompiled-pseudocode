/*
 * XREFs of sub_180064A68 @ 0x180064A68
 * Callers:
 *     sub_180064B30 @ 0x180064B30 (sub_180064B30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180064F10 @ 0x180064F10 (sub_180064F10.c)
 *     sub_180065124 @ 0x180065124 (sub_180065124.c)
 */

__int64 (__fastcall *__fastcall sub_180064A68(__int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  char v3; // bp
  __int64 v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  char v9; // al
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax

  v3 = 0;
  *a2 = 0;
  v6 = a1;
  if ( qword_1800B3FB0 )
    v7 = (_QWORD *)sub_180064F10();
  else
    v7 = 0LL;
  if ( v7 && *v7 )
  {
    *a2 = 0;
    if ( (unsigned __int8)sub_180065124(v6, *v7, a2, a3) )
      *(_QWORD *)(v6 + 64) = a2;
    v8 = *v7;
    do
    {
      v9 = (***(__int64 (__fastcall ****)(_QWORD, __int64))(v8 + 8))(*(_QWORD *)(v8 + 8), v6);
      v8 = *(_QWORD *)(v8 + 16);
      v3 |= v9;
    }
    while ( v8 );
  }
  result = qword_1800B4F70;
  if ( qword_1800B4F70 )
  {
    LOBYTE(a1) = v3;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_1800B4F70(a1, v6);
  }
  return result;
}
