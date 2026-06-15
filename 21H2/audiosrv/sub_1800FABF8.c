/*
 * XREFs of sub_1800FABF8 @ 0x1800FABF8
 * Callers:
 *     sub_1800FA9A0 @ 0x1800FA9A0 (sub_1800FA9A0.c)
 * Callees:
 *     sub_180057764 @ 0x180057764 (sub_180057764.c)
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 *     sub_180062288 @ 0x180062288 (sub_180062288.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800FA2EC @ 0x1800FA2EC (sub_1800FA2EC.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_1800FF930 @ 0x1800FF930 (sub_1800FF930.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800FABF8(__int64 a1, __int64 a2)
{
  int v5; // r14d
  int v6; // eax
  _UNKNOWN **v7; // rcx
  _WORD *v8; // r8
  _UNKNOWN **v9; // rcx
  _QWORD *v10; // rbx
  bool v11; // r12
  __int64 *v12; // rdx
  __int64 v13; // rcx
  _UNKNOWN **v14; // rcx
  _QWORD *v15; // rax
  ATL::CAtlException *v16; // rbx
  __int64 v17; // [rsp+0h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-78h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-70h] BYREF
  LPVOID v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v23; // [rsp+58h] [rbp-50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-48h] BYREF
  char v25; // [rsp+68h] [rbp-40h]
  LPCRITICAL_SECTION v26; // [rsp+70h] [rbp-38h] BYREF
  char v27; // [rsp+78h] [rbp-30h]
  bool v28; // [rsp+B0h] [rbp+8h] BYREF
  int v29; // [rsp+C0h] [rbp+18h] BYREF
  int v30; // [rsp+C8h] [rbp+20h]

  v21 = 0LL;
  v20 = 0LL;
  v28 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v25 = 0;
  sub_180057764((__int64)&lpCriticalSection);
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    if ( v25 )
      LeaveCriticalSection(lpCriticalSection);
    CoTaskMemFree(0LL);
    return 0LL;
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))a2)(a2, &unk_18015B660, &v21);
  if ( v5 < 0 )
    goto LABEL_69;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 24LL))(v21, &v29);
  if ( v5 < 0 )
    goto LABEL_69;
  v6 = v29;
  if ( v29 == 1 )
  {
    if ( sub_180062288(a2, &v20, &v28) )
      goto LABEL_12;
    v6 = v29;
  }
  if ( v6 || !sub_18005E178(a1, a2, &v20) )
    goto LABEL_14;
LABEL_12:
  pv = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
  if ( v5 < 0 )
  {
    CoTaskMemFree(pv);
    goto LABEL_14;
  }
  v7 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    if ( (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x44u, (__int64)&unk_180172650, (const wchar_t *)v20);
      v7 = (_UNKNOWN **)off_18019C348;
    }
    if ( v7 != &off_18019C348 && (*((_DWORD *)v7 + 7) & 0x800000) != 0 && *((_BYTE *)v7 + 25) >= 4u )
      sub_1800BB4B4((__int64)v7[2], 0x45u, (__int64)&unk_180172650);
  }
  v19 = 0LL;
  v8 = &unk_18015C744;
  if ( !v28 )
    v8 = v20;
  v5 = sub_1800FA570(a1, pv, v8, 0, 0, &v19);
  if ( v5 >= 0 )
  {
    v26 = (LPCRITICAL_SECTION)(a1 + 72);
    v27 = 0;
    sub_180057764((__int64)&v26);
    v9 = (_UNKNOWN **)off_18019C348;
    if ( off_18019C348 == (_UNKNOWN *)&off_18019C348
      || (*((_DWORD *)off_18019C348 + 7) & 0x800000) == 0
      || *((_BYTE *)off_18019C348 + 25) < 4u )
    {
      v10 = v19;
    }
    else
    {
      v10 = v19;
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x46u, (__int64)&unk_180172650, v19);
      v9 = (_UNKNOWN **)off_18019C348;
    }
    v11 = v5 == 0;
    v28 = v5 == 0;
    if ( v9 != &off_18019C348 && (*((_DWORD *)v9 + 7) & 0x800000) != 0 && *((_BYTE *)v9 + 25) >= 4u )
      sub_1800BB524((__int64)v9[2], 0x47u, (__int64)&unk_180172650, (const wchar_t *)pv);
    sub_1800FBC38(a1, &v22, pv);
    if ( v22 )
    {
      v14 = (_UNKNOWN **)off_18019C348;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
      {
        if ( (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0 && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          v15 = v22 + 20;
          if ( v22[23] >= 8uLL )
            v15 = (_QWORD *)*v15;
          sub_1800CD21C(
            *((_QWORD *)off_18019C348 + 2),
            0x4Au,
            (__int64)&unk_180172650,
            (const wchar_t *)pv,
            (__int64)v15);
          v14 = (_UNKNOWN **)off_18019C348;
        }
        if ( v14 != &off_18019C348 && (*((_DWORD *)v14 + 7) & 0x800000) != 0 && *((_BYTE *)v14 + 25) >= 4u )
          sub_1800BD7DC((__int64)v14[2], 0x4Bu, (__int64)&unk_180172650, v10[25]);
      }
      sub_1800FF930(v10);
      goto LABEL_61;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), (_WORD)v22 + 72, (__int64)&unk_180172650, (const wchar_t *)pv);
    }
    try
    {
      v5 = 0;
      sub_1800FA2EC((__int64 *)(a1 + 112), (__int64)v10);
    }
    catch ( ATL::CAtlException *v23 )
    {
      v12 = &v17;
      v16 = v23;
      if ( *(_DWORD *)v23 == -1073741571 )
        o__resetstkoflw();
      v30 = *(_DWORD *)v16;
      v5 = v30;
      v10 = v19;
      if ( v30 < 0 )
        goto LABEL_61;
      v11 = v28;
    }
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0x49u, (__int64)&unk_180172650, (const wchar_t *)v20);
    }
    v13 = v10[25];
    if ( v11 )
    {
      sub_18010393C(v13);
    }
    else
    {
      LOBYTE(v12) = 1;
      sub_180104404(v13, v12, 0LL);
    }
LABEL_61:
    if ( v22 )
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    if ( v27 )
      LeaveCriticalSection(v26);
    goto LABEL_66;
  }
  v10 = v19;
LABEL_66:
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
  CoTaskMemFree(pv);
LABEL_14:
  if ( v5 < 0 )
  {
LABEL_69:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 2u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x4Cu, (__int64)&unk_180172650, v5);
    }
  }
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  CoTaskMemFree(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)v5;
}
