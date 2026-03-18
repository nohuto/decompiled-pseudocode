/*
 * XREFs of ?vFillGRectDIB32Bitfields@@YGXPAVSURFACE@@PAU_GRADIENTRECTDATA@@@Z @ 0x23BACC
 * Callers:
 *     <none>
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __stdcall vFillGRectDIB32Bitfields(struct SURFACE *a1, _DWORD *Destination)
{
  _DWORD *v2; // ebx
  int v3; // edi
  int v4; // esi
  unsigned int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // edx
  char *v10; // edx
  char *v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // ebx
  unsigned int v14; // edi
  unsigned int v15; // eax
  char *v16; // edi
  int v17; // esi
  int v18; // eax
  unsigned __int64 v19; // kr30_8
  unsigned int v20; // edx
  unsigned int v21; // eax
  ULONG v22; // eax
  char *v23; // [esp+Ch] [ebp-4Ch]
  unsigned int v24; // [esp+Ch] [ebp-4Ch]
  unsigned int v25; // [esp+10h] [ebp-48h]
  int v26; // [esp+18h] [ebp-40h]
  int v27; // [esp+1Ch] [ebp-3Ch]
  char *v28; // [esp+1Ch] [ebp-3Ch]
  unsigned int v29; // [esp+1Ch] [ebp-3Ch]
  int v30; // [esp+20h] [ebp-38h]
  __int64 v31; // [esp+20h] [ebp-38h]
  char *v32; // [esp+24h] [ebp-34h]
  unsigned int v33; // [esp+28h] [ebp-30h]
  __int64 v34; // [esp+28h] [ebp-30h]
  unsigned int v35; // [esp+2Ch] [ebp-2Ch]
  unsigned int v36; // [esp+30h] [ebp-28h]
  unsigned int v37; // [esp+34h] [ebp-24h]
  int v38; // [esp+38h] [ebp-20h]
  int v39; // [esp+3Ch] [ebp-1Ch]
  unsigned int v40; // [esp+40h] [ebp-18h]
  unsigned int v41; // [esp+44h] [ebp-14h]
  unsigned int v42; // [esp+48h] [ebp-10h]
  unsigned int v43; // [esp+4Ch] [ebp-Ch]
  unsigned int v44; // [esp+50h] [ebp-8h]
  unsigned int v45; // [esp+54h] [ebp-4h]
  struct SURFACE *v46; // [esp+60h] [ebp+8h]
  char *Destinationa; // [esp+64h] [ebp+Ch]

  v2 = Destination;
  v3 = *((_DWORD *)a1 + 13);
  v4 = Destination[11];
  v5 = Destination[13];
  v26 = Destination[40];
  v44 = Destination[12];
  v42 = Destination[14];
  v41 = Destination[15];
  v40 = Destination[16];
  v45 = Destination[17];
  v38 = v3;
  v39 = v4;
  v43 = v5;
  v30 = 0;
  if ( Destination[38] )
  {
    v29 = Destination[21];
    v31 = *((_QWORD *)Destination + 11);
    v34 = *((_QWORD *)Destination + 12);
    v18 = Destination[42];
    v24 = Destination[20];
    if ( v18 > 0 )
    {
      v19 = v18 * *((_QWORD *)Destination + 10) + __PAIR64__(v5, v44);
      v43 = HIDWORD(v19);
      v44 = v19;
      v20 = (v18 * v31 + __PAIR64__(v41, v42)) >> 32;
      v42 += v18 * v31;
      v41 = v20;
      v4 = Destination[11];
      v5 = (v18 * v34 + __PAIR64__(v45, v40)) >> 32;
      v40 += v18 * v34;
      v3 = *((_DWORD *)a1 + 13);
      v45 = v5;
      BYTE2(v5) = BYTE6(v19);
    }
    Destinationa = (char *)(*((_DWORD *)a1 + 12) + v3 * Destination[9] + 4 * Destination[8]);
    if ( v4 )
    {
      BYTE2(v21) = BYTE2(v45);
      do
      {
        v22 = XEPALOBJ::ulDispatchGFPEFunction(
                v26,
                *(_DWORD *)(*(_DWORD *)v26 + 68),
                BYTE2(v5) | ((BYTE2(v41) | (BYTE2(v21) << 8)) << 8));
        RtlFillMemoryUlong(Destinationa, 4 * v2[10], v22);
        v5 = (__PAIR64__(v43, v24) + __PAIR64__(v29, v44)) >> 32;
        v44 += v24;
        v41 = (v31 + __PAIR64__(v41, v42)) >> 32;
        v42 += v31;
        v21 = (v34 + __PAIR64__(v45, v40)) >> 32;
        v40 += v34;
        Destinationa += v3;
        v43 = v5;
        v45 = v21;
        --v4;
      }
      while ( v4 );
    }
  }
  else
  {
    v27 = *((_DWORD *)a1 + 12) + v3 * Destination[9];
    v46 = (struct SURFACE *)Destination[29];
    v37 = Destination[30];
    v36 = Destination[31];
    v35 = Destination[32];
    v33 = Destination[33];
    v6 = Destination[41];
    v25 = Destination[28];
    if ( v6 > 0 )
    {
      v7 = (v6 * *((_QWORD *)Destination + 14) + __PAIR64__(v5, v44)) >> 32;
      v44 += v6 * Destination[28];
      v43 = v7;
      v8 = (v6 * __PAIR64__(v36, v37) + __PAIR64__(v41, v42)) >> 32;
      v42 += v6 * v37;
      v41 = v8;
      v4 = Destination[11];
      v9 = (v6 * __PAIR64__(v33, v35) + __PAIR64__(v45, v40)) >> 32;
      v40 += v6 * v35;
      v45 = v9;
    }
    v10 = (char *)(v27 + 4 * Destination[8]);
    v11 = v10;
    v28 = v10;
    v23 = v10;
    v32 = v10;
    if ( (&v10[4 * Destination[10]] >= v10 ? (unsigned int)(4 * Destination[10]) >> 2 : 0) != 0 )
    {
      v12 = v43;
      v13 = &v10[4 * Destination[10]] >= v10 ? (unsigned int)(4 * Destination[10]) >> 2 : 0;
      v14 = v41;
      BYTE2(v15) = BYTE2(v45);
      do
      {
        *(_DWORD *)v32 = XEPALOBJ::ulDispatchGFPEFunction(
                           v26,
                           *(_DWORD *)(*(_DWORD *)v26 + 68),
                           BYTE2(v12) | ((BYTE2(v14) | (BYTE2(v15) << 8)) << 8));
        v12 = (__PAIR64__(v12, v25) + __PAIR64__((unsigned int)v46, v44)) >> 32;
        v44 += v25;
        v14 = (__PAIR64__(v14, v37) + __PAIR64__(v36, v42)) >> 32;
        v42 += v37;
        v15 = (__PAIR64__(v45, v35) + __PAIR64__(v33, v40)) >> 32;
        v40 += v35;
        v32 += 4;
        v45 = v15;
        ++v30;
      }
      while ( v30 != v13 );
      v11 = v23;
      v10 = v23;
      v2 = Destination;
      v4 = v39;
    }
    v16 = &v11[v38];
    v17 = v4 - 1;
    while ( v17 > 0 )
    {
      --v17;
      memcpy(v16, v10, 4 * v2[10]);
      v10 = v28;
      v16 += v38;
    }
  }
}
