/*
 * XREFs of IopSaveRestoreConfiguration @ 0x1408A0CD0
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x1407528FC (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopSaveRestoreConfiguration(__int64 a1, unsigned int a2, _QWORD **a3, char a4)
{
  __int64 *v6; // r11
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // eax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _QWORD *result; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm1

  if ( a2 )
  {
    v6 = (__int64 *)(a1 + 32);
    v7 = a2;
    do
    {
      v8 = *v6;
      if ( a4 )
      {
        v9 = *(__int64 **)(v8 + 16);
        *(_QWORD *)(v8 + 24) = v9;
      }
      else
      {
        v9 = *(__int64 **)(v8 + 24);
        *(_QWORD *)(v8 + 16) = v9;
      }
      v10 = *v9;
      v11 = 0LL;
      v12 = v10 + 24;
      v13 = (8 * ((unsigned __int64)*(unsigned int *)(v10 + 20) + 3) - 24 + 7) >> 3;
      if ( v10 + 24 > v10 + 8 * ((unsigned __int64)*(unsigned int *)(v10 + 20) + 3) )
        v13 = 0LL;
      if ( v13 )
      {
        do
        {
          if ( *(_BYTE *)(*(_QWORD *)v12 + 8LL) )
          {
            v14 = *(_QWORD *)(*(_QWORD *)v12 + 32LL);
            if ( a4 )
            {
              v15 = *(_DWORD *)(v14 + 152);
              v16 = *(_OWORD *)(v14 + 56);
              *(_OWORD *)(v14 + 160) = *(_OWORD *)(v14 + 40);
              v17 = *(_OWORD *)(v14 + 72);
              *(_OWORD *)(v14 + 176) = v16;
              v18 = *(_OWORD *)(v14 + 88);
              *(_OWORD *)(v14 + 192) = v17;
              v19 = *(_OWORD *)(v14 + 104);
              *(_OWORD *)(v14 + 208) = v18;
              v20 = *(_OWORD *)(v14 + 120);
              *(_OWORD *)(v14 + 224) = v19;
              v21 = *(_OWORD *)(v14 + 136);
              *(_OWORD *)(v14 + 240) = v20;
              *(_OWORD *)(v14 + 256) = v21;
              *(_DWORD *)(v14 + 272) = v15;
            }
            else
            {
              v22 = *(_DWORD *)(v14 + 272);
              v23 = *(_OWORD *)(v14 + 176);
              *(_OWORD *)(v14 + 40) = *(_OWORD *)(v14 + 160);
              v24 = *(_OWORD *)(v14 + 192);
              *(_OWORD *)(v14 + 56) = v23;
              v25 = *(_OWORD *)(v14 + 208);
              *(_OWORD *)(v14 + 72) = v24;
              v26 = *(_OWORD *)(v14 + 224);
              *(_OWORD *)(v14 + 88) = v25;
              v27 = *(_OWORD *)(v14 + 240);
              *(_OWORD *)(v14 + 104) = v26;
              v28 = *(_OWORD *)(v14 + 256);
              *(_OWORD *)(v14 + 120) = v27;
              *(_OWORD *)(v14 + 136) = v28;
              *(_DWORD *)(v14 + 152) = v22;
            }
          }
          v12 += 8LL;
          ++v11;
        }
        while ( v11 < v13 );
      }
      v6 += 8;
      --v7;
    }
    while ( v7 );
  }
  for ( result = *a3; result != a3; result = (_QWORD *)*result )
  {
    if ( a4 )
    {
      v30 = *(_OWORD *)result;
      *((_OWORD *)result - 2) = *((_OWORD *)result - 3);
      *((_OWORD *)result - 1) = v30;
    }
    else
    {
      v31 = *((_OWORD *)result - 1);
      *((_OWORD *)result - 3) = *((_OWORD *)result - 2);
      *(_OWORD *)result = v31;
    }
  }
  return result;
}
