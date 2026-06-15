/*
 * XREFs of sub_180003F3C @ 0x180003F3C
 * Callers:
 *     sub_180010A50 @ 0x180010A50 (sub_180010A50.c)
 * Callees:
 *     sub_180004130 @ 0x180004130 (sub_180004130.c)
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 *     sub_18012D728 @ 0x18012D728 (sub_18012D728.c)
 */

__int64 __fastcall sub_180003F3C(__int64 a1, char a2)
{
  ULONGLONG TickCount64; // rax
  __int64 v5; // rdx
  ULONGLONG v6; // r14
  unsigned int v7; // ebx
  int v8; // edi
  ULONGLONG v9; // rax
  int v10; // r8d
  int v11; // r9d
  int v12; // ecx
  double v13; // xmm0_8
  int v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v17; // [rsp+68h] [rbp-18h] BYREF
  int v18; // [rsp+6Ch] [rbp-14h] BYREF
  double v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF
  double v21; // [rsp+C0h] [rbp+40h] BYREF
  int v22; // [rsp+C8h] [rbp+48h] BYREF

  TickCount64 = GetTickCount64();
  v22 = 0;
  LOBYTE(v5) = a2;
  v6 = TickCount64;
  v7 = 0;
  v8 = sub_180004350(a1, v5);
  if ( v8 >= 0 )
    v7 = sub_180004130(a1, &v22);
  v9 = GetTickCount64();
  v12 = v9 - v6;
  if ( (__int64)(v9 - v6) < 0 )
  {
    v12 &= 1u;
    v13 = (double)(int)(v12 | ((v9 - v6) >> 1)) + (double)(int)(v12 | ((v9 - v6) >> 1));
  }
  else
  {
    v13 = (double)v12;
  }
  v21 = v13 / 1000.0;
  if ( (unsigned int)dword_18019C4B8 > 4
    && (qword_18019C4C8 & 0x200000000000LL) != 0
    && (qword_18019C4D0 & 0x200000000000LL) == qword_18019C4D0 )
  {
    v19 = v21;
    v15 = *(_DWORD *)(a1 + 96);
    v16 = v22;
    v17 = v7;
    v18 = v8;
    LOBYTE(v21) = a2;
    v20 = 0x1000000LL;
    sub_18012D728(
      v12,
      (unsigned int)&unk_18016C2DC,
      v10,
      v11,
      (__int64)&v20,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v19);
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v7;
}
