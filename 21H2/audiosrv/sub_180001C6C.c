/*
 * XREFs of sub_180001C6C @ 0x180001C6C
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 * Callees:
 *     sub_180001D60 @ 0x180001D60 (sub_180001D60.c)
 *     sub_180001E08 @ 0x180001E08 (sub_180001E08.c)
 *     sub_180048308 @ 0x180048308 (sub_180048308.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180001C6C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v5; // xmm6
  int v6; // edx
  int v7; // ebx
  void *v8; // rcx
  int v9; // eax
  void *v10; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  LPVOID *p_pv; // [rsp+40h] [rbp-30h]
  void *v16; // [rsp+48h] [rbp-28h] BYREF
  char v17; // [rsp+50h] [rbp-20h]
  void *retaddr; // [rsp+78h] [rbp+8h]
  LPVOID pv; // [rsp+90h] [rbp+20h] BYREF

  pv = 0LL;
  sub_180001E08(a1, 0, (unsigned int)&v14, 0, 0LL);
  *a3 = 0LL;
  p_pv = &pv;
  v16 = 0LL;
  v17 = 1;
  v5 = v14;
  v7 = sub_180048308(a1, 0LL, &v14, &v16);
  if ( v17 )
  {
    v6 = (int)p_pv;
    v8 = *p_pv;
    *p_pv = v16;
    if ( v8 )
      CoTaskMemFree(v8);
  }
  if ( v7 < 0 )
  {
    v12 = (unsigned int)v7;
    v13 = 8432LL;
  }
  else
  {
    v14 = v5;
    v9 = sub_180001D60(a1, v6, (_DWORD)pv, (unsigned int)&v14, (__int64)a3);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v12 = (unsigned int)v9;
    v13 = 8435LL;
  }
  sub_18004BD84(retaddr, v13, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v12);
LABEL_7:
  v10 = pv;
  pv = 0LL;
  if ( v10 )
    CoTaskMemFree(v10);
  return (unsigned int)v7;
}
