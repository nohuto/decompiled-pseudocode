/*
 * XREFs of sub_180102178 @ 0x180102178
 * Callers:
 *     sub_1800FD970 @ 0x1800FD970 (sub_1800FD970.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180102178(__int64 a1, __int64 a2)
{
  int v4; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v6; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF

  v9 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v6 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x1Cu, (__int64)&unk_1801726D0, a1, *(_DWORD *)(a1 + 56));
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 56) - 2) <= 2 )
  {
    *(_OWORD *)pvar = 0LL;
    v8 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, 0LL, &v9);
    if ( v4 < 0 )
      goto LABEL_13;
    v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(v9, &unk_180172DC0, pvar);
    if ( v4 < 0 )
      goto LABEL_13;
    if ( LOWORD(pvar[0]) == 31 )
      v4 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, _QWORD))(**(_QWORD **)(a1 + 224) + 40LL))(
             *(_QWORD *)(a1 + 224),
             pvar[1],
             0LL);
    if ( v4 < 0 )
    {
LABEL_13:
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 2u )
      {
        sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x1Du, (__int64)&unk_1801726D0, v4);
      }
    }
    PropVariantClear(pvar);
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
