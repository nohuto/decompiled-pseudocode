/*
 * XREFs of sub_18003A740 @ 0x18003A740
 * Callers:
 *     sub_18003A3E4 @ 0x18003A3E4 (sub_18003A3E4.c)
 * Callees:
 *     sub_18003ABD4 @ 0x18003ABD4 (sub_18003ABD4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003A740(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  BOOL v8; // r14d
  unsigned int v9; // ebp
  FARPROC ProcAddress; // rax
  HMODULE v11; // rax
  int v12; // edx
  unsigned int v14; // ecx
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v8 = a3 == 0;
  v9 = 0;
  v16 = 0LL;
  v17 = 0;
  ProcAddress = (FARPROC)qword_1800B3F98;
  if ( qword_1800B3F98
    || (v11 = (HMODULE)sub_18003ABD4(),
        ProcAddress = GetProcAddress(v11, "RtlQueryFeatureConfiguration"),
        (qword_1800B3F98 = (__int64)ProcAddress) != 0) )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, BOOL, _BYTE *, __int64 *))ProcAddress)(a2, v8, v15, &v16);
  }
  else
  {
    v12 = -1073741511;
  }
  if ( v12 )
  {
    if ( v12 != 279 )
      goto LABEL_6;
    v14 = HIDWORD(v16);
  }
  else
  {
    v14 = HIDWORD(v16);
    v9 = 1;
    *(_DWORD *)a1 = (HIDWORD(v16) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
    *(_DWORD *)(a1 + 12) = v17;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v14 >> 14;
    *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
LABEL_6:
  if ( a4 )
  {
    LOBYTE(v4) = v12 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
