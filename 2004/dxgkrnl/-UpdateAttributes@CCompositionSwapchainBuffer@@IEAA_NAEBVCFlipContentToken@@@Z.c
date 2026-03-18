/*
 * XREFs of ?UpdateAttributes@CCompositionSwapchainBuffer@@IEAA_NAEBVCFlipContentToken@@@Z @ 0x1C0066884
 * Callers:
 *     ?NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00667B0 (-NotifyTokenInFrame@CCompositionSwapchainBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C0066084 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CCompositionSwapchainBuffer::UpdateAttributes(
        CCompositionSwapchainBuffer *this,
        const struct CFlipContentToken *a2)
{
  char v2; // al
  char v3; // r8
  int v6; // ecx
  int v7; // ecx
  char v8; // cl
  __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // xmm1_8
  float *v14; // rax
  float v15; // xmm1_4
  char v16; // al
  int v17; // r10d
  int v18; // ecx
  int v19; // eax
  unsigned __int8 v20; // r9
  bool v21; // cl
  bool v22; // al
  char v23; // al
  int v24; // esi
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // xmm0_8
  __int64 v28; // rax
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int64 v32; // xmm0_8
  __int16 v33; // cx
  __int128 v35; // [rsp+20h] [rbp-28h] BYREF
  __int64 v36; // [rsp+30h] [rbp-18h]

  v2 = *((_BYTE *)a2 + 120);
  v3 = 0;
  if ( (v2 & 1) != 0 )
  {
    v6 = *((_DWORD *)a2 + 31);
    if ( *((_DWORD *)this + 13) != v6 )
    {
      *((_DWORD *)this + 13) = v6;
      v3 = 1;
      v2 = *((_BYTE *)a2 + 120);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    v7 = *((_BYTE *)a2 + 224) & 1;
    if ( ((*((_DWORD *)this + 41) >> 12) & 1) != v7 )
    {
      v3 = 1;
      *((_DWORD *)this + 41) = *((_DWORD *)this + 41) & 0xFFFFEFFF | (v7 << 12);
    }
  }
  v8 = *((_BYTE *)a2 + 128);
  if ( (v8 & 1) != 0 )
  {
    v9 = *((_QWORD *)a2 + 17);
    if ( *((_QWORD *)this + 7) != v9 )
    {
      *((_QWORD *)this + 7) = v9;
      v3 = 1;
      *((_DWORD *)this + 41) = *((_DWORD *)this + 41) & 0xFFFFFFFE | (v9 != 0);
      v8 = *((_BYTE *)a2 + 128);
    }
  }
  if ( (v8 & 2) != 0 )
  {
    v10 = (*((unsigned __int8 *)a2 + 224) >> 2) & 1;
    if ( ((*((_DWORD *)this + 41) >> 1) & 1) != v10 )
    {
      v3 = 1;
      *((_DWORD *)this + 41) = *((_DWORD *)this + 41) & 0xFFFFFFFD | (2 * v10);
      v8 = *((_BYTE *)a2 + 128);
    }
  }
  if ( (v8 & 0x10) != 0 )
  {
    v11 = *((_DWORD *)a2 + 43);
    if ( *((_DWORD *)this + 23) != v11 )
    {
      *((_DWORD *)this + 23) = v11;
      v3 = 1;
      v8 = *((_BYTE *)a2 + 128);
    }
  }
  if ( (v8 & 0x20) != 0
    && (*((_DWORD *)this + 24) != *((_DWORD *)a2 + 44)
     || *((_DWORD *)this + 25) != *((_DWORD *)a2 + 45)
     || *((_DWORD *)this + 26) != *((_DWORD *)a2 + 46)
     || *((_DWORD *)this + 27) != *((_DWORD *)a2 + 47)) )
  {
    v3 = 1;
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 11);
    v8 = *((_BYTE *)a2 + 128);
  }
  if ( (v8 & 4) != 0 )
  {
    v12 = 6LL;
    v13 = *((_QWORD *)a2 + 20);
    v14 = (float *)((char *)this + 116);
    v35 = *((_OWORD *)a2 + 9);
    v36 = v13;
    do
    {
      v15 = *(float *)((char *)v14 + (char *)&v35 - (char *)this - 116);
      if ( *v14 != v15 )
      {
        *v14 = v15;
        v3 = 1;
      }
      ++v14;
      --v12;
    }
    while ( v12 );
  }
  v16 = *((_BYTE *)a2 + 129);
  v17 = 3;
  if ( (v16 & 1) != 0 )
  {
    *((_DWORD *)this + 35) = *((_DWORD *)a2 + 49);
    *((_DWORD *)this + 36) = *((_DWORD *)a2 + 50);
    v18 = *((_DWORD *)a2 + 51);
    *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 13);
    if ( v18 )
    {
      if ( v18 == 1 )
        v19 = 2;
      else
        v19 = (v18 != 2) + 3;
    }
    else
    {
      v19 = 1;
    }
    *((_DWORD *)this + 28) = v19;
    v3 = 1;
    v16 = *((_BYTE *)a2 + 129);
  }
  v20 = *((_BYTE *)a2 + 128);
  v21 = 0;
  v22 = (v16 & 1) == 0;
  if ( (v20 & 8) == 0 )
    v21 = v22;
  if ( !v21 )
  {
    if ( !*((_DWORD *)this + 60) || *(_DWORD *)(*((_QWORD *)this + 28) + 16LL) != 4 )
      v17 = *((_DWORD *)a2 + 42);
    if ( *((_DWORD *)this + 12) != v17 )
    {
      *((_DWORD *)this + 12) = v17;
      v3 = 1;
      v20 = *((_BYTE *)a2 + 128);
    }
  }
  *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (16 * v20)) & 0x400;
  v23 = *((_BYTE *)a2 + 128);
  if ( (v23 & 0x40) != 0 )
  {
    v24 = *((_DWORD *)a2 + 48);
    if ( v24 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        v24 = 0;
      }
      else if ( v24 == 1 )
      {
        v25 = *((_QWORD *)this + 42);
        v26 = *((_DWORD *)a2 + 63);
        v27 = *(_QWORD *)((char *)a2 + 244);
        *(_OWORD *)v25 = *(_OWORD *)((char *)a2 + 228);
        *(_QWORD *)(v25 + 16) = v27;
        *(_DWORD *)(v25 + 24) = v26;
      }
      else if ( v24 == 2 )
      {
        v28 = *((_QWORD *)this + 42);
        v29 = *(_OWORD *)((char *)a2 + 244);
        v30 = *(_OWORD *)((char *)a2 + 260);
        v31 = *(_OWORD *)((char *)a2 + 276);
        v32 = *(_QWORD *)((char *)a2 + 292);
        *(_OWORD *)v28 = *(_OWORD *)((char *)a2 + 228);
        *(_OWORD *)(v28 + 16) = v29;
        *(_OWORD *)(v28 + 32) = v30;
        *(_OWORD *)(v28 + 48) = v31;
        *(_QWORD *)(v28 + 64) = v32;
      }
    }
    *((_DWORD *)this + 86) = v24;
    v3 = 1;
    v23 = *((_BYTE *)a2 + 128);
  }
  if ( v23 < 0 )
  {
    v33 = *((unsigned __int8 *)a2 + 224);
    if ( (((unsigned __int8)v33 ^ (unsigned __int8)(*((_DWORD *)this + 41) >> 7)) & 2) != 0 )
    {
      v3 = 1;
      *((_DWORD *)this + 41) ^= ((unsigned __int16)*((_DWORD *)this + 41) ^ (unsigned __int16)(v33 << 7)) & 0x100;
    }
  }
  return v3;
}
