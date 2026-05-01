/*
 * XREFs of sub_180085200 @ 0x180085200
 * Callers:
 *     sub_180079DCC @ 0x180079DCC (sub_180079DCC.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18008532C @ 0x18008532C (sub_18008532C.c)
 */

__int64 __fastcall sub_180085200(const WCHAR *a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  UINT32 packageFamilyNameLength[4]; // [rsp+30h] [rbp-198h] BYREF
  _OWORD v20[12]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v21; // [rsp+100h] [rbp-C8h]
  int v22; // [rsp+108h] [rbp-C0h]
  WCHAR packageFamilyName[72]; // [rsp+110h] [rbp-B8h] BYREF

  packageFamilyNameLength[0] = 65;
  if ( PackageFamilyNameFromFullName(a1, packageFamilyNameLength, packageFamilyName) )
    return 3221225507LL;
  result = sub_18008532C(packageFamilyName, a2, a3, a4, v20);
  if ( (int)result >= 0 )
  {
    v9 = v20[1];
    *(_OWORD *)a5 = v20[0];
    v10 = v20[2];
    *(_OWORD *)(a5 + 16) = v9;
    v11 = v20[3];
    *(_OWORD *)(a5 + 32) = v10;
    v12 = v20[4];
    *(_OWORD *)(a5 + 48) = v11;
    v13 = v20[5];
    *(_OWORD *)(a5 + 64) = v12;
    v14 = v20[6];
    *(_OWORD *)(a5 + 80) = v13;
    *(_OWORD *)(a5 + 96) = v14;
    *(_OWORD *)(a5 + 112) = v20[7];
    v15 = v21;
    v16 = v20[9];
    *(_OWORD *)(a5 + 128) = v20[8];
    v17 = v20[10];
    *(_OWORD *)(a5 + 144) = v16;
    v18 = v20[11];
    *(_OWORD *)(a5 + 160) = v17;
    *(_OWORD *)(a5 + 176) = v18;
    *(_QWORD *)(a5 + 192) = v15;
    *(_DWORD *)(a5 + 200) = v22;
    return 0LL;
  }
  return result;
}
