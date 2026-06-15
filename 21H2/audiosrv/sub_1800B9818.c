/*
 * XREFs of sub_1800B9818 @ 0x1800B9818
 * Callers:
 *     sub_180035610 @ 0x180035610 (sub_180035610.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800D1500 @ 0x1800D1500 (sub_1800D1500.c)
 *     sub_18011B850 @ 0x18011B850 (sub_18011B850.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall sub_1800B9818(__int64 a1, void *a2)
{
  int v4; // r15d
  bool v5; // r14
  __int64 v6; // rcx
  unsigned int i; // ebx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax
  LPVOID v14; // rbx
  void (__fastcall ***v15)(_QWORD, __int64, __int64 *); // rcx
  __int64 v16; // r8
  void *v17; // [rsp+30h] [rbp-40h] BYREF
  LPVOID v18; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  LPVOID v20; // [rsp+48h] [rbp-28h] BYREF
  void (__fastcall ***v21)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  void (__fastcall ***v23)(_QWORD, __int64, __int64 *); // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  LODWORD(v18) = 0;
  v25 = 0;
  v26 = 0;
  if ( (*(int (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v23) >= 0
    && ((int (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), int *))(*v23)[6])(v23, &v25) >= 0
    && v25 == 1 )
  {
    v5 = 1;
LABEL_22:
    v17 = 0LL;
    (*(void (__fastcall **)(PVOID, void *, _QWORD, _QWORD, void **))(*(_QWORD *)::pv + 24LL))(::pv, a2, 0LL, 0LL, &v17);
    if ( v17 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_40;
  }
  v5 = 0;
  if ( (int)sub_18011B850(a2, &v20, &v18) >= 0
    && (*(int (__fastcall **)(_QWORD, LPVOID, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         v20,
         &v24) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v25) >= 0 )
  {
    v5 = v25 == 1;
  }
  if ( (_DWORD)v18 )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 24LL))(
           *(_QWORD *)&dwCreationFlags,
           2LL,
           14LL,
           &v22) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v26) < 0 )
    {
      goto LABEL_48;
    }
    for ( i = 0; i < v26; ++i )
    {
      v17 = 0LL;
      v18 = 0LL;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v22 + 32LL))(v22, i, &v17) >= 0
        && (*(int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)v17 + 40LL))(v17, &v18) >= 0
        && (int)sub_18011B850(v18, &pv, 0LL) >= 0
        && !(unsigned int)o__wcsicmp(pv, a2) )
      {
        sub_1800B9818(a1, v18);
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(v18);
      v18 = 0LL;
      v6 = (__int64)v17;
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( v5 )
    goto LABEL_22;
  v8 = (_DWORD *)sub_180008448(v6, sub_1800B6240)[1];
  if ( *v8 > 4u )
  {
    v17 = a2;
    sub_1800B7704((__int64)v8, byte_1801660EF, v9, v10, &v17);
  }
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)qword_18019E618 + 240LL))(qword_18019E618, a2);
  v17 = 0LL;
  v11 = sub_18002AEF8((__int64 *)&v17);
  v12 = (__int64)v17;
  if ( v11 >= 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 42LL, &unk_18016D4B0, a2);
    }
    pv = 0LL;
    v13 = sub_1800D1500(v12, a2, &pv);
    v14 = pv;
    if ( v13 >= 0 )
    {
      if ( pv )
      {
        v4 = sub_18002C2A0((__int64)pv, 0, 1);
        if ( v4 < 0 )
        {
          sub_18002B930((__int64)v14);
          if ( v12 )
            sub_18002AD80(v12);
          goto LABEL_46;
        }
      }
    }
    if ( v14 )
      sub_18002B930((__int64)v14);
  }
  if ( v12 )
    sub_18002AD80(v12);
LABEL_40:
  v15 = v21;
  if ( v21 != v23 )
  {
    sub_18002BB14((__int64 *)&v21, v23, (__int64)&unk_18015B660);
    v15 = v21;
  }
  if ( v15
    && ((int (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), LPVOID *))(*v15)[3])(v15, &v18) >= 0
    && !(_DWORD)v18 )
  {
    LOBYTE(v16) = v5;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)qword_18019E618 + 248LL))(qword_18019E618, a2, v16);
  }
LABEL_46:
  if ( v4 < 0 )
    sub_18005E8F8((__int64)"CAudioSrv::ProcessDeviceInternal", 1992, v4);
LABEL_48:
  CoTaskMemFree(v20);
  v20 = 0LL;
  if ( v21 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v21)[2])(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v23)[2])(v23);
}
