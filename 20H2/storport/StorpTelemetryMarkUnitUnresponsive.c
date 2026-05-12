/*
 * XREFs of StorpTelemetryMarkUnitUnresponsive @ 0x1C0055448
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0010870 (RaidUnitPendingDpcRoutine.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0048198 (RaUnitSetUnresponsiveAttribute.c)
 *     RaidUnitRequestTimeout @ 0x1C004AF08 (RaidUnitRequestTimeout.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E52C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A58C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryMarkUnitUnresponsive(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  char v7; // [rsp+31h] [rbp-CFh] BYREF
  char v8; // [rsp+32h] [rbp-CEh] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+3Ch] [rbp-C4h] BYREF
  int v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  int *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  char *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  int *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  int *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]

  if ( (*(_BYTE *)(a1 + 450) & 2) == 0 && (unsigned int)dword_1C0069058 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v5 = *(_QWORD *)(v1 + 24);
      v17 = 16LL;
      v19 = 16LL;
      v16 = v5 + 5192;
      v18 = v3 + 1976;
      v9 = *(_DWORD *)(v5 + 56);
      v20 = &v9;
      v6 = *(_BYTE *)(v3 + 96);
      v22 = &v6;
      v7 = *(_BYTE *)(v3 + 97);
      v24 = &v7;
      v8 = *(_BYTE *)(v3 + 98);
      v26 = &v8;
      v10 = *(_DWORD *)(v3 + 3236);
      v28 = &v10;
      v11 = *(_DWORD *)(v3 + 3224);
      v30 = &v11;
      v12 = *(_DWORD *)(v3 + 3228);
      v32 = &v12;
      v13 = *(_DWORD *)(v3 + 1268);
      v34 = &v13;
      v36 = &v14;
      v21 = 4LL;
      v23 = 1LL;
      v25 = 1LL;
      v27 = 1LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      v35 = 4LL;
      v14 = v4;
      v37 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(v5, (unsigned __int8 *)dword_1C0060BB8, v2, v3, 0xDu, &v15);
    }
  }
}
