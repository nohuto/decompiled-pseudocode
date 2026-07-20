/*
 * XREFs of PathReplaceGreedy @ 0x140015C90
 * Callers:
 *     CreateRegistryLinksForMachine @ 0x14000B6A0 (CreateRegistryLinksForMachine.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

__int64 __fastcall PathReplaceGreedy(unsigned __int16 *a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  unsigned __int16 v3; // ax
  int v4; // edi
  unsigned __int16 v7; // r9
  unsigned __int16 *v8; // r15
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r14
  __int64 v11; // rcx
  WCHAR v12; // bx
  __int64 v13; // rdx
  unsigned __int16 *v14; // r11
  int v15; // eax
  unsigned int v16; // r8d
  unsigned __int16 v18; // ax
  int v19; // r9d
  int v20; // r8d
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r9d
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int16 v30; // ax
  _WORD v31[4]; // [rsp+10h] [rbp-10h] BYREF
  unsigned __int16 *v32; // [rsp+18h] [rbp-8h]
  unsigned __int16 v33; // [rsp+20h] [rbp+0h]
  unsigned __int16 *v34; // [rsp+28h] [rbp+8h]

  v3 = *a3;
  v4 = 0;
  v34 = a2;
  v7 = 0;
  v8 = 0LL;
  v33 = 0;
  if ( v3 >= *a1 )
  {
    v9 = 0;
    if ( (v3 & 0xFFFE) != 0 )
    {
      do
      {
        v10 = 0;
        if ( (*a1 & 0xFFFE) != 0 )
        {
          do
          {
            v11 = v9 + (unsigned int)v10;
            if ( (unsigned int)v11 >= *a3 >> 1 )
              break;
            v12 = RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v11));
            if ( v12 != RtlUpcaseUnicodeChar(*(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v10)) )
              break;
            ++v10;
          }
          while ( v10 < (unsigned __int16)(*a1 >> 1) );
          v7 = v33;
          v4 = 0;
        }
        if ( v10 == *a1 >> 1 )
        {
          v13 = v9 + (unsigned int)v10;
          if ( (_DWORD)v13 == *a3 >> 1 || *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v13) == 92 )
          {
            v32 = v8;
            ++v7;
            v31[0] = v9;
            v33 = v7;
            v8 = v31;
            v31[1] = v9 + v10;
          }
        }
        ++v9;
      }
      while ( v9 < (unsigned __int16)(*a3 >> 1) );
      if ( v8 )
      {
        v14 = v34;
        v15 = *a1;
        v16 = *a3;
        if ( *v34 > (unsigned __int16)v15 && v16 + v7 * (*v34 - v15) > a3[1] )
          return 2147483653LL;
        v18 = a3[1];
        v19 = (v18 >> 1) - 1;
        v20 = (v16 >> 1) - 1;
        if ( v20 >= 0 )
        {
          do
          {
            if ( v8 && v20 < v8[1] )
            {
              v21 = *v14;
              v22 = 0;
              if ( (*v14 & 0xFFFE) != 0 )
              {
                do
                {
                  v23 = v22++;
                  v24 = v19--;
                  *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v24) = *(_WORD *)(*((_QWORD *)v14 + 1)
                                                                       + 2 * (((unsigned __int64)v21 >> 1) - v23)
                                                                       - 2);
                  v21 = *v14;
                }
                while ( v22 < (unsigned __int16)(*v14 >> 1) );
              }
              v20 = *v8;
              v8 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
            }
            else
            {
              v25 = v19--;
              *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v25) = *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v20);
            }
            --v20;
          }
          while ( v20 >= 0 );
          v18 = a3[1];
        }
        v26 = v19 + 1;
        if ( v26 < v18 >> 1 )
        {
          v27 = 2LL * v26;
          do
          {
            v28 = *((_QWORD *)a3 + 1);
            ++v26;
            v29 = v4++;
            v30 = *(_WORD *)(v27 + v28);
            v27 += 2LL;
            *(_WORD *)(v28 + 2 * v29) = v30;
          }
          while ( v26 < a3[1] >> 1 );
        }
        *a3 = 2 * v4;
      }
    }
  }
  return 0LL;
}
