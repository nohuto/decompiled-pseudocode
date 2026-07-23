/*
 * XREFs of KiShuffleAssignedNodes @ 0x140A92BD8
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

void __fastcall KiShuffleAssignedNodes(__int64 *a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v7; // r13d
  unsigned __int16 v8; // bx
  char v9; // r10
  __int64 *v10; // r13
  __int64 v11; // r14
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // r11
  __int64 *v14; // r13
  __int64 v15; // rcx
  unsigned __int16 v16; // si
  __int64 v17; // r10
  int v18; // ecx
  int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned __int16 v22; // ax
  unsigned int v23; // ebp
  unsigned __int16 v24; // r9
  __int64 v25; // rdx
  unsigned __int16 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // r10d
  unsigned __int16 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rsi
  unsigned __int16 v32; // r9
  __int64 v33; // rdx
  unsigned int v34; // ebp
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r9d
  __int16 v39; // [rsp+0h] [rbp-68h]
  unsigned __int16 v40; // [rsp+2h] [rbp-66h]
  unsigned int v41; // [rsp+8h] [rbp-60h]
  unsigned int v42; // [rsp+Ch] [rbp-5Ch]
  __int64 *v43; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int64 *v45; // [rsp+20h] [rbp-48h]
  __int64 v46; // [rsp+28h] [rbp-40h]
  char v47; // [rsp+78h] [rbp+10h]

  v4 = a3;
  v42 = 0;
  v7 = 0;
  do
  {
    v47 = 0;
    v8 = 0;
    v40 = 0;
    v9 = 0;
    if ( a2 )
    {
      v10 = a1;
      v45 = a1;
      while ( 1 )
      {
        v11 = *v10;
        v46 = *v10;
        if ( (*(_BYTE *)(*v10 + 181) & 2) == 0 )
          goto LABEL_47;
        v12 = 64;
        v39 = 64;
        v41 = 0;
        v13 = 0;
        v14 = a1;
        v43 = a1;
        do
        {
          v15 = *v14;
          v44 = *v14;
          if ( (*(_BYTE *)(*v14 + 181) & 2) != 0 && v8 != v13 )
          {
            v16 = *(_WORD *)(v15 + 144);
            v17 = *(unsigned __int16 *)(v11 + 144);
            if ( (_WORD)v17 != v16 )
            {
              v18 = *(unsigned __int8 *)(v15 + 180);
              v19 = *(unsigned __int8 *)(v11 + 180);
              v20 = v18 - v19;
              v21 = v19 - v18;
              if ( v8 >= v13 )
                v21 = v20;
              v22 = v16;
              if ( v8 >= v13 )
                v22 = *(_WORD *)(v11 + 144);
              if ( *(_DWORD *)(v4 + 4LL * v22) >= v21 )
              {
                v23 = 0;
                v24 = 0;
                do
                {
                  if ( v24 != v8 )
                  {
                    v25 = a1[v24];
                    if ( *(_WORD *)(v25 + 144) == (_WORD)v17 && (*(_BYTE *)(v25 + 181) & 2) != 0 )
                      v23 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v25 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v11 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v17) - 1);
                  }
                  ++v24;
                }
                while ( v24 < a2 );
                v26 = 0;
                do
                {
                  if ( v26 != v13 )
                  {
                    v27 = a1[v26];
                    if ( *(_WORD *)(v27 + 144) == v16 && (*(_BYTE *)(v27 + 181) & 2) != 0 )
                      v23 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v27 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v44 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v16) - 1);
                  }
                  ++v26;
                }
                while ( v26 < a2 );
                v28 = 0;
                v29 = 0;
                do
                {
                  if ( v29 != v13 )
                  {
                    v30 = a1[v29];
                    if ( *(_WORD *)(v30 + 144) == v16 && (*(_BYTE *)(v30 + 181) & 2) != 0 )
                      v28 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v30 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v11 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v16) - 1);
                  }
                  ++v29;
                }
                while ( v29 < a2 );
                v31 = *(unsigned __int16 *)(v11 + 144);
                v8 = v40;
                v32 = 0;
                do
                {
                  if ( v32 != v40 )
                  {
                    v33 = a1[v32];
                    if ( *(_WORD *)(v33 + 144) == (_WORD)v31 && (*(_BYTE *)(v33 + 181) & 2) != 0 )
                      v28 += *((_DWORD *)KeNodeDistance
                             + *(unsigned __int16 *)(v33 + 146)
                             + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v44 + 146))
                           / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v31) - 1);
                  }
                  ++v32;
                }
                while ( v32 < a2 );
                v11 = v46;
                v14 = v43;
                if ( v28 < v23 )
                {
                  v34 = v23 - v28;
                  if ( v41 < v34 )
                  {
                    v12 = v13;
                    v41 = v34;
                    v4 = a3;
                    v39 = v13;
                    goto LABEL_43;
                  }
                }
                v4 = a3;
              }
              v12 = v39;
            }
          }
LABEL_43:
          ++v14;
          ++v13;
          v43 = v14;
        }
        while ( v13 < a2 );
        v10 = v45;
        if ( v12 == 64 )
        {
          v9 = v47;
        }
        else
        {
          v35 = *(unsigned __int16 *)(v11 + 144);
          v36 = a1[v12];
          v9 = 1;
          v47 = 1;
          v37 = *(unsigned __int16 *)(v36 + 144);
          *(_WORD *)(v11 + 144) = v37;
          *(_WORD *)(v36 + 144) = v35;
          LODWORD(v36) = *(unsigned __int8 *)(v36 + 180);
          v38 = *(unsigned __int8 *)(v11 + 180);
          *(_DWORD *)(v4 + 4 * v35) += v36 - v38;
          *(_DWORD *)(v4 + 4 * v37) += v38 - v36;
        }
LABEL_47:
        ++v8;
        ++v10;
        v40 = v8;
        v45 = v10;
        if ( v8 >= a2 )
        {
          v7 = v42;
          break;
        }
      }
    }
    v42 = ++v7;
  }
  while ( v9 && v7 < 0xA );
}
