/*
 * XREFs of sub_18002F940 @ 0x18002F940
 * Callers:
 *     sub_18002F5D0 @ 0x18002F5D0 (sub_18002F5D0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_18002F940(__int64 a1)
{
  __int64 v1; // r9
  int v2; // r10d
  int v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  int v8; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-A0h] BYREF
  UUID *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  __int64 *v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  int *v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  int *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  __int64 *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+E0h] [rbp-20h] BYREF
  UUID *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  __int64 *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  int *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  int *v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]
  int *v34; // [rsp+140h] [rbp+40h]
  __int64 v35; // [rsp+148h] [rbp+48h]

  if ( *(_DWORD *)(a1 + 136) )
  {
    if ( (unsigned int)dword_1800B3250 > 5 && sub_180010470((__int64)&dword_1800B3250, 0x400000000004LL) )
    {
      v14 = 16LL;
      v16 = 8LL;
      v13 = &Uuid;
      v9 = *(_QWORD *)(v1 + 48);
      v15 = &v9;
      v3 = *(_DWORD *)(v1 + 60);
      v17 = &v3;
      v19 = &v4;
      v5 = *(_DWORD *)(v1 + 64);
      v21 = &v5;
      v23 = &v10;
      v18 = 4LL;
      v4 = v2;
      v20 = 4LL;
      v22 = 4LL;
      v10 = 0x2000000LL;
      v24 = 8LL;
      sub_18002E278((__int64)&dword_1800B3250, byte_1800A2DDB, 0LL, 0LL, 8u, &v12);
    }
  }
  else if ( (unsigned int)dword_1800B3250 > 5 && (qword_1800B3260 & 4) != 0 && (qword_1800B3268 & 4) == qword_1800B3268 )
  {
    v31 = 4LL;
    v26 = &Uuid;
    v11 = *(_QWORD *)(a1 + 48);
    v28 = &v11;
    v6 = *(_DWORD *)(a1 + 60);
    v30 = &v6;
    v32 = &v7;
    v8 = *(_DWORD *)(a1 + 64);
    v34 = &v8;
    v33 = 4LL;
    v35 = 4LL;
    v27 = 16LL;
    v29 = 8LL;
    v7 = 0;
    sub_18002E278((__int64)&dword_1800B3250, (unsigned __int8 *)dword_1800A2D17, 0LL, 0LL, 7u, &v25);
  }
}
