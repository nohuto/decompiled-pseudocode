/*
 * XREFs of sub_180070EE8 @ 0x180070EE8
 * Callers:
 *     sub_180070E50 @ 0x180070E50 (sub_180070E50.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800709B8 @ 0x1800709B8 (sub_1800709B8.c)
 *     sub_180085ADC @ 0x180085ADC (sub_180085ADC.c)
 */

__int64 __fastcall sub_180070EE8(__int64 a1, void *a2, int a3, int a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  int v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v15; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  void *v17; // [rsp+68h] [rbp-8h] BYREF

  v8 = sub_180085ADC(a2);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 17LL) )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v14 = *(_DWORD *)(a1 + 624);
    v17 = (void *)(a1 + 88);
    a5 = a4;
    v13 = a3;
    v16 = v11;
    v15 = v8;
    sub_1800709B8(
      v11,
      byte_18009CE7B,
      v9,
      v10,
      (__int64)&v15,
      &v17,
      (__int64)&v14,
      (__int64)&v16,
      (__int64)&v13,
      (__int64)&a5);
  }
  return v8;
}
