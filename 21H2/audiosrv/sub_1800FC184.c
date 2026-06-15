/*
 * XREFs of sub_1800FC184 @ 0x1800FC184
 * Callers:
 *     sub_1800FE540 @ 0x1800FE540 (sub_1800FE540.c)
 * Callees:
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800FA778 @ 0x1800FA778 (sub_1800FA778.c)
 *     sub_1800FC4C4 @ 0x1800FC4C4 (sub_1800FC4C4.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall sub_1800FC184(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int i; // r15d
  void *v6; // rcx
  char v7; // al
  LPVOID v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  LPVOID v17; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  sub_1800FC4C4();
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 64) + 40LL))(
         *(_QWORD *)(a1 + 64),
         a2,
         &v12);
  if ( v4 < 0
    || (v4 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v12)(v12, &unk_18015B660, &v13), v4 < 0)
    || (v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 24LL))(v13, &v16), v4 < 0) )
  {
LABEL_6:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x51u, (__int64)&unk_180172650, v4);
    }
    goto LABEL_10;
  }
  if ( v16 == 1 )
  {
    v4 = sub_1800FA778(a1, v12);
    if ( v4 >= 0 )
      goto LABEL_10;
    goto LABEL_6;
  }
  v11 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(a1 + 64) + 24LL))(
         *(_QWORD *)(a1 + 64),
         1LL,
         1LL,
         &v11);
  if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 24LL))(v11, &v15), v4 < 0) )
  {
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_6;
  }
  for ( i = 0; i < v15; ++i )
  {
    v17 = 0LL;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v11 + 32LL))(v11, i, &v17) >= 0 )
    {
      v7 = sub_180062288((__int64)v17, &pv, 0LL);
      v8 = pv;
      if ( v7 )
      {
        if ( !(unsigned int)o__wcsicmp(pv, a2) )
        {
          v9 = sub_1800FA778(a1, (__int64)v17);
          if ( v9 < 0
            && off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 2u )
          {
            sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x4Fu, (__int64)&unk_180172650, v9);
          }
        }
      }
      v6 = v8;
    }
    else
    {
      v6 = 0LL;
    }
    CoTaskMemFree(v6);
    if ( v17 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v17 = 0LL;
  if ( sub_18005E178(a1, v12, &v17) )
  {
    v10 = sub_1800FA778(a1, v12);
    if ( v10 < 0
      && off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x50u, (__int64)&unk_180172650, v10);
    }
  }
  CoTaskMemFree(v17);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_10:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
}
