/*
 * XREFs of NVMeReenumerateCompareAndMerge @ 0x1C00191E8
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019920 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
 *     NVMeIsLunActive @ 0x1C0013BA4 (NVMeIsLunActive.c)
 */

void __fastcall NVMeReenumerateCompareAndMerge(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // r11d
  char v6; // r10
  unsigned int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // r8d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  char v13; // r13
  unsigned int v14; // edi
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // r9
  unsigned __int16 i; // di
  unsigned __int16 j; // si
  unsigned int v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ecx
  __int64 *v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  _DWORD *v28; // roff
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edi
  _DWORD *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // r15d
  unsigned int v35; // esi
  __int64 *v36; // rdi
  __int64 v37; // rcx
  int v38; // edx
  unsigned int v39; // r10d
  __int64 v40; // r8
  _QWORD v41[9]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+68h] [rbp-8h]
  _QWORD savedregs[7]; // [rsp+70h] [rbp+0h]
  char v44; // [rsp+B8h] [rbp+48h]
  unsigned int v45; // [rsp+C0h] [rbp+50h]
  int v46; // [rsp+C8h] [rbp+58h] BYREF

  if ( a2 )
  {
    v2 = *(_DWORD *)(a1 + 200);
    v3 = 0;
    v44 = 0;
    v45 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    if ( v2 )
    {
      do
      {
        if ( NVMeIsLunActive(*(_QWORD *)(a1 + 8LL * v7 + 1720)) )
        {
          *(_DWORD *)(v9 + 20) |= 0x20u;
          v8 = (unsigned int)(v8 + 1);
        }
        v2 = *(_DWORD *)(a1 + 200);
        v7 = v10 + 1;
      }
      while ( v7 < v2 );
      v45 = v8;
    }
    v11 = *(_DWORD *)(a2 + 4);
    v12 = v3;
    if ( v11 <= v2 )
      v11 = v2;
    if ( v11 )
    {
      do
      {
        v13 = v3;
        v14 = v3;
        v15 = *(_QWORD *)(a2 + 8LL * v12 + 8);
        if ( v15 )
        {
          do
          {
            if ( v14 >= *(_DWORD *)(a1 + 200) )
              break;
            v16 = *(_QWORD *)(a1 + 8LL * v14 + 1720);
            if ( v16 && *(_DWORD *)(v16 + 16) == *(_DWORD *)(v15 + 16) )
            {
              *(_DWORD *)(v16 + 20) &= ~0x20u;
              v13 = 1;
              v17 = *(_DWORD *)(v15 + 20);
              v45 = v8 - 1;
              if ( *(_DWORD *)(v16 + 52) != *(_DWORD *)(v15 + 52) )
              {
                v17 |= 0x50u;
                v44 = 1;
                *(_DWORD *)(v15 + 20) = v17;
              }
              v18 = v17;
              if ( v14 != v12
                || *(_QWORD *)(v16 + 56) != *(_QWORD *)(v15 + 56)
                || *(_WORD *)(v16 + 92) != *(_WORD *)(v15 + 92)
                || *(_BYTE *)(v16 + 64) != *(_BYTE *)(v15 + 64)
                || *(_DWORD *)(v16 + 48) != *(_DWORD *)(v15 + 48)
                || *(_BYTE *)(v16 + 65) != *(_BYTE *)(v15 + 65)
                || *(_BYTE *)(v16 + 66) != *(_BYTE *)(v15 + 66)
                || *(_BYTE *)(v16 + 10) != *(_BYTE *)(v15 + 10) )
              {
                v44 = 1;
                v18 = v17 | 0x10;
                *(_DWORD *)(v15 + 20) = v18;
              }
              if ( (v18 & 0x10) == 0 )
              {
                StorPortExtendedFunction(
                  1LL,
                  a1,
                  v15,
                  v18,
                  v41[0],
                  v41[1],
                  v41[2],
                  v41[3],
                  v41[4],
                  v41[5],
                  v41[6],
                  v41[7],
                  v41[8],
                  v42,
                  savedregs[0],
                  savedregs[1],
                  savedregs[2],
                  savedregs[3]);
                v3 = 0;
                v15 = 0LL;
                *(_QWORD *)(a2 + 8LL * v12 + 8) = 0LL;
              }
              v8 = v45;
            }
            ++v14;
          }
          while ( v15 );
          v6 = v44;
        }
        ++v12;
        if ( v13 != 1 && v15 )
        {
          *(_DWORD *)(v15 + 20) |= 8u;
          v6 = 1;
          v44 = 1;
        }
      }
      while ( v12 < v11 );
    }
    if ( (_DWORD)v8 || v6 )
    {
      StorPortPause(a1, 120LL);
      *(_DWORD *)(a1 + 24) |= 0x100u;
      v3 = 0;
      for ( i = 0; i < *(_WORD *)(a1 + 280); ++i )
      {
        for ( j = 0; j < 0x3E8u; ++j )
        {
          StorPortExtendedFunction(
            81LL,
            a1,
            10000LL,
            v8,
            v41[0],
            v41[1],
            v41[2],
            v41[3],
            v41[4],
            v41[5],
            v41[6],
            v41[7],
            v41[8],
            v42,
            savedregs[0],
            savedregs[1],
            savedregs[2],
            savedregs[3]);
          v3 = 0;
          if ( !*(_WORD *)(136LL * i + *(_QWORD *)(a1 + 768) + 128) )
            break;
        }
      }
    }
    v21 = *(_DWORD *)(a2 + 4);
    v22 = v3;
    v23 = *(_DWORD *)(a1 + 200);
    if ( v21 <= v23 )
      v21 = *(_DWORD *)(a1 + 200);
    if ( v21 )
    {
      v24 = (__int64 *)(a2 + 8);
      v25 = v21;
      do
      {
        v26 = *v24;
        if ( *v24 && (*(_DWORD *)(v26 + 20) & 8) != 0 )
        {
          v22 = v3;
          do
          {
            v27 = *(_QWORD *)(a1 + 8LL * v22 + 1720);
            if ( !v27 )
              break;
            if ( (*(_DWORD *)(v27 + 20) & 4) != 0 )
              break;
            ++v22;
          }
          while ( v22 < 0xFF );
          if ( v22 >= 0xFF )
          {
            memset(v41, 0, sizeof(v41));
            v30 = *(unsigned int *)(a2 + 4);
            v46 = 72;
            LODWORD(v41[5]) = 4;
            StorPortExtendedFunction(
              16LL,
              a1,
              v41,
              &v46,
              256,
              LODWORD(v41[1]),
              v41[2],
              v41[3],
              6,
              v41[5],
              v30,
              v41[7],
              v41[8],
              v42,
              savedregs[0],
              savedregs[1],
              savedregs[2],
              savedregs[3]);
            v3 = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 8LL * v22 + 1720) = v26;
            *(_BYTE *)(v26 + 10) = v22;
            v28 = (_DWORD *)(*(_QWORD *)(a1 + 8LL * v22 + 1720) + 20LL);
            *v28 |= 0x80u;
            v29 = *(_QWORD *)(a1 + 8LL * v22 + 1720);
            *(_DWORD *)(v29 + 20) &= ~8u;
          }
        }
        ++v24;
        --v25;
      }
      while ( v25 );
      v23 = *(_DWORD *)(a1 + 200);
    }
    if ( v22 >= v23 )
    {
      v23 = 255;
      if ( (unsigned int)(unsigned __int16)v22 + 1 < 0xFF )
        v23 = (unsigned __int16)v22 + 1;
      *(_DWORD *)(a1 + 200) = v23;
    }
    v31 = v3;
    if ( v23 )
    {
      do
      {
        v32 = *(_DWORD **)(a1 + 8LL * v31 + 1720);
        if ( v32 && (v32[5] & 0x20) != 0 )
        {
          memset(v32, 0, 0x68uLL);
          v3 = 0;
        }
        v23 = *(_DWORD *)(a1 + 200);
        ++v31;
      }
      while ( v31 < v23 );
    }
    v33 = *(_DWORD *)(a2 + 4);
    v34 = v3;
    v35 = v33;
    if ( v33 <= v23 )
      v35 = v23;
    if ( v35 )
    {
      v36 = (__int64 *)(a2 + 8);
      do
      {
        v37 = *v36;
        if ( *v36 )
        {
          v38 = *(_DWORD *)(v37 + 20);
          if ( (v38 & 0x80u) != 0 )
          {
            *(_DWORD *)(v37 + 20) = v38 & 0xFFFFFF7F;
          }
          else
          {
            v39 = *(_DWORD *)(a1 + 200);
            v8 = v3;
            if ( v39 )
            {
              while ( 1 )
              {
                v40 = *(_QWORD *)(a1 + 8LL * (unsigned int)v8 + 1720);
                if ( v40 )
                {
                  if ( *(_DWORD *)(v40 + 16) == *(_DWORD *)(v37 + 16) && (v38 & 0x10) != 0 )
                    break;
                }
                v8 = (unsigned int)(v8 + 1);
                if ( (unsigned int)v8 >= v39 )
                  goto LABEL_79;
              }
              *(_DWORD *)(v37 + 20) = v38 & 0xFFFFFFEF;
              *(_OWORD *)v40 = *(_OWORD *)v37;
              *(_OWORD *)(v40 + 16) = *(_OWORD *)(v37 + 16);
              *(_OWORD *)(v40 + 32) = *(_OWORD *)(v37 + 32);
              *(_OWORD *)(v40 + 48) = *(_OWORD *)(v37 + 48);
              *(_OWORD *)(v40 + 64) = *(_OWORD *)(v37 + 64);
              *(_OWORD *)(v40 + 80) = *(_OWORD *)(v37 + 80);
              *(_QWORD *)(v40 + 96) = *(_QWORD *)(v37 + 96);
              *(_BYTE *)(v40 + 10) = v8;
              StorPortExtendedFunction(
                1LL,
                a1,
                v37,
                v8,
                v41[0],
                v41[1],
                v41[2],
                v41[3],
                v41[4],
                v41[5],
                v41[6],
                v41[7],
                v41[8],
                v42,
                savedregs[0],
                savedregs[1],
                savedregs[2],
                savedregs[3]);
              v3 = 0;
              *v36 = 0LL;
            }
          }
        }
LABEL_79:
        ++v34;
        ++v36;
      }
      while ( v34 < v35 );
      v33 = *(_DWORD *)(a2 + 4);
    }
    *(_DWORD *)(a1 + 188) = v33;
    if ( v45 != v3 || v44 )
    {
      StorPortNotification(7LL, a1, 0LL);
      *(_DWORD *)(a1 + 24) &= ~0x100u;
      StorPortResume(a1);
    }
    StorPortExtendedFunction(
      1LL,
      a1,
      a2,
      v8,
      v41[0],
      v41[1],
      v41[2],
      v41[3],
      v41[4],
      v41[5],
      v41[6],
      v41[7],
      v41[8],
      v42,
      savedregs[0],
      savedregs[1],
      savedregs[2],
      savedregs[3]);
    *(_DWORD *)(a1 + 3796) &= ~2u;
  }
}
