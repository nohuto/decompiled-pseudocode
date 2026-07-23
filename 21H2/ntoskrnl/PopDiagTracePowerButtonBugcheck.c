/*
 * XREFs of PopDiagTracePowerButtonBugcheck @ 0x1408EAF58
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140791B94 (PopRecordLongPowerButtonPressDetected.c)
 */

void __fastcall PopDiagTracePowerButtonBugcheck(int a1)
{
  char *v1; // rdx
  int *v2; // rax
  int v3; // r9d
  char v4; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  int v7; // [rsp+38h] [rbp-C8h] BYREF
  int v8; // [rsp+3Ch] [rbp-C4h] BYREF
  int v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  int v12; // [rsp+4Ch] [rbp-B4h] BYREF
  int v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+70h] [rbp-90h] BYREF
  int *v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-68h]
  int *v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  int *v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char *v23; // [rsp+C0h] [rbp-40h]
  __int64 v24; // [rsp+C8h] [rbp-38h]
  __int64 *v25; // [rsp+D0h] [rbp-30h]
  __int64 v26; // [rsp+D8h] [rbp-28h]
  int *v27; // [rsp+E0h] [rbp-20h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  int *v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  __int64 *v31; // [rsp+100h] [rbp+0h]
  __int64 v32; // [rsp+108h] [rbp+8h]
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  char *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  int *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]

  if ( a1 == 7000 )
  {
    PopRecordLongPowerButtonPressDetected(1);
    if ( (unsigned int)dword_140C02228 > 5 && tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v6 = 7000;
      v17 = &v6;
      v1 = byte_140028D68;
      v7 = dword_140C20928;
      v19 = &v7;
      v8 = dword_140C20924;
      v21 = &v8;
      v4 = byte_140C20968;
      v23 = &v4;
      v14 = qword_140C20930;
      v25 = &v14;
      v9 = dword_140C20938;
      v27 = &v9;
      v10 = dword_140C2093C;
      v29 = &v10;
      v15[0] = qword_140C20940;
      v31 = v15;
      v11 = dword_140C2096C;
      v33 = &v11;
      v5[0] = byte_140C20978;
      v35 = v5;
      v12 = dword_140C20970;
      v37 = &v12;
      v13 = dword_140C20974;
      v2 = &v13;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 1LL;
LABEL_9:
      v39 = v2;
      v26 = 8LL;
      v30 = 4LL;
      v28 = 4LL;
      v32 = 8LL;
      v34 = 4LL;
      v36 = 1LL;
      v38 = 4LL;
      v40 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02228, (unsigned __int8 *)v1, 0LL, 0LL, 0xEu, &v16);
    }
  }
  else if ( a1 == 15000
         && (unsigned int)dword_140C02228 > 5
         && tlgKeywordOn((__int64)&dword_140C02228, 0x800000000000LL) )
  {
    v13 = v3;
    v17 = &v13;
    v1 = byte_140028C43;
    v12 = dword_140C20928;
    v19 = &v12;
    v11 = dword_140C20924;
    v21 = &v11;
    v5[0] = byte_140C20968;
    v23 = v5;
    v15[0] = qword_140C20930;
    v25 = v15;
    v10 = dword_140C20938;
    v27 = &v10;
    v9 = dword_140C2093C;
    v29 = &v9;
    v14 = qword_140C20940;
    v31 = &v14;
    v8 = dword_140C2096C;
    v33 = &v8;
    v4 = byte_140C20978;
    v35 = &v4;
    v7 = dword_140C20970;
    v37 = &v7;
    v6 = dword_140C20974;
    v2 = &v6;
    v18 = 4LL;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 1LL;
    goto LABEL_9;
  }
}
