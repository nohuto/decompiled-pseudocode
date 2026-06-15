/*
 * XREFs of sub_1800FDD70 @ 0x1800FDD70
 * Callers:
 *     sub_1800FD274 @ 0x1800FD274 (sub_1800FD274.c)
 * Callees:
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800FDD70(__int64 a1, const wchar_t *a2)
{
  int v4; // ebx
  __int64 v5; // r8
  void *v6; // rbx
  _UNKNOWN **v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         &v11);
  if ( v4 < 0 )
    goto LABEL_39;
  v4 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v11)(v11, &unk_18015B660, &v13);
  if ( v4 < 0 )
    goto LABEL_39;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v14);
  if ( v4 < 0 )
    goto LABEL_39;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x27u, (__int64)&unk_180172650, a2);
  }
  sub_1800FBC38(a1, &v15, a2);
  if ( v15 )
  {
    v6 = 0LL;
    pv = 0LL;
    v7 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 0x28u, (__int64)&unk_180172650);
      v7 = (_UNKNOWN **)off_18019C348;
    }
    if ( *(_BYTE *)(v15 + 12) )
      goto LABEL_31;
    v8 = v14;
    if ( v14 == 1 )
    {
      if ( sub_180062288(v11, &pv, 0LL) )
        goto LABEL_19;
      v8 = v14;
      v6 = pv;
      v7 = (_UNKNOWN **)off_18019C348;
    }
    if ( v8 )
      goto LABEL_31;
    if ( !sub_18005E178(a1, v11, &pv) )
    {
      v6 = pv;
LABEL_30:
      v7 = (_UNKNOWN **)off_18019C348;
LABEL_31:
      if ( v7 != &off_18019C348 && (*((_DWORD *)v7 + 7) & 0x800000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
        sub_1800BB524((__int64)v7[2], 0x2Au, (__int64)&unk_180172650, a2);
      LOBYTE(v5) = 1;
      sub_1800FEE8C(a1, v15, v5);
      CoTaskMemFree(v6);
      goto LABEL_36;
    }
LABEL_19:
    v9 = (_QWORD *)(v15 + 160);
    if ( *(_QWORD *)(v15 + 184) >= 8uLL )
      v9 = (_QWORD *)*v9;
    v6 = pv;
    if ( !(unsigned int)o__wcsicmp(v9, pv) )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x29u, (__int64)&unk_180172650);
      }
      CoTaskMemFree(v6);
      v10 = v15;
      goto LABEL_27;
    }
    goto LABEL_30;
  }
LABEL_36:
  v4 = sub_1800FA778(a1, v11);
  v10 = v15;
  if ( v4 >= 0 )
  {
LABEL_27:
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    goto LABEL_43;
  }
  if ( v15 )
    (*(void (**)(void))(*(_QWORD *)v15 + 16LL))();
LABEL_39:
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 2u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x2Bu, (__int64)&unk_180172650, v4);
  }
LABEL_43:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
}
