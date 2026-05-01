/*
 * XREFs of sub_180012984 @ 0x180012984
 * Callers:
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180072480 @ 0x180072480 (sub_180072480.c)
 */

__int64 __fastcall sub_180012984(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // [rsp+68h] [rbp-39h] BYREF
  int v10; // [rsp+6Ch] [rbp-35h] BYREF
  int v11; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp-29h] BYREF
  __int64 v13; // [rsp+80h] [rbp-21h] BYREF
  __int64 v14; // [rsp+88h] [rbp-19h] BYREF
  __int64 v15; // [rsp+90h] [rbp-11h] BYREF
  __int64 v16[10]; // [rsp+98h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  if ( dword_1800B31E0 )
  {
    sub_1800100D0(*(_QWORD *)(*(_QWORD *)(a1 + 1312) + 64LL), v16);
    v3 = *(_DWORD *)(a1 + 1764);
    v4 = *(_DWORD *)(a1 + 1768);
    RtlQueryUnbiasedInterruptTime(&v12);
    if ( v3 <= v4 )
      v3 = v4;
    result = *(unsigned int *)(a1 + 1760);
    v6 = *(_DWORD *)(a1 + 1764) - result;
    v7 = *(_DWORD *)(a1 + 1768) - result;
    v8 = v12 / 0x2710 - v3;
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 )
    {
      result = qword_1800B31F8 & 1;
      if ( result == qword_1800B31F8 )
      {
        v13 = v16[3];
        v14 = v16[6];
        LODWORD(v12) = *(_DWORD *)(a1 + 1336);
        v15 = *(_QWORD *)(a1 + 1752);
        v10 = v8;
        v9 = v7;
        v11 = v6;
        return sub_180072480(
                 v5,
                 (unsigned int)&unk_18009D3FA,
                 v6,
                 v7,
                 (__int64)&v15,
                 (__int64)&v12,
                 (__int64)&v14,
                 (__int64)&v13,
                 (__int64)&v11,
                 (__int64)&v10,
                 (__int64)&v9);
      }
    }
  }
  return result;
}
