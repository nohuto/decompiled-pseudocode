/*
 * XREFs of sub_180021174 @ 0x180021174
 * Callers:
 *     sub_18001BF88 @ 0x18001BF88 (sub_18001BF88.c)
 * Callees:
 *     sub_180021B3C @ 0x180021B3C (sub_180021B3C.c)
 *     sub_180021BEC @ 0x180021BEC (sub_180021BEC.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021174(__int64 *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  unsigned int v5; // r10d
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned int v8; // r9d
  __int64 v9; // rbx
  _DWORD *v10; // rdx
  _DWORD *v11; // rcx
  unsigned int v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v15[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  v3 = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v4 = 0;
    do
    {
      v13 = 4096;
      v2 = sub_180021B3C((unsigned int)&unk_180140850, 0, 0, (unsigned int)&v14, (__int64)v15, (__int64)&v13);
      if ( !v2 )
      {
        v5 = v13;
        v6 = *a1;
        if ( v13 != 12 * (v13 / 0xCuLL) )
          v5 = 0;
        v7 = a1[1];
        v13 = v5;
        v8 = v5 / 0xC;
        v9 = v6 + 12 * ((v7 - v6) / 0xCuLL);
        while ( v6 != v9 )
        {
          v10 = &v15[3 * v8];
          if ( v15 == v10 )
          {
LABEL_12:
            if ( (unsigned __int64)v5 + 12 <= 0x1000 )
            {
              v5 += 12;
              *(_QWORD *)v10 = *(_QWORD *)v6;
              ++v8;
              v10[2] = *(_DWORD *)(v6 + 8);
              v13 = v5;
            }
          }
          else
          {
            v11 = v15;
            while ( *v11 != *(_DWORD *)v6 || *((_WORD *)v11 + 2) != *(_WORD *)(v6 + 4) )
            {
              v11 += 3;
              if ( v11 == v10 )
                goto LABEL_12;
            }
            v11[2] += *(_DWORD *)(v6 + 8);
            v5 = v13;
          }
          v6 += 12LL;
        }
        v3 = sub_180021BEC((unsigned int)&unk_180140850, (unsigned int)v15, v5, 0, 0LL, v14, 1);
      }
      ++v4;
    }
    while ( v3 == -1073741823 && v4 < 100 && !v2 );
  }
  if ( v2 )
    return v2;
  return v3;
}
