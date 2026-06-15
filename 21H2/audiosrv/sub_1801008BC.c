/*
 * XREFs of sub_1801008BC @ 0x1801008BC
 * Callers:
 *     sub_180101EA4 @ 0x180101EA4 (sub_180101EA4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801008BC(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+50h] [rbp+20h] BYREF
  __int64 v6; // [rsp+60h] [rbp+30h] BYREF
  __int64 v7; // [rsp+68h] [rbp+38h]

  v7 = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a1 + 24LL))(a1, &unk_18015B078, 1LL);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 0LL, &v6), v3 < 0)
    || (v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 64LL))(v6, &v5), v3 < 0)
    || (v3 = (**(__int64 (__fastcall ***)(__int64, void *, __int64))v5)(v5, &unk_18015AFA0, a2), v3 < 0) )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x4Au, (__int64)&unk_1801726D0, v3);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v3;
}
