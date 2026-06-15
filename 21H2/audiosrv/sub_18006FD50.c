/*
 * XREFs of sub_18006FD50 @ 0x18006FD50
 * Callers:
 *     sub_1800E6DC0 @ 0x1800E6DC0 (sub_1800E6DC0.c)
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800E9378 @ 0x1800E9378 (sub_1800E9378.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18006FD50(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  char v10; // al
  int v11; // eax
  _DWORD *v12; // rax
  int v13; // r8d
  int v14; // r9d
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+20h]
  __int64 v20; // [rsp+80h] [rbp+28h] BYREF
  __int64 v21; // [rsp+88h] [rbp+30h] BYREF
  __int64 v22; // [rsp+90h] [rbp+38h] BYREF
  __int64 v23; // [rsp+98h] [rbp+40h] BYREF

  v23 = 0LL;
  v2 = sub_1800CD4DC(*(_QWORD *)a1, &v23);
  v3 = v23;
  if ( v2 >= 0 && v23 )
  {
    v20 = 0LL;
    if ( (int)sub_1800CD548(&v23, &v20) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 384LL))(v20, **(_QWORD **)(a1 + 8)) )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20);
      v22 = 0LL;
      sub_1800461B8(&v22);
      v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)qword_18019EE50 + 24LL))(
             qword_18019EE50,
             v4,
             &v22);
      v6 = v5;
      if ( v5 < 0 )
      {
        sub_18004BD84(retaddr, 2575, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v5);
LABEL_9:
        sub_1800461B8(&v22);
LABEL_20:
        sub_1800461B8(&v20);
        v3 = v23;
        goto LABEL_22;
      }
      (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **))(*(_QWORD *)v22 + 112LL))(v22, &v16);
      v21 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 192LL))(v20, &v21);
      v6 = v7;
      if ( v7 < 0 )
      {
        sub_18004BD84(retaddr, 2583, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v7);
        sub_1800461B8(&v21);
        sub_180023350(&v16);
        goto LABEL_9;
      }
      if ( v21 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(qword_18019EE48, v20);
        if ( v8 < 0 )
          sub_18006D26C(retaddr, 2587, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v8);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 280LL))(v20);
      if ( v21 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 208LL))(v20);
        v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool, _QWORD))(*(_QWORD *)qword_18019EE48 + 32LL))(
                qword_18019EE48,
                v20,
                v21,
                v10 == 0,
                0LL);
        v9 = retaddr;
        if ( v11 < 0 )
          sub_18006D26C(retaddr, 2597, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v11);
      }
      v12 = (_DWORD *)sub_180054268(v9);
      if ( *v12 > 4u )
      {
        v17 = **(_QWORD **)(a1 + 8);
        v18[0] = v4;
        sub_1800E9378((_DWORD)v12, (unsigned int)&unk_1801682E1, v13, v14, (__int64)v18, (__int64)&v17);
      }
      sub_1800461B8(&v21);
      sub_180023350(&v16);
      sub_1800461B8(&v22);
    }
    v6 = 0;
    goto LABEL_20;
  }
  v6 = 0;
LABEL_22:
  if ( v3 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v6;
}
