/*
 * XREFs of sub_180004474 @ 0x180004474
 * Callers:
 *     sub_1800018B0 @ 0x1800018B0 (sub_1800018B0.c)
 *     sub_1800043D0 @ 0x1800043D0 (sub_1800043D0.c)
 *     sub_18006770C @ 0x18006770C (sub_18006770C.c)
 * Callees:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002DE3C @ 0x18002DE3C (sub_18002DE3C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 */

__int64 __fastcall sub_180004474(_QWORD *a1, unsigned int a2, DWORD a3, char a4)
{
  void *v4; // rsi
  int v5; // r14d
  void *v10; // rbx
  HANDLE v11; // rax
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v18; // ecx
  void *v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v21; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h]
  int v24; // [rsp+60h] [rbp-A0h]
  __int16 v25; // [rsp+64h] [rbp-9Ch]
  _BYTE v26[560]; // [rsp+70h] [rbp-90h] BYREF

  v4 = 0LL;
  v5 = 0;
  v19 = 0LL;
  if ( a2 > 0x31 )
  {
    v13 = -2147024809;
  }
  else
  {
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(*a1 + 40LL))(a1, a3, v26) >= 0
      && (sub_18002DE3C(a1[16], v26, &v19), (v4 = v19) != 0LL) )
    {
      v22 = a2;
      v23 = 1LL;
      v24 = 101;
      v25 = 256;
      sub_18000476C(v18, (a4 != 0) + 2, 1, (unsigned int)&v22, (__int64)v19);
      LOBYTE(v5) = v24 != 101;
      v12 = 0;
    }
    else
    {
      v10 = 0LL;
      v11 = OpenProcess(0x100000u, 0, a3);
      v12 = 1;
      if ( v11 )
      {
        v10 = v11;
        if ( WaitForSingleObject(v11, 0) == 258 )
          v5 = 1;
      }
      if ( v10 )
        CloseHandle(v10);
    }
    v13 = -2147024891;
    if ( v5 )
      v13 = v12;
    if ( v4 )
      sub_1800265B0(v4);
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)sub_180010470(&dword_1800B31E0, 9LL) )
  {
    v20 = a2;
    v21 = a3;
    LODWORD(v19) = v13;
    sub_18006253C(v14, (unsigned int)&unk_18009AD2C, v15, v16, (__int64)&v19, (__int64)&v21, (__int64)&v20);
  }
  return v13;
}
