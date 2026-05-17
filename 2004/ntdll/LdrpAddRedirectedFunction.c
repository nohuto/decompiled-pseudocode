/*
 * XREFs of LdrpAddRedirectedFunction @ 0x1800D4B44
 * Callers:
 *     LdrpBuildImportRedirection @ 0x1800D4E74 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x180016530 (RtlInitAnsiStringEx.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x18001A360 (LdrpPreprocessDllName.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpHashUnicodeString @ 0x18005FAA0 (LdrpHashUnicodeString.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     LdrpCompareRedirectedFunction @ 0x1800D510C (LdrpCompareRedirectedFunction.c)
 *     LdrpHashAsciizString @ 0x1800D557C (LdrpHashAsciizString.c)
 */

__int64 __fastcall LdrpAddRedirectedFunction(__int64 a1, int a2)
{
  const char *v3; // rdx
  int inited; // esi
  __int64 v6; // r8
  unsigned __int64 v7; // xmm0_8
  unsigned __int64 v8; // rdx
  _WORD *i; // rdi
  int v10; // eax
  unsigned __int64 v11; // rbx
  int v12; // r14d
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 Heap; // rax
  unsigned __int64 v16; // r14
  size_t v17; // r8
  __int64 v18; // rbx
  bool v19; // r8
  int v20; // edi
  __int64 v21; // rax
  int v23; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v25; // [rsp+40h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  __m128i v27; // [rsp+68h] [rbp-A0h] BYREF
  _WORD v28[128]; // [rsp+78h] [rbp-90h] BYREF
  int v29; // [rsp+178h] [rbp+70h] BYREF
  _WORD *v30; // [rsp+180h] [rbp+78h]
  _WORD v31[128]; // [rsp+188h] [rbp+80h] BYREF

  v27.m128i_i32[0] = 0x1000000;
  v27.m128i_i64[1] = (__int64)v28;
  v3 = *(const char **)a1;
  v30 = v31;
  v29 = 0x1000000;
  v28[0] = 0;
  v31[0] = 0;
  inited = RtlInitAnsiStringEx(&DestinationString, v3);
  if ( inited >= 0 )
    inited = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v29, &DestinationString);
  if ( inited >= 0 )
  {
    v23 = 0;
    inited = LdrpPreprocessDllName((unsigned __int16 *)&v29, (unsigned __int16 *)&v27, 0, &v23);
    if ( inited >= 0 )
    {
      v6 = 2LL;
      v25 = v27;
      v7 = _mm_srli_si128(v27, 8).m128i_u64[0];
      v8 = v7;
      i = (_WORD *)v7;
      if ( (v23 & 0x20) == 0 )
      {
        for ( i = (_WORD *)(v7 + v27.m128i_u16[0] - 2LL); (unsigned __int64)i >= v7; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx((__int64)&v25, (__int64)i);
      }
      *((_QWORD *)&v24 + 1) = *(_QWORD *)(a1 + 8);
      LODWORD(v24) = LdrpHashAsciizString(*((_QWORD *)&v24 + 1), v8, v6);
      v10 = LdrpHashUnicodeString((unsigned __int16 *)&v25);
      v11 = LdrpRedirectionTree;
      DWORD1(v24) = v10;
      if ( (qword_18016B350 & 1) != 0 )
      {
        if ( LdrpRedirectionTree )
          v11 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
        else
          v11 = 0LL;
      }
      v12 = qword_18016B350 & 1;
      if ( !v11 )
        goto LABEL_31;
      do
      {
        v13 = LdrpCompareRedirectedFunction(&v24, v11);
        if ( v13 >= 0 )
        {
          if ( v13 <= 0 )
            break;
          v14 = *(_QWORD *)(v11 + 8);
        }
        else
        {
          v14 = *(_QWORD *)v11;
        }
        if ( v12 && v14 )
          v11 ^= v14;
        else
          v11 = v14;
      }
      while ( v11 );
      if ( v11 && !LdrpRedirectionByFunctionCalloutFunc )
      {
        inited = -1073739509;
      }
      else
      {
LABEL_31:
        Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v25.m128i_u16[0] + 74LL);
        v16 = Heap;
        if ( Heap )
        {
          *(_OWORD *)(Heap + 24) = v24;
          *(__m128i *)(Heap + 40) = v25;
          v17 = *(unsigned __int16 *)(Heap + 40);
          *(_QWORD *)(Heap + 56) = *(_QWORD *)(a1 + 16);
          *(_DWORD *)(Heap + 64) = a2;
          *(_QWORD *)(Heap + 48) = Heap + 72;
          v17 += 2LL;
          *(_WORD *)(Heap + 42) = v17;
          memmove((void *)(Heap + 72), i, v17);
          v18 = LdrpRedirectionTree;
          if ( (qword_18016B350 & 1) != 0 && LdrpRedirectionTree )
            v18 = (unsigned __int64)&LdrpRedirectionTree ^ LdrpRedirectionTree;
          v19 = 0;
          v20 = qword_18016B350 & 1;
          if ( v18 )
          {
            while ( 1 )
            {
              if ( (int)LdrpCompareRedirectedFunction(v16 + 24, v18) < 0 )
              {
                v21 = *(_QWORD *)v18;
                if ( v20 )
                {
                  if ( !v21 )
                    goto LABEL_48;
                  v21 ^= v18;
                }
                if ( !v21 )
                {
LABEL_48:
                  v19 = 0;
                  break;
                }
              }
              else
              {
                v21 = *(_QWORD *)(v18 + 8);
                if ( v20 )
                {
                  if ( !v21 )
                    goto LABEL_42;
                  v21 ^= v18;
                }
                if ( !v21 )
                {
LABEL_42:
                  v19 = 1;
                  break;
                }
              }
              v18 = v21;
            }
          }
          RtlRbInsertNodeEx((unsigned __int64 *)&LdrpRedirectionTree, v18, v19, v16);
        }
        else
        {
          inited = -1073741801;
        }
      }
    }
  }
  if ( v28 != (_WORD *)v27.m128i_i64[1] )
    NtdllpFreeStringRoutine(v27.m128i_i64[1]);
  v27.m128i_i64[1] = (__int64)v28;
  v27.m128i_i32[0] = 0x1000000;
  v28[0] = 0;
  if ( v31 != v30 )
    NtdllpFreeStringRoutine((__int64)v30);
  return (unsigned int)inited;
}
