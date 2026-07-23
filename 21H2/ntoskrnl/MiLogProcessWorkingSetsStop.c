/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140286490
 * Callers:
 *     MiProcessWorkingSets @ 0x1402AC4A0 (MiProcessWorkingSets.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogProcessWorkingSetsStop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // edx
  __int64 v5; // r8
  __int64 v6; // r10
  _QWORD *v7; // r11
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-A8h]
  int v10; // [rsp+28h] [rbp-A0h]
  __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-80h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-68h] BYREF
  __int64 *v15; // [rsp+80h] [rbp-48h]
  int v16; // [rsp+88h] [rbp-40h]
  int v17; // [rsp+8Ch] [rbp-3Ch]
  __int64 *v18; // [rsp+90h] [rbp-38h]
  int v19; // [rsp+98h] [rbp-30h]
  int v20; // [rsp+9Ch] [rbp-2Ch]
  __int64 *v21; // [rsp+A0h] [rbp-28h]
  int v22; // [rsp+A8h] [rbp-20h]
  int v23; // [rsp+ACh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    if ( (unsigned __int8)tlgKeywordOn(*(_QWORD *)&qword_140C4EF20, 1LL, a3, a4) )
    {
      v8 = v7[888];
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v11 = v8;
      v15 = &v11;
      v12 = v7[936];
      v18 = &v12;
      v13 = v7[950];
      v21 = &v13;
      v16 = 8;
      v19 = 8;
      v22 = 8;
      tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&dword_140025E34, v5, v4, v9, v10, 5u, &v14);
    }
  }
}
