/*
 * XREFs of sub_18010AE90 @ 0x18010AE90
 * Callers:
 *     sub_18010AE5C @ 0x18010AE5C (sub_18010AE5C.c)
 * Callees:
 *     sub_18010ACA4 @ 0x18010ACA4 (sub_18010ACA4.c)
 */

__int64 __fastcall sub_18010AE90(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  char v5; // di
  unsigned int v6; // r11d
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v10; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v11; // [rsp+74h] [rbp+1Bh] BYREF
  unsigned int v12; // [rsp+78h] [rbp+1Fh] BYREF
  int v13; // [rsp+7Ch] [rbp+23h] BYREF
  int v14; // [rsp+80h] [rbp+27h] BYREF
  __int64 v15; // [rsp+88h] [rbp+2Fh] BYREF
  __int64 v16[4]; // [rsp+90h] [rbp+37h] BYREF
  int v17; // [rsp+C0h] [rbp+67h] BYREF
  char v18; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned int v19; // [rsp+D8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a1 + 68);
  v4 = 0;
  v5 = *(_BYTE *)(a1 + 88);
  v6 = a3;
  v7 = a1;
  if ( a2 >= v3 )
    a2 = *(_DWORD *)(a1 + 68);
  if ( !v5 )
  {
    a3 = *(unsigned int *)(a1 + 80);
    if ( a2 < (unsigned int)a3 )
    {
      if ( *(_DWORD *)(a1 + 72) >= *(_DWORD *)(a1 + 64) )
        v4 = a2;
    }
    else
    {
      v8 = v6;
      if ( a2 - (unsigned int)a3 < v6 )
        v8 = a2 - a3;
      a1 = (unsigned int)a3 + v8;
      if ( (unsigned int)a1 < *(_DWORD *)(v7 + 64) )
        a1 = 0LL;
      v4 = a1;
    }
  }
  if ( (unsigned int)CallbackContext > 5 )
  {
    v17 = *(_DWORD *)(v7 + 52);
    v13 = *(_DWORD *)(v7 + 64);
    v14 = *(_DWORD *)(v7 + 80);
    v15 = v7 + 16;
    v16[0] = *(_QWORD *)(v7 + 40);
    v11 = a2;
    v18 = v5;
    v19 = v4;
    v10 = v6;
    v12 = v3;
    sub_18010ACA4(
      a1,
      byte_18016954B,
      a3,
      v7,
      (__int64)v16,
      &v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  return v4;
}
