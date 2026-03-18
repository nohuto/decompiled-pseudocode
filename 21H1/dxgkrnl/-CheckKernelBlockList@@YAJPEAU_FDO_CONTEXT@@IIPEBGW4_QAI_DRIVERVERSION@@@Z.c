/*
 * XREFs of ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01792CC
 * Callers:
 *     DxgkInitializeBlockList @ 0x1C0178AA4 (DxgkInitializeBlockList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     wcscmp_0 @ 0x1C0026548 (wcscmp_0.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0178C50 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C0187168 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     DxgkFreeUnicodeString @ 0x1C0188EC0 (DxgkFreeUnicodeString.c)
 */

__int64 __fastcall CheckKernelBlockList(
        struct _FDO_CONTEXT *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  int BlockListStrings; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  int v10; // edi
  struct _UNICODE_STRING *v12; // r14
  unsigned int v13; // esi
  unsigned __int16 v14; // ax
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  const wchar_t *v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // esi
  unsigned __int16 v21; // ax
  unsigned __int64 v22; // r12
  __int64 v23; // r13
  unsigned __int64 v24; // rax
  const wchar_t *v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // esi
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // r12
  __int64 v30; // r13
  unsigned __int64 v31; // rax
  const wchar_t *v32; // rcx
  __int64 v33; // rdi
  unsigned int v34; // esi
  unsigned __int16 v35; // ax
  unsigned __int64 v36; // r12
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  const wchar_t *v39; // rcx
  __int64 v40; // rdi
  unsigned int v41; // esi
  unsigned __int16 v42; // ax
  unsigned __int64 v43; // r12
  __int64 v44; // r13
  unsigned __int64 v45; // rax
  const wchar_t *v46; // rcx
  __int64 v47; // rdi
  struct _UNICODE_STRING *v48; // rbx
  __int64 v49; // rsi
  __int64 v50; // rax
  unsigned int v51[4]; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v52; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING v53; // [rsp+60h] [rbp-A0h] BYREF

  v51[0] = 0;
  BlockListStrings = FindBlockListStrings(
                       L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\BlockList\\Kernel",
                       a2,
                       a3,
                       a4,
                       a5,
                       v51,
                       &v53);
  v9 = v51[0];
  v10 = BlockListStrings;
  if ( v51[0] >= 0x14 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v50 + 24) = 720LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( (_DWORD)v9 )
  {
    v12 = &v53;
    *(_QWORD *)v51 = v9;
    do
    {
      v13 = 0;
      v14 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v52 = *(__m128i *)v12;
      v15 = v14;
      if ( v14 )
      {
        v16 = v52.m128i_i64[1];
        v17 = 0LL;
        do
        {
          v18 = (const wchar_t *)(v17 + v16);
          v19 = -1LL;
          do
            ++v19;
          while ( v18[v19] );
          if ( !(_DWORD)v19 )
            break;
          if ( !wcscmp_0(v18, L"GPU_PV_ALL") )
          {
            *((_DWORD *)a1 + 1474) |= 0x80u;
            break;
          }
          v13 += v19 + 1;
          v17 = 2LL * v13;
        }
        while ( v17 < v15 );
      }
      v20 = 0;
      v21 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v52 = *(__m128i *)v12;
      v22 = v21;
      if ( v21 )
      {
        v23 = v52.m128i_i64[1];
        v24 = 0LL;
        do
        {
          v25 = (const wchar_t *)(v24 + v23);
          v26 = -1LL;
          do
            ++v26;
          while ( v25[v26] );
          if ( !(_DWORD)v26 )
            break;
          if ( !wcscmp_0(v25, L"GPU_PV_HIGH_SECURITY") )
          {
            *((_DWORD *)a1 + 1474) |= 0x200u;
            break;
          }
          v20 += v26 + 1;
          v24 = 2LL * v20;
        }
        while ( v24 < v22 );
      }
      v27 = 0;
      v28 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v52 = *(__m128i *)v12;
      v29 = v28;
      if ( v28 )
      {
        v30 = v52.m128i_i64[1];
        v31 = 0LL;
        do
        {
          v32 = (const wchar_t *)(v31 + v30);
          v33 = -1LL;
          do
            ++v33;
          while ( v32[v33] );
          if ( !(_DWORD)v33 )
            break;
          if ( !wcscmp_0(v32, L"GPU_P_ALL") )
          {
            *((_DWORD *)a1 + 1474) |= 0x100u;
            break;
          }
          v27 += v33 + 1;
          v31 = 2LL * v27;
        }
        while ( v31 < v29 );
      }
      v34 = 0;
      v35 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v52 = *(__m128i *)v12;
      v36 = v35;
      if ( v35 )
      {
        v37 = v52.m128i_i64[1];
        v38 = 0LL;
        do
        {
          v39 = (const wchar_t *)(v38 + v37);
          v40 = -1LL;
          do
            ++v40;
          while ( v39[v40] );
          if ( !(_DWORD)v40 )
            break;
          if ( !wcscmp_0(v39, L"DISABLE_MPO") )
          {
            *((_DWORD *)a1 + 1474) |= 0x400u;
            break;
          }
          v34 += v40 + 1;
          v38 = 2LL * v34;
        }
        while ( v38 < v36 );
      }
      v41 = 0;
      v42 = _mm_cvtsi128_si32(*(__m128i *)v12);
      v52 = *(__m128i *)v12;
      v43 = v42;
      if ( v42 )
      {
        v44 = v52.m128i_i64[1];
        v45 = 0LL;
        do
        {
          v46 = (const wchar_t *)(v45 + v44);
          v47 = -1LL;
          do
            ++v47;
          while ( v46[v47] );
          if ( !(_DWORD)v47 )
            break;
          if ( !wcscmp_0(v46, L"DISABLE_HWSCH") )
          {
            *((_DWORD *)a1 + 1474) |= 0x800u;
            break;
          }
          v41 += v47 + 1;
          v45 = 2LL * v41;
        }
        while ( v45 < v43 );
      }
      ++v12;
      --*(_QWORD *)v51;
    }
    while ( *(_QWORD *)v51 );
    v51[0] = 0;
    v10 = ConvertStringsToOneMultiString(&v53, v9, (unsigned __int16 **)a1 + 738, v51);
    if ( v10 >= 0 )
      *((_DWORD *)a1 + 1478) = 2 * v51[0];
    if ( v10 == -1073741637 )
      *((_BYTE *)a1 + 5916) = 1;
    v48 = &v53;
    v49 = v9;
    do
    {
      DxgkFreeUnicodeString(v48++);
      --v49;
    }
    while ( v49 );
  }
  return (unsigned int)v10;
}
