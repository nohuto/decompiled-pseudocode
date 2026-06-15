/*
 * XREFs of sub_180007D20 @ 0x180007D20
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007D20(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // esi
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v14; // [rsp+48h] [rbp+7h] BYREF
  __int64 v15; // [rsp+50h] [rbp+Fh] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp+17h] BYREF
  char v17; // [rsp+68h] [rbp+27h]
  _QWORD *v18; // [rsp+90h] [rbp+4Fh]
  __int64 retaddr; // [rsp+A0h] [rbp+5Fh]
  __int64 v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( !qword_18004FE78 )
    return 0LL;
  v5 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v5 > 4u )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    LODWORD(v20) = v4;
    LODWORD(v14) = v6;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    sub_1800016F0((__int64)v5, (unsigned __int8 *)dword_180045EBE, v7, v8, (void **)&v15, (__int64)&v14, (__int64)&v20);
  }
  v9 = (a2 - 16) & -(__int64)(a2 != 0);
  v10 = (volatile signed __int32 *)(v9 + 8);
  if ( v9 )
  {
    _InterlockedIncrement(v10);
    _InterlockedIncrement(v10);
  }
  v16[1] = v9;
  v16[0] = off_18003E0D0;
  v17 = v4;
  v18 = v16;
  v11 = sub_18002D14C(v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v9 && _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    }
    return 0LL;
  }
  sub_180003AB0(
    retaddr,
    691,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v11);
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
    }
  }
  return v12;
}
