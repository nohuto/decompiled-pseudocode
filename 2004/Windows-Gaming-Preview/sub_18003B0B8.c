/*
 * XREFs of sub_18003B0B8 @ 0x18003B0B8
 * Callers:
 *     sub_18003AF28 @ 0x18003AF28 (sub_18003AF28.c)
 * Callees:
 *     sub_1800115A8 @ 0x1800115A8 (sub_1800115A8.c)
 *     sub_18003ADD8 @ 0x18003ADD8 (sub_18003ADD8.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003B0B8(int *a1, unsigned __int8 a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // esi
  unsigned int v7; // r8d
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // edx
  __int64 result; // rax
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  _BYTE v16[16]; // [rsp+50h] [rbp-10h] BYREF
  int v17; // [rsp+94h] [rbp+34h]
  int v18; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v7 = *a1;
  v17 = a1[1];
  v9 = a2;
  if ( (*a1 & 2) != 0 )
  {
    HIDWORD(v10) = a1[1];
  }
  else
  {
    v10 = *(_QWORD *)sub_18003ADD8((volatile signed __int64 *)a1, (__int64)v16);
    BYTE1(v17) = BYTE5(v10);
    v7 = v10;
  }
  LOBYTE(v17) = 3;
  v18 = a4;
  v11 = (_BYTE)v5 != 0 ? HIDWORD(v10) : 0;
  LODWORD(a5) = 0;
  result = (unsigned __int16)v17;
  WORD2(a5) = v17;
  if ( !a4 )
    return result;
  v13 = a4 - 1;
  if ( v13 )
  {
    if ( v13 != 1 )
    {
      v14 = 255;
      goto LABEL_11;
    }
    v15 = v9 + 4;
  }
  else
  {
    v15 = v9 + 6;
  }
  v14 = v5 + (v15 << 6);
LABEL_11:
  result = sub_1800115A8(a1 + 2, 0xA8161Eu, (v7 >> 7) & 1, (v7 >> 8) & 1, v14, v11);
  if ( (_DWORD)result )
  {
    result = (__int64)qword_18005ADA0;
    if ( qword_18005ADA0 )
      return qword_18005ADA0(11015710LL, &a5, 0LL, v9, 0LL, &v18, (_BYTE)v5, 1LL);
  }
  return result;
}
