/*
 * XREFs of MiLogContinueTrim @ 0x14053B668
 * Callers:
 *     MiCheckSystemTrimEndCriteria @ 0x14053AF6C (MiCheckSystemTrimEndCriteria.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void MiLogContinueTrim()
{
  int v0; // edx
  char *v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11
  char v4; // al
  int v5; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v6; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp-88h] BYREF
  int *v11; // [rsp+80h] [rbp-68h]
  int v12; // [rsp+88h] [rbp-60h]
  int v13; // [rsp+8Ch] [rbp-5Ch]
  __int64 *v14; // [rsp+90h] [rbp-58h]
  int v15; // [rsp+98h] [rbp-50h]
  int v16; // [rsp+9Ch] [rbp-4Ch]
  __int64 *v17; // [rsp+A0h] [rbp-48h]
  int v18; // [rsp+A8h] [rbp-40h]
  int v19; // [rsp+ACh] [rbp-3Ch]
  __int64 *v20; // [rsp+B0h] [rbp-38h]
  int v21; // [rsp+B8h] [rbp-30h]
  int v22; // [rsp+BCh] [rbp-2Ch]
  __int64 *v23; // [rsp+C0h] [rbp-28h]
  int v24; // [rsp+C8h] [rbp-20h]
  int v25; // [rsp+CCh] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C4EF20 && **(_DWORD **)&qword_140C4EF20 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 1LL) )
    {
      v4 = *v1;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v5 = v4 & 0x7F;
      v11 = &v5;
      v6 = *((_QWORD *)v1 + 12);
      v14 = &v6;
      v7 = *((_QWORD *)v1 + 10);
      v17 = &v7;
      v8 = *((_QWORD *)v1 + 9);
      v20 = &v8;
      v9 = *(_QWORD *)(v3 + 7104);
      v23 = &v9;
      v15 = v0 + 7;
      v18 = v0 + 7;
      v21 = v0 + 7;
      v24 = v0 + 7;
      v12 = 4;
      tlgWriteTransfer_EtwWriteTransfer(v2, (unsigned __int8 *)&dword_140025F34, 0LL, 0LL, 7u, &v10);
    }
  }
}
