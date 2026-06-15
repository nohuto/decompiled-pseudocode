/*
 * XREFs of sub_18005B960 @ 0x18005B960
 * Callers:
 *     sub_18005AAD0 @ 0x18005AAD0 (sub_18005AAD0.c)
 *     sub_18005B7B4 @ 0x18005B7B4 (sub_18005B7B4.c)
 *     sub_180119954 @ 0x180119954 (sub_180119954.c)
 *     sub_180123190 @ 0x180123190 (sub_180123190.c)
 * Callees:
 *     sub_180021090 @ 0x180021090 (sub_180021090.c)
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180067BDC @ 0x180067BDC (sub_180067BDC.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_18005B960(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  __int64 v13; // rdx
  LPVOID v14; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  sub_1800384A4((__int64 *)a2);
  *a3 = 0;
  v8 = *(_QWORD *)(a1 + 16);
  if ( !v8 )
    return 0LL;
  sub_180067BDC(a2, v8);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = *(_DWORD *)(v9 + 8);
  if ( *(_DWORD *)(a2 + 8) == v10 )
  {
    v11 = 40LL;
    if ( v10 <= 0 )
      v11 = 56LL;
    if ( !a4 )
      goto LABEL_6;
    v13 = *(int *)(v11 + v9 + 8);
    pv = 0LL;
    if ( sub_180021090((__int64 *)&pv, v13) )
    {
      v14 = pv;
      memcpy(pv, *(const void **)(v11 + v9), 16LL * *(int *)(v11 + v9 + 8));
      *a4 = v14;
      CoTaskMemFree(0LL);
LABEL_6:
      *a3 = *(_DWORD *)(v11 + v9 + 8);
      return 0LL;
    }
    sub_18004BD84(
      (int)retaddr,
      194,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
    CoTaskMemFree(pv);
  }
  else
  {
    sub_18004BD84(
      (int)retaddr,
      188,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      -2147024882);
  }
  return 2147942414LL;
}
