/*
 * XREFs of LdrpResolveDllName @ 0x18005F174
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 *     LdrpSearchPath @ 0x18005EE6C (LdrpSearchPath.c)
 *     LdrpAppCompatRedirect @ 0x18005F918 (LdrpAppCompatRedirect.c)
 *     LdrpMapDllFullPath @ 0x18005F9D0 (LdrpMapDllFullPath.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     LdrpGetNtPathFromDosPath @ 0x18005F31C (LdrpGetNtPathFromDosPath.c)
 *     LdrpAllocateUnicodeString @ 0x18005F43C (LdrpAllocateUnicodeString.c)
 *     LdrpGetFullPath @ 0x18005F4AC (LdrpGetFullPath.c)
 *     LdrpFreeUnicodeString @ 0x18005F8E0 (LdrpFreeUnicodeString.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpResolveDllName(__m128i *a1, __m128i *a2, _UNICODE_STRING *a3, _OWORD *a4, __int16 a5)
{
  int FullPath; // eax
  __m128i v10; // xmm0
  int v11; // ebx
  __m128i *v12; // rax
  __int64 v13; // rsi
  const void *v14; // rbp
  int NtPathFromDosPath; // eax
  __m128i v16; // xmm0
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // xmm0_8
  const WCHAR *i; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __m128i Src; // [rsp+30h] [rbp-28h] BYREF

  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1738,
      (unsigned int)"LdrpResolveDllName",
      3,
      (__int64)"DLL name: %wZ\n",
      a1);
  if ( (a5 & 0x200) != 0 )
  {
    v10 = *a1;
    v11 = 0;
  }
  else
  {
    FullPath = LdrpGetFullPath(a1, a2);
    v10 = *a2;
    v11 = FullPath;
  }
  Src = v10;
  if ( v11 >= 0 )
  {
    if ( (a5 & 0x200) != 0 || (v12 = a2 + 1, &a2[1] == (__m128i *)a2->m128i_i64[1]) )
    {
      v13 = Src.m128i_u16[0];
      v14 = (const void *)Src.m128i_i64[1];
      v11 = LdrpAllocateUnicodeString(&Src, Src.m128i_u16[0]);
      if ( v11 >= 0 )
      {
        memmove((void *)Src.m128i_i64[1], v14, v13 + 2);
        Src.m128i_i16[0] = v13;
      }
    }
    else
    {
      a2->m128i_i64[1] = (__int64)v12;
      a2->m128i_i16[1] = 256;
      v12->m128i_i16[0] = 0;
    }
    a2->m128i_i16[0] = 0;
    if ( v11 >= 0 )
    {
      NtPathFromDosPath = LdrpGetNtPathFromDosPath(&Src, a2);
      v11 = NtPathFromDosPath;
      if ( NtPathFromDosPath < 0 )
      {
        v21 = (unsigned int)(NtPathFromDosPath + 1073741809);
        if ( (unsigned int)v21 <= 0x2C && (v22 = 0x1C3000000011LL, _bittest64(&v22, v21))
          || v11 == -2147483632
          || v11 == -1073741661 )
        {
          v11 = -1073741515;
        }
        LdrpFreeUnicodeString(&Src);
      }
      else
      {
        v16 = Src;
        v17 = _mm_cvtsi128_si32(Src);
        *a4 = Src;
        v18 = _mm_srli_si128(v16, 8).m128i_u64[0];
        for ( i = (const WCHAR *)(v17 + v18 - 2); (unsigned __int64)i >= v18; --i )
        {
          if ( *i == 92 || *i == 47 )
          {
            ++i;
            break;
          }
        }
        RtlInitUnicodeStringEx(a3, i);
      }
    }
  }
  if ( (LdrpDebugFlags & 9) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      1849,
      (unsigned int)"LdrpResolveDllName",
      4,
      (__int64)"Status: 0x%08lx\n",
      v11);
  return (unsigned int)v11;
}
