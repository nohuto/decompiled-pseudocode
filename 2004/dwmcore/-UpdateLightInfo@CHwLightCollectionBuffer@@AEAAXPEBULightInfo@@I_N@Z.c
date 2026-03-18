/*
 * XREFs of ?UpdateLightInfo@CHwLightCollectionBuffer@@AEAAXPEBULightInfo@@I_N@Z @ 0x180011D24
 * Callers:
 *     ?Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z @ 0x180011C30 (-Create@CHwLightCollectionBuffer@@SAJPEBULightInfo@@I_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?Transpose@CMILMatrix@@QEAAXXZ @ 0x18002273C (-Transpose@CMILMatrix@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 */

void __fastcall CHwLightCollectionBuffer::UpdateLightInfo(
        CHwLightCollectionBuffer *this,
        const struct LightInfo *a2,
        unsigned int a3,
        char a4)
{
  int v6; // xmm0_4
  char v7; // r15
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // r14d
  unsigned int v11; // r10d
  unsigned int v12; // r11d
  char *v13; // r9
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  int v21; // r11d
  __int128 v22; // [rsp+48h] [rbp-9h] BYREF
  __int128 v23; // [rsp+58h] [rbp+7h]
  __int128 v24; // [rsp+68h] [rbp+17h]
  __int128 v25; // [rsp+78h] [rbp+27h]
  int v26; // [rsp+88h] [rbp+37h]

  if ( a3 )
    v6 = (int)FLOAT_1_0;
  else
    v6 = 0;
  *((_DWORD *)this + 69) = v6;
  v7 = 0;
  *(_OWORD *)((char *)this + 504) = 0LL;
  if ( a3 )
  {
    v8 = (unsigned int *)((char *)a2 + 12);
    v9 = a3;
    do
    {
      if ( !*(v8 - 3) )
      {
        v7 = 1;
        *(__m128 *)((char *)this + 504) = _mm_add_ps(
                                            _mm_unpacklo_ps(
                                              _mm_unpacklo_ps((__m128)*(v8 - 2), (__m128)*v8),
                                              _mm_unpacklo_ps((__m128)*(v8 - 1), (__m128)v8[1])),
                                            *(__m128 *)((char *)this + 504));
      }
      v8 += 60;
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)this + 4) = -1;
  v10 = 0;
  v11 = 0;
  if ( a3 )
  {
    v12 = 0;
    v13 = (char *)a2 + 12;
    do
    {
      if ( v12 >= 8 )
        break;
      if ( *((_DWORD *)v13 - 3) )
      {
        v14 = *(_OWORD *)(v13 + 92);
        v15 = *(_OWORD *)(v13 + 108);
        v26 = *((_DWORD *)v13 + 39);
        v22 = v14;
        v16 = *(_OWORD *)(v13 + 124);
        v23 = v15;
        v17 = *(_OWORD *)(v13 + 140);
        v24 = v16;
        v25 = v17;
        CMILMatrix::Transpose((CMILMatrix *)&v22);
        v18 = v23;
        v19 = 112LL * v10;
        v20 = (unsigned __int64)v10++ << 7;
        *(_OWORD *)((char *)this + v20 + 20) = v22;
        *(_OWORD *)((char *)this + v20 + 36) = v18;
        *(_OWORD *)((char *)this + v20 + 52) = v24;
        *(_OWORD *)((char *)this + v20 + 68) = v25;
        *(_OWORD *)((char *)this + v20 + 84) = *((_OWORD *)v13 + 10);
        *(_OWORD *)((char *)this + v20 + 100) = *((_OWORD *)v13 + 11);
        *(_OWORD *)((char *)this + v20 + 116) = *((_OWORD *)v13 + 12);
        *(_OWORD *)((char *)this + v20 + 132) = *((_OWORD *)v13 + 13);
        *(_OWORD *)((char *)this + v19 + 280) = *(_OWORD *)(v13 - 8);
        *(_QWORD *)((char *)this + v19 + 296) = *((_QWORD *)v13 + 3);
        *(_DWORD *)((char *)this + v19 + 304) = *((_DWORD *)v13 + 8);
        *(_DWORD *)((char *)this + v19 + 308) = *((_DWORD *)v13 + 15);
        *(_OWORD *)((char *)this + v19 + 312) = *(_OWORD *)(v13 + 8);
        *(_QWORD *)((char *)this + v19 + 328) = *(_QWORD *)(v13 + 36);
        *(_DWORD *)((char *)this + v19 + 336) = *((_DWORD *)v13 + 11);
        *(_DWORD *)((char *)this + v19 + 340) = *((_DWORD *)v13 + 16);
        *(_QWORD *)((char *)this + v19 + 344) = *((_QWORD *)v13 + 6);
        *(_DWORD *)((char *)this + v19 + 352) = *((_DWORD *)v13 + 14);
        *(_DWORD *)((char *)this + v19 + 356) = *((_DWORD *)v13 + 21);
        *(_OWORD *)((char *)this + v19 + 360) = *(_OWORD *)(v13 + 68);
        *(_DWORD *)((char *)this + v19 + 376) = *((_DWORD *)v13 + 22);
        *((_DWORD *)this + 4) = (*((_DWORD *)v13 - 3) << v21) | *((_DWORD *)this + 4) & ~(15 << v21);
        v12 = v21 + 4;
      }
      ++v11;
      v13 += 240;
    }
    while ( v11 < a3 );
  }
  memset_0((char *)this + 128 * (unsigned __int64)v10 + 20, 0, 256 - ((unsigned __int64)v10 << 7));
  memset_0((char *)this + 112 * v10 + 280, 0, 224 - 112LL * v10);
  if ( v7 || !a4 )
    *((_DWORD *)this + 4) &= ~(15 << (4 * v10));
}
