/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140260558
 * Callers:
 *     MiProcessWorkingSets @ 0x140207BA0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1402D2F3C (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

void MiLogProcessWorkingSetsStop()
{
  int v0; // edx
  int v1; // r8d
  int v2; // r10d
  _QWORD *v3; // r11
  __int64 v4; // rax
  int v5; // [rsp+20h] [rbp-A8h]
  int v6; // [rsp+28h] [rbp-A0h]
  __int64 v7; // [rsp+40h] [rbp-88h] BYREF
  __int64 v8; // [rsp+48h] [rbp-80h] BYREF
  __int64 v9; // [rsp+50h] [rbp-78h] BYREF
  __int64 v10[5]; // [rsp+60h] [rbp-68h] BYREF
  int v11; // [rsp+88h] [rbp-40h]
  int v12; // [rsp+8Ch] [rbp-3Ch]
  __int64 *v13; // [rsp+90h] [rbp-38h]
  int v14; // [rsp+98h] [rbp-30h]
  int v15; // [rsp+9Ch] [rbp-2Ch]
  __int64 *v16; // [rsp+A0h] [rbp-28h]
  int v17; // [rsp+A8h] [rbp-20h]
  int v18; // [rsp+ACh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EEE0 && **(_DWORD **)&qword_140C4EEE0 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140C4EEE0, 1LL) )
    {
      v4 = v3[888];
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v7 = v4;
      v10[4] = (__int64)&v7;
      v8 = v3[936];
      v13 = &v8;
      v9 = v3[950];
      v16 = &v9;
      v11 = 8;
      v14 = 8;
      v17 = 8;
      tlgWriteEx_EtwWriteEx(v2, (int)&word_140025E1A, v1, v0, v5, v6, 5u, (__int64)v10);
    }
  }
}
