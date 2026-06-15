/*
 * XREFs of sub_180020F10 @ 0x180020F10
 * Callers:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 * Callees:
 *     sub_1800210FC @ 0x1800210FC (sub_1800210FC.c)
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_180020F10(__int64 a1, __int128 *a2, int a3, _DWORD *a4, SIZE_T cb, unsigned int a6)
{
  unsigned int v9; // eax
  void *v10; // rbx
  __int64 v11; // r11
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rdx
  void *v17; // rax
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  __int128 v19; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  v19 = *a2;
  v18 = v19;
  v9 = sub_180022DE0(a1, &v18, a6);
  v10 = 0LL;
  if ( v9 == -1 )
  {
    if ( !*(_QWORD *)(a1 + 16) || (unsigned int)sub_180022EE0(*(_QWORD *)(a1 + 16), &v19) == -1 )
      v11 = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)sub_180023320(a1 + 32, v9);
  }
  if ( !v11 && a3 == 1 )
    v11 = *(_QWORD *)(a1 + 16);
  v12 = (_QWORD *)cb;
  *a4 = 0;
  if ( v12 )
    *v12 = 0LL;
  if ( !v11 )
    return 0LL;
  v13 = 40LL;
  if ( a3 == 1 )
    v13 = 56LL;
  v14 = v13 + v11;
  if ( !v12 || *(int *)(v14 + 8) <= 0 )
  {
LABEL_11:
    *a4 = *(_DWORD *)(v14 + 8);
    return 0LL;
  }
  v16 = *(int *)(v14 + 8);
  cb = 0LL;
  if ( (int)sub_1800210FC(&cb, v16, 16LL) >= 0 && cb <= 0x7FFFFFFF )
  {
    v17 = CoTaskMemAlloc((unsigned int)cb);
    v10 = v17;
    if ( v17 )
    {
      memcpy(v17, *(const void **)v14, 16LL * *(int *)(v14 + 8));
      *v12 = v10;
      CoTaskMemFree(0LL);
      goto LABEL_11;
    }
  }
  sub_18004BD84(retaddr, 626LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  CoTaskMemFree(v10);
  return 2147942414LL;
}
