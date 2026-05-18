/*
 * XREFs of sub_1800C7690 @ 0x1800C7690
 * Callers:
 *     sub_1800C3A30 @ 0x1800C3A30 (sub_1800C3A30.c)
 * Callees:
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_1800BCE78 @ 0x1800BCE78 (sub_1800BCE78.c)
 *     sub_1800E2E28 @ 0x1800E2E28 (sub_1800E2E28.c)
 *     sub_1800E2EFC @ 0x1800E2EFC (sub_1800E2EFC.c)
 *     sub_1800FDACC @ 0x1800FDACC (sub_1800FDACC.c)
 *     sub_1800FDDB8 @ 0x1800FDDB8 (sub_1800FDDB8.c)
 *     sub_180121BA4 @ 0x180121BA4 (sub_180121BA4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800C7690(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF

  v6 = sub_18007AB84(a1, *(_DWORD *)(*a2 + 112LL));
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, &unk_18020F7E8, 0LL)
    || !(unsigned __int8)sub_1800E2EFC(a3) )
  {
    return 0;
  }
  v7 = sub_1800E2E28(a3);
  if ( v7 == 4 )
    sub_180121BA4(v6, &unk_180210DE8);
  if ( v7 == 5 )
    sub_180121BA4(v6, &unk_180210E88);
  v8 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v6 + 72LL))(v6, &unk_180210028, 2LL);
  if ( v7 == 6 )
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_180210028,
      (unsigned int)((v8 + 1) % 11),
      1LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211DA8);
  (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v6 + 168LL))(v6, &unk_180211DA8, v9, 1LL);
  if ( v7 == 9 )
    sub_180121BA4(v6, &unk_18020FF28);
  if ( v7 == 11 )
    sub_180121BA4(v6, &unk_180210008);
  if ( v7 == 13 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_180210048, 0LL);
    (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v6 + 152LL))(
      v6,
      &unk_180210048,
      (unsigned int)((v10 + 1) % -22),
      1LL);
  }
  v19 = 0LL;
  v18 = 0LL;
  v11 = a2[1];
  if ( v11 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v11 = a2[1];
  }
  *(_QWORD *)&v18 = *a2;
  *((_QWORD *)&v18 + 1) = v11;
  sub_18007A810(a1, &v19, 0LL, &v18);
  if ( v7 != 14 )
    goto LABEL_22;
  v16 = 0LL;
  sub_1800BCE78((__int64 *)&v16, &v19);
  sub_1800FDACC(v16);
  sub_1800FDDB8(v16);
  if ( *((_QWORD *)&v16 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v16 + 1) + 8LL)) )
    {
      v12 = *((_QWORD *)&v16 + 1);
      (***((void (__fastcall ****)(_QWORD))&v16 + 1))(*((_QWORD *)&v16 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v12 + 12)) )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v16 + 1) + 8LL))(*((_QWORD *)&v16 + 1));
LABEL_22:
        if ( v7 == 15 )
        {
          v17 = 0LL;
          sub_1800BCE78((__int64 *)&v17, &v19);
          sub_1800FDACC(v17);
          sub_1800FDDB8(v17);
          if ( *((_QWORD *)&v17 + 1) )
          {
            if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v17 + 1) + 8LL)) )
            {
              v13 = *((_QWORD *)&v17 + 1);
              (***((void (__fastcall ****)(_QWORD))&v17 + 1))(*((_QWORD *)&v17 + 1));
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v13 + 12)) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v17 + 1) + 8LL))(*((_QWORD *)&v17 + 1));
            }
          }
        }
      }
    }
  }
  v14 = (volatile signed __int32 *)*((_QWORD *)&v19 + 1);
  if ( *((_QWORD *)&v19 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL)) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
    if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  return 1;
}
