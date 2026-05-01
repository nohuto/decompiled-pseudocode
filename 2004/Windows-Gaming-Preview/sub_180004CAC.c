/*
 * XREFs of sub_180004CAC @ 0x180004CAC
 * Callers:
 *     pfnti @ 0x180009280 (pfnti.c)
 * Callees:
 *     sub_180004044 @ 0x180004044 (sub_180004044.c)
 *     sub_1800040EC @ 0x1800040EC (sub_1800040EC.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180045C20 (_alloca_probe.c)
 */

__int64 __fastcall sub_180004CAC(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  int v6; // esi
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // rbx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  int v15; // [rsp+20h] [rbp-E0h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17[3]; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  v5 = 0;
  if ( (unsigned __int64)(a1[1] - *a1) >= 0xC )
  {
    v6 = 0;
    do
    {
      v16 = 4096;
      v4 = sub_180004044((__int64)&unk_180051060, a2, a3, (__int64)v17, (__int64)v18, (__int64)&v16);
      if ( !v4 )
      {
        v7 = v16;
        v8 = *a1;
        if ( v16 != 12 * (v16 / 0xCuLL) )
          v7 = 0LL;
        v9 = a1[1];
        v16 = v7;
        v10 = (unsigned int)v7 / 0xC;
        v11 = v8 + 12 * ((v9 - v8) / 0xCuLL);
        while ( v8 != v11 )
        {
          v12 = &v18[3 * v10];
          if ( v18 == v12 )
          {
LABEL_12:
            if ( (unsigned __int64)(unsigned int)v7 + 12 <= 0x1000 )
            {
              v7 = (unsigned int)(v7 + 12);
              *(_QWORD *)v12 = *(_QWORD *)v8;
              ++v10;
              v12[2] = *(_DWORD *)(v8 + 8);
              v16 = v7;
            }
          }
          else
          {
            v13 = v18;
            while ( *v13 != *(_DWORD *)v8 || *((_WORD *)v13 + 2) != *(_WORD *)(v8 + 4) )
            {
              v13 += 3;
              if ( v13 == v12 )
                goto LABEL_12;
            }
            v13[2] += *(_DWORD *)(v8 + 8);
            v7 = v16;
          }
          v8 += 12LL;
        }
        v5 = sub_1800040EC((__int64)&unk_180051060, (__int64)v18, v7, v7, v15, v17[0], 1);
      }
      ++v6;
    }
    while ( v5 == -1073741823 && v6 < 100 && !v4 );
  }
  if ( v4 )
    return v4;
  return v5;
}
