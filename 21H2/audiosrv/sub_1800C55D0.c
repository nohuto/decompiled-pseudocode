/*
 * XREFs of sub_1800C55D0 @ 0x1800C55D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800C4FF4 @ 0x1800C4FF4 (sub_1800C4FF4.c)
 *     sub_1800D725C @ 0x1800D725C (sub_1800D725C.c)
 */

__int64 __fastcall sub_1800C55D0(__int64 a1, const WCHAR *a2, __int64 a3)
{
  __int128 v5; // xmm0
  __int64 v7; // rdx
  int v8; // ebx
  void *v9; // rcx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+58h] [rbp-20h] BYREF

  *(_OWORD *)pvar = 0LL;
  v5 = *(_OWORD *)(a1 + 8);
  v12 = 0LL;
  v13 = v5;
  v14 = v5;
  EtwEventActivityIdControl(4LL, &v14);
  if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(a1 + 24), -1, 1) == 2 )
  {
    v8 = 0;
    if ( (unsigned int)sub_1800C4FF4(a3, (__int64)&xmmword_18015B7F8) )
    {
      if ( (int)sub_1800D725C(*(_QWORD *)(a1 + 24), 1LL, v7, pvar) >= 0 && LOWORD(pvar[0]) == 19 )
        v8 = (int)pvar[1];
      if ( v8 != *(_DWORD *)(a1 + 68) )
      {
        v9 = *(void **)(a1 + 200);
        *(_DWORD *)(a1 + 68) = v8;
        SetEvent(v9);
      }
    }
  }
  PropVariantClear(pvar);
  EtwEventActivityIdControl(4LL, &v14);
  return 0LL;
}
