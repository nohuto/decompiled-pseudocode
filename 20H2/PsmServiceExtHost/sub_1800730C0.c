/*
 * XREFs of sub_1800730C0 @ 0x1800730C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006AE28 @ 0x18006AE28 (sub_18006AE28.c)
 *     sub_180072DEC @ 0x180072DEC (sub_180072DEC.c)
 */

unsigned int __fastcall sub_1800730C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  int v4; // r15d
  _QWORD **v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  bool v15; // cc
  unsigned int result; // eax
  DWORD v17; // ebx
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23[10]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  _BYTE TlsValue[144]; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+170h] [rbp+70h] BYREF

  sub_18000B7F8(TlsValue);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 17LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009D735, 0LL, 0LL, 2u, &v28);
  RtlQueryUnbiasedInterruptTime(&v20);
  v3 = 0LL;
  v4 = 0;
  sub_18001E380();
  v5 = (_QWORD **)(a2 + 8);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    v7 = *v6;
    v8 = v6 - 159;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
      __fastfail(3u);
    *v9 = v7;
    *(_QWORD *)(v7 + 8) = v9;
    *(_OWORD *)v6 = 0LL;
    if ( *((int *)v8 + 6) >= 0 && (*(_BYTE *)(v8[6] + 2712LL) & 1) == 0 )
    {
      if ( (*((_BYTE *)v8 + 1244) & 0x10) != 0 )
        *((_DWORD *)v6 - 8) |= 4u;
      v26 = 0LL;
      v25 = 0LL;
      v24 = -1LL;
      LODWORD(v26) = (*((_DWORD *)v8 + 311) & 0x10 | 0x20u) >> 4;
      sub_18000F390();
      if ( (int)sub_18006AE28((__int64)(v6 - 159), (__int64)&v24) >= 0 )
      {
        v3 += v25;
        ++v4;
        sub_1800100D0(v8[7], v23);
        *(v6 - 6) = v23[8];
      }
      sub_18001E380();
      v10 = *((_DWORD *)v6 - 8);
      if ( (v10 & 4) != 0 )
      {
        *((_DWORD *)v6 - 8) = v10 & 0xFFFFFFFB;
        sub_180035480((int *)v6 - 318);
      }
    }
    sub_1800265B0((char *)v6 - 1272);
  }
  RtlQueryUnbiasedInterruptTime(&v19);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 25LL) )
  {
    v21 = v19 - v20;
    v18 = v4;
    v22 = v3;
    sub_180072DEC((__int64)&dword_1800B31E0, byte_18009D78A, v11, v12, (__int64)&v22, (__int64)&v18, (__int64)&v21);
  }
  *(_QWORD *)(a2 + 56) += v3;
  v13 = v3;
  v14 = v19;
  if ( v3 >= *(_QWORD *)(a2 + 64) )
    v13 = *(_QWORD *)(a2 + 64);
  v15 = v3 <= *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = v13;
  if ( v15 )
    v3 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 80) += v14 - v20;
  *(_DWORD *)(a2 + 88) += v4;
  ++*(_DWORD *)(a2 + 92);
  *(_DWORD *)(a2 + 24) &= ~1u;
  *(_QWORD *)(a2 + 72) = v3;
  *(_QWORD *)(a2 + 32) = v14;
  result = (unsigned int)sub_18000F390();
  v17 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v17, 0LL);
  }
  return result;
}
