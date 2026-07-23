/*
 * XREFs of MiReduceZeroingThreads @ 0x140239A80
 * Callers:
 *     MiReassessZeroThreads @ 0x1402397D4 (MiReassessZeroThreads.c)
 *     MiScheduleZeroPageThreads @ 0x140260E24 (MiScheduleZeroPageThreads.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402694D0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiReduceZeroingThreads(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // ebx
  unsigned int v5; // r13d
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int128 v10; // xmm0
  int FirstSetRightGroupAffinity; // eax
  int v12; // r9d
  int v13; // r10d
  unsigned int i; // edx
  __int64 v15; // r8
  __int64 v16; // rcx
  char v17; // cl
  int v18; // esi
  unsigned int v20; // r14d
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // r8d
  unsigned int v24; // eax
  __int64 v25; // r11
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  unsigned int v28; // esi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  __int64 v31; // r10
  unsigned __int64 v32; // rax
  int v33; // r9d
  int *v34; // r10
  int v35; // r11d
  unsigned int v36; // esi
  __int64 v37; // r14
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // [rsp+20h] [rbp-40h]
  __int64 v41; // [rsp+28h] [rbp-38h]
  __int128 v42; // [rsp+30h] [rbp-30h] BYREF
  __int128 v43; // [rsp+40h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 156);
  v4 = 0;
  v5 = dword_140C4DF24;
  v40 = a3;
  v41 = a2;
  v43 = 0LL;
  v42 = 0LL;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = v3;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + v7 + 8);
      v10 = *(_OWORD *)(v9 + 280);
      *(_DWORD *)(v9 + 296) = 0;
      v42 = v10;
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(&v42);
      v12 = 0;
      v13 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v15 = KiProcessorBlock[FirstSetRightGroupAffinity];
        if ( !v15 )
          break;
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 == *(_QWORD *)(v15 + 24) )
        {
          ++v12;
        }
        else if ( v16 == *(_QWORD *)(v9 + 272) )
        {
          v13 = 1;
        }
        ++FirstSetRightGroupAffinity;
      }
      v17 = *(_BYTE *)(*(_QWORD *)(a1 + 144) + v7 + 4) & 1;
      if ( v12 == i )
      {
        if ( v17 )
        {
          ++*(_DWORD *)(a1 + 240);
          ++HIDWORD(v43);
          *(_DWORD *)(v9 + 296) = 3;
        }
        else
        {
          ++*(_DWORD *)(a1 + 244);
        }
      }
      else if ( !v17 )
      {
        if ( v13 && (v12 == i - 1 || i == 1) )
        {
          ++*(_DWORD *)(a1 + 252);
          ++DWORD2(v43);
          *(_DWORD *)(v9 + 296) = 2;
        }
        else
        {
          ++*(_DWORD *)(a1 + 248);
          ++DWORD1(v43);
          *(_DWORD *)(v9 + 296) = 1;
        }
      }
      v7 += 40LL;
      --v8;
    }
    while ( v8 );
    a3 = v40;
    a2 = v41;
  }
  v18 = DWORD1(v43);
  if ( DWORD1(v43) && HIDWORD(v43) )
  {
    v20 = 0;
    if ( DWORD1(v43) > HIDWORD(v43) )
      v18 = HIDWORD(v43);
    if ( v3 )
    {
      do
      {
        v21 = *(_QWORD *)(a1 + 144);
        if ( *(_DWORD *)(*(_QWORD *)(v21 + 40LL * v20 + 8) + 296LL) == 1 )
        {
          while ( *(_DWORD *)(*(_QWORD *)(v21 + 40LL * v4 + 8) + 296LL) != 3 )
          {
            if ( ++v4 >= v3 )
              goto LABEL_29;
          }
          ++*(_DWORD *)(a1 + 256);
          *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v20 + 4) = *(_BYTE *)(v21 + 40LL * v20 + 4) | 1;
          *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v4 + 4) &= ~1u;
          KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 144) + 16LL + 40LL * v4), 0, 0);
          if ( !--v18 )
            return 7LL;
          ++v4;
        }
LABEL_29:
        ++v20;
      }
      while ( v20 < v3 );
    }
    return 7LL;
  }
  else
  {
    if ( a3 )
      return 8LL;
    v22 = *(unsigned int *)(a1 + 164);
    v23 = 1;
    if ( (unsigned int)v22 <= 1 )
    {
      ++*(_DWORD *)(a1 + 260);
      return 8LL;
    }
    v24 = *(_DWORD *)(a1 + 160);
    if ( (unsigned int)v22 > v24 )
    {
      ++*(_DWORD *)(a1 + 272);
      v23 = v22 - v24;
    }
    else
    {
      v25 = *(_QWORD *)(a2 + 4464);
      if ( v25 )
      {
        v26 = *(_DWORD *)(a1 + 176);
        v27 = 0LL;
        v28 = 0;
        if ( v26 )
        {
          v29 = v26;
          v30 = (_QWORD *)(a1 + 184);
          v28 = *(_DWORD *)(a1 + 176);
          do
          {
            v27 += *v30++;
            --v29;
          }
          while ( v29 );
        }
        v31 = (unsigned int)(v22 - 1);
        v32 = *(_QWORD *)(v25 + 8 * v31) / (v27 / v28 / v22);
        if ( (unsigned int)v32 < (unsigned int)v22 )
        {
          LODWORD(v31) = *(_QWORD *)(v25 + 8 * v31) / (v27 / v28 / v22);
          if ( !(_DWORD)v32 )
            LODWORD(v31) = 1;
        }
        v23 = v22 - v31;
        if ( (_DWORD)v22 == (_DWORD)v31 )
          return 8LL;
      }
    }
    v33 = 1;
    v34 = (int *)&v43 + 1;
    do
    {
      v35 = *v34;
      if ( *v34 )
      {
        v36 = 0;
        if ( v3 )
        {
          v37 = 0LL;
          do
          {
            v38 = *(_QWORD *)(a1 + 144);
            if ( *(_DWORD *)(*(_QWORD *)(v38 + v37 + 8) + 296LL) == v33 )
            {
              if ( v33 == 1 )
                ++*(_DWORD *)(a1 + 264);
              else
                ++*(_DWORD *)(a1 + 268);
              *(_BYTE *)(*(_QWORD *)(a1 + 144) + 40LL * v36 + 4) = *(_BYTE *)(v38 + v37 + 4) | 1;
              --*(_DWORD *)(a1 + 164);
              if ( !--v23 )
                return 5LL;
              v39 = v35-- == 1;
              *v34 = v35;
              if ( v39 )
                break;
            }
            ++v36;
            v37 += 40LL;
          }
          while ( v36 < v3 );
        }
      }
      ++v33;
      ++v34;
    }
    while ( v33 <= 2 );
    return 5LL;
  }
}
