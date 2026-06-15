/*
 * XREFs of sub_1800FD970 @ 0x1800FD970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_180102178 @ 0x180102178 (sub_180102178.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FD970(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  char v8; // [rsp+40h] [rbp+10h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  v6 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)(a1 + 64) + 40LL))(
             *(_QWORD *)(a1 + 64),
             a2,
             &v9);
  if ( (int)result < 0
    || (result = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v9)(v9, &unk_18015B660, &v6), (int)result < 0)
    || (result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v8), (int)result < 0) )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      result = sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Cu, (__int64)&unk_180172650, result);
    }
  }
  else
  {
    result = (__int64)sub_1800FBC38(a1, &v7, a2);
    v5 = v7;
    if ( v7 )
    {
      result = sub_180102178(*(_QWORD *)(v7 + 200), v9);
      v5 = v7;
    }
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v6 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
