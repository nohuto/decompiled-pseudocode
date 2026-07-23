/*
 * XREFs of KiAdjustGroupConfiguration @ 0x1405157B8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r14
  __int64 v4; // rcx
  int *v5; // rdi
  int v6; // eax
  __int64 *v7; // r9
  __int64 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned __int16 v11; // r11
  __int64 v12; // r8
  unsigned __int16 v13; // si
  int v14; // edi
  int v15; // edx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int *v18; // rdi
  int v19; // eax
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rax
  char v23; // cl
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // cx
  __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 v30; // r9
  __int64 v31; // r11
  __int64 *v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  char v35; // r14
  unsigned __int16 v36; // si
  unsigned int v37; // edx
  unsigned __int16 i; // dx
  __int64 v39; // r8
  __int16 v40; // r10
  unsigned __int16 v41; // cx
  unsigned int v42; // r9d
  __int64 *v43; // r8
  __int64 v44; // rdx
  _DWORD v46[20]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[20]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v48[64]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v48, 0, sizeof(v48));
  LOBYTE(v2) = (unsigned __int8)memset(v46, 0, sizeof(v46));
  if ( (*(_BYTE *)(a1 + 181) & 8) == 0 && !*(_QWORD *)(a1 + 136) )
  {
    v3 = *(_WORD *)(a1 + 144);
    if ( v3 >= (unsigned __int16)KiActiveGroups )
    {
      if ( KiMaximumGroups )
      {
        v4 = (unsigned __int16)KiMaximumGroups;
        v5 = v46;
        v6 = KiMaximumGroupSize;
        while ( v4 )
        {
          *v5++ = v6;
          --v4;
        }
      }
      v7 = KeNodeBlock;
      if ( KeNumberNodes )
      {
        v8 = KeNodeBlock;
        v9 = (unsigned __int16)KeNumberNodes;
        do
        {
          if ( (*(_BYTE *)(*v8 + 181) & 2) != 0 )
            v46[*(unsigned __int16 *)(*v8 + 144)] -= *(unsigned __int8 *)(*v8 + 180);
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = (unsigned __int16)KeNumberNodes;
      v11 = 0;
      if ( KeNumberNodes )
      {
        while ( 1 )
        {
          v12 = KeNodeBlock[v11];
          if ( (*(_BYTE *)(v12 + 181) & 0xA) == 2 && !*(_QWORD *)(v12 + 136) )
          {
            v13 = *(_WORD *)(v12 + 144);
            if ( v13 < (unsigned __int16)KiActiveGroups )
            {
              v14 = *(unsigned __int8 *)(v12 + 180);
              v15 = *(unsigned __int8 *)(a1 + 180);
              v16 = v14 - v15;
              if ( (unsigned __int8)v14 <= (unsigned __int8)v15 )
                v16 = *(unsigned __int8 *)(a1 + 180) - v14;
              LOWORD(v2) = v3;
              if ( (unsigned __int8)v14 <= (unsigned __int8)v15 )
                LOWORD(v2) = *(_WORD *)(v12 + 144);
              if ( v46[(unsigned __int16)v2] >= v16 )
                break;
            }
          }
          if ( ++v11 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_23;
        }
        *(_WORD *)(v12 + 144) = v3;
        *(_BYTE *)(v12 + 181) &= ~4u;
        *(_BYTE *)(a1 + 181) |= 4u;
        *(_WORD *)(a1 + 144) = v13;
      }
      else
      {
LABEL_23:
        if ( KiMaximumGroups )
        {
          v17 = (unsigned __int16)KiMaximumGroups;
          v18 = Src;
          v19 = KiMaximumGroupSize;
          while ( v17 )
          {
            *v18++ = v19;
            --v17;
          }
        }
        if ( (_WORD)v10 )
        {
          v20 = KeNodeBlock;
          v21 = v10;
          do
          {
            v22 = *v20;
            v23 = *(_BYTE *)(*v20 + 181);
            if ( (v23 & 2) != 0 && ((v23 & 8) != 0 || *(_QWORD *)(v22 + 136)) )
              Src[*(unsigned __int16 *)(v22 + 144)] -= *(unsigned __int8 *)(v22 + 180);
            ++v20;
            --v21;
          }
          while ( v21 );
        }
        LOBYTE(v2) = KeNumberNodes;
        LOWORD(v24) = 0;
        if ( KeNumberNodes )
        {
          v25 = (unsigned __int16)KeNumberNodes;
          do
          {
            v26 = *v7;
            LOBYTE(v2) = *(_BYTE *)(*v7 + 181) & 0xA;
            if ( (_BYTE)v2 == 2 && !*(_QWORD *)(v26 + 136) )
            {
              v2 = (unsigned __int16)v24;
              LOWORD(v24) = v24 + 1;
              v48[v2] = v26;
            }
            ++v7;
            --v25;
          }
          while ( v25 );
        }
        if ( (unsigned __int16)v24 - 1 > 0 )
        {
          v27 = 1;
          do
          {
            if ( v27 < (unsigned __int16)v24 )
            {
              v28 = (unsigned __int16)(v27 - 1);
              v29 = &v48[v27];
              v30 = (unsigned __int16)(v24 - v27);
              do
              {
                v31 = v48[v28];
                if ( *(_BYTE *)(v31 + 180) < *(_BYTE *)(*v29 + 180LL) )
                {
                  v48[v28] = *v29;
                  *v29 = v31;
                }
                ++v29;
                --v30;
              }
              while ( v30 );
            }
            LODWORD(v2) = v27++;
          }
          while ( (int)v2 < (unsigned __int16)v24 - 1 );
        }
        if ( (_WORD)v24 )
        {
          v32 = v48;
          v33 = (unsigned __int16)v24;
          do
          {
            v34 = *v32++;
            LOWORD(v2) = *(_WORD *)(v34 + 144);
            *(_WORD *)(v34 + 146) = v2;
            --v33;
          }
          while ( v33 );
        }
        v35 = 0;
        v36 = 0;
        if ( KiActiveGroups )
        {
          while ( 1 )
          {
            if ( KiMaximumGroups )
              memmove(v46, Src, 4LL * (unsigned __int16)KiMaximumGroups);
            v37 = *(unsigned __int8 *)(a1 + 180);
            LODWORD(v2) = v46[v36];
            if ( (unsigned int)v2 >= v37 )
            {
              LODWORD(v2) = v2 - v37;
              *(_WORD *)(a1 + 144) = v36;
              v46[v36] = v2;
              for ( i = 0; i < (unsigned __int16)v24; ++i )
              {
                LOBYTE(v2) = i;
                v39 = v48[i];
                if ( v39 != a1 )
                {
                  v40 = KiMaximumGroups;
                  v41 = 0;
                  if ( KiMaximumGroups )
                  {
                    LODWORD(v2) = *(unsigned __int8 *)(v39 + 180);
                    while ( 1 )
                    {
                      v42 = v46[v41];
                      if ( v42 >= (unsigned int)v2 )
                        break;
                      if ( ++v41 >= (unsigned __int16)KiMaximumGroups )
                        goto LABEL_64;
                    }
                    *(_WORD *)(v39 + 144) = v41;
                    LODWORD(v2) = *(unsigned __int8 *)(v39 + 180);
                    v46[v41] = v42 - v2;
                  }
LABEL_64:
                  if ( v41 == v40 )
                    break;
                }
              }
              if ( i == (_WORD)v24 )
                break;
            }
            if ( ++v36 >= (unsigned __int16)KiActiveGroups )
              goto LABEL_70;
          }
          v35 = 1;
        }
LABEL_70:
        if ( (_WORD)v24 )
        {
          v43 = v48;
          v24 = (unsigned __int16)v24;
          do
          {
            v44 = *v43;
            if ( v35 )
            {
              LOBYTE(v2) = (*(_WORD *)(v44 + 144) < (unsigned __int16)KiActiveGroups ? 4 : 0) | *(_BYTE *)(v44 + 181) & 0xFB;
              *(_BYTE *)(v44 + 181) = v2;
            }
            else
            {
              LOWORD(v2) = *(_WORD *)(v44 + 146);
              *(_WORD *)(v44 + 144) = v2;
            }
            ++v43;
            *(_WORD *)(v44 + 146) = 0;
            --v24;
          }
          while ( v24 );
        }
      }
    }
  }
  return v2;
}
