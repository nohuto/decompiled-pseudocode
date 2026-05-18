/*
 * XREFs of sub_18002220C @ 0x18002220C
 * Callers:
 *     sub_180021624 @ 0x180021624 (sub_180021624.c)
 * Callees:
 *     sub_180021B3C @ 0x180021B3C (sub_180021B3C.c)
 *     sub_180021BEC @ 0x180021BEC (sub_180021BEC.c)
 *     _alloca_probe @ 0x180123F50 (_alloca_probe.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002220C(__int64 a1, int a2, __int16 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v9; // r10d
  unsigned int i; // ebx
  unsigned int v11; // r8d
  unsigned int v12; // edx
  __int64 v13; // rcx
  _WORD *v14; // rax
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  _DWORD v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v20[2046]; // [rsp+54h] [rbp-ACh] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v9 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 6LL); ++i )
  {
    if ( *(_DWORD *)(v4 + 16LL * i) == a2
      && *(_WORD *)(v4 + 16LL * i + 12) == a3
      && ((*(_DWORD *)(v4 + 16LL * i + 12) & 0x10000) == 0 || a4) )
    {
      v18[0] = *(_DWORD *)(v4 + 16LL * i + 4);
      v18[1] = *(_DWORD *)(v4 + 16LL * i + 8);
      do
      {
        v16 = 4096;
        v9 = sub_180021B3C((__int64)v18, 0LL, 0LL, (__int64)&v17, (__int64)&v19, (__int64)&v16);
        if ( !v9 )
        {
          v11 = v16;
          v12 = 0;
          if ( (v16 & 7) != 0 )
            v11 = 0;
          v16 = v11;
          v13 = v11 >> 3;
          if ( (_DWORD)v13 )
          {
            v14 = v20;
            while ( *((_DWORD *)v14 - 1) != a2 || *v14 != a3 )
            {
              ++v12;
              v14 += 4;
              if ( v12 >= (unsigned int)v13 )
                goto LABEL_15;
            }
          }
          else
          {
LABEL_15:
            if ( (unsigned __int64)v11 + 8 <= 0x1000 )
            {
              v11 += 8;
              *(_DWORD *)&v20[4 * v13 - 2] = a2;
              v16 = v11;
              v20[4 * v13] = a3;
            }
          }
          v9 = sub_180021BEC((__int64)v18, (__int64)&v19, v11, 0LL, 0LL, v17, 1);
        }
      }
      while ( v9 == -1073741823 );
    }
  }
  return v9;
}
