/*
 * XREFs of sub_180007B80 @ 0x180007B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800016F0 @ 0x1800016F0 (sub_1800016F0.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_18002D14C @ 0x18002D14C (sub_18002D14C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007B80(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v4; // r15d
  __int64 v5; // rbx
  volatile signed __int32 *v6; // rdi
  _DWORD *v7; // r14
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // esi
  __int64 v14; // [rsp+48h] [rbp-9h] BYREF
  __int64 v15; // [rsp+50h] [rbp-1h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp+7h] BYREF
  char v17; // [rsp+68h] [rbp+17h]
  _QWORD *v18; // [rsp+90h] [rbp+3Fh]
  __int64 retaddr; // [rsp+B0h] [rbp+5Fh]
  __int64 v20; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = a3;
  if ( !qword_18004FE78 )
    return 0LL;
  v5 = (a2 - 16) & -(__int64)(a2 != 0);
  v6 = (volatile signed __int32 *)(v5 + 8);
  if ( v5 )
    _InterlockedIncrement(v6);
  v7 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
  if ( *v7 > 4u )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    LODWORD(v20) = v4;
    LODWORD(v14) = v8;
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    sub_1800016F0((__int64)v7, (unsigned __int8 *)dword_180045F0D, v9, v10, (void **)&v15, (__int64)&v14, (__int64)&v20);
  }
  if ( v5 )
    _InterlockedIncrement(v6);
  v16[1] = v5;
  v16[0] = off_18003E100;
  v17 = v4;
  v18 = v16;
  v11 = sub_18002D14C(v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v5 && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
    return 0LL;
  }
  sub_180003AB0(
    retaddr,
    669,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v11);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
    }
  }
  return v12;
}
