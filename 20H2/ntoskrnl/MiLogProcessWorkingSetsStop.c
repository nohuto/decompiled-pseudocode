/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140244C14
 * Callers:
 *     MiProcessWorkingSets @ 0x140268EC0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140244C78 (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x140330EEC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // r8d
  int v6; // r10d
  _QWORD *v7; // r11
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-A8h]
  int v10; // [rsp+28h] [rbp-A0h]
  __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h] BYREF
  __int64 v14[5]; // [rsp+60h] [rbp-68h] BYREF
  int v15; // [rsp+88h] [rbp-40h]
  int v16; // [rsp+8Ch] [rbp-3Ch]
  __int64 *v17; // [rsp+90h] [rbp-38h]
  int v18; // [rsp+98h] [rbp-30h]
  int v19; // [rsp+9Ch] [rbp-2Ch]
  __int64 *v20; // [rsp+A0h] [rbp-28h]
  int v21; // [rsp+A8h] [rbp-20h]
  int v22; // [rsp+ACh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4ED60 && **(_DWORD **)&qword_140C4ED60 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140C4ED60, 1LL, a3, a4) )
    {
      v8 = v7[888];
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v11 = v8;
      v14[4] = (__int64)&v11;
      v12 = v7[936];
      v17 = &v12;
      v13 = v7[950];
      v20 = &v13;
      v15 = 8;
      v18 = 8;
      v21 = 8;
      tlgWriteEx_EtwWriteEx(v6, (int)&byte_140024F31, v5, v4, v9, v10, 5u, (__int64)v14);
    }
  }
}
