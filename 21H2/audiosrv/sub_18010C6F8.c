/*
 * XREFs of sub_18010C6F8 @ 0x18010C6F8
 * Callers:
 *     sub_18010D978 @ 0x18010D978 (sub_18010D978.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010C780 @ 0x18010C780 (sub_18010C780.c)
 */

__int64 __fastcall sub_18010C6F8(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // xmm1_8
  __int64 result; // rax

  sub_18010C780();
  v4 = qword_18019E418;
  *(_QWORD *)a1 = &off_180155A90;
  *(_QWORD *)(a1 + 8) = off_180155A48;
  *(_DWORD *)(a1 + 60) = 1;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a2;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a1 = &off_180155AB8;
  *(_QWORD *)(a1 + 8) = off_180155A48;
  result = a1;
  *(_QWORD *)(a1 + 80) = v5;
  return result;
}
