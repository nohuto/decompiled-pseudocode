/*
 * XREFs of sub_1800082C0 @ 0x1800082C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800075A8 @ 0x1800075A8 (sub_1800075A8.c)
 *     sub_1800084E8 @ 0x1800084E8 (sub_1800084E8.c)
 *     sub_180008518 @ 0x180008518 (sub_180008518.c)
 *     sub_1800085A0 @ 0x1800085A0 (sub_1800085A0.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_1800082C0(__int64 a1, __int64 a2)
{
  char v3; // si
  int v4; // eax
  int result; // eax
  DWORD v6; // ebx
  unsigned __int64 v7; // rax
  char v8; // [rsp+38h] [rbp-D0h] BYREF
  char v9; // [rsp+39h] [rbp-CFh] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  char TlsValue[144]; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+D8h] [rbp-30h] BYREF
  char *v13; // [rsp+F8h] [rbp-10h]
  int v14; // [rsp+100h] [rbp-8h]
  int v15; // [rsp+104h] [rbp-4h]
  char *v16; // [rsp+108h] [rbp+0h]
  int v17; // [rsp+110h] [rbp+8h]
  int v18; // [rsp+114h] [rbp+Ch]
  unsigned __int64 *v19; // [rsp+118h] [rbp+10h]
  int v20; // [rsp+120h] [rbp+18h]
  int v21; // [rsp+124h] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+128h] [rbp+20h] BYREF

  sub_18000B7F8(TlsValue);
  v3 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009E6D8, 0, 0, 2u, &v22);
  sub_180008518(a2 + 104);
  if ( (*(_BYTE *)(a2 + 2712) & 1) == 0 && (*(_BYTE *)(a2 + 168) & 4) != 0 )
  {
    RtlQueryUnbiasedInterruptTime(&v10);
    sub_1800085A0(v10 / 0x2710, a2 + 104);
    v4 = *(_DWORD *)(a2 + 168);
    if ( (v4 & 8) == 0 )
    {
      *(_DWORD *)(a2 + 168) = v4 & 0xFFFFFFFB;
      v3 = 1;
      sub_1800075A8(0);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)sub_180010470(&dword_1800B3218, 64LL) )
  {
    v7 = *(_QWORD *)(a2 + 152);
    v21 = 0;
    v18 = 0;
    v15 = 0;
    v10 = v7;
    LOBYTE(v7) = (*(_DWORD *)(a2 + 168) & 4) != 0;
    v9 = v3;
    v8 = v7;
    v19 = &v10;
    v16 = &v8;
    v13 = &v9;
    v20 = 8;
    v17 = 1;
    v14 = 1;
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009E700, 0, 0, 5u, &v12);
  }
  result = sub_1800084E8(a2 + 104);
  v6 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v6, 0LL);
  }
  return result;
}
