/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180104B6C
 * Callers:
 *     RtlGetUILanguageInfo @ 0x1800EF250 (RtlGetUILanguageInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104D2C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104D2C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByLangId(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        char a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  __int16 v9; // r9
  __int16 i; // dx
  __int16 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 Heap; // rax
  __int64 v16; // rdi
  unsigned int FallbackLanguageInfoByName; // ebx
  int v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h]

  v5 = a3;
  if ( !a1 || !a2 || !a5 )
    return 3221225485LL;
  v9 = 0;
  for ( i = 0; i < 8; i += 2 )
  {
    v11 = (*(_WORD *)(a2 + 8) >> i) & 3;
    if ( v11 == 2 )
    {
      v12 = *(__int16 *)(a2 + 2LL * v9 + 12);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
      if ( *(_WORD *)(28 * v12 + v13 + 4) == (_WORD)v5 )
      {
        *(_OWORD *)a5 = *(_OWORD *)(28 * v12 + v13);
        *(_QWORD *)(a5 + 16) = *(_QWORD *)(28 * v12 + v13 + 16);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(28 * v12 + v13 + 24);
        return 0LL;
      }
    }
    else if ( *(__int16 *)(a2 + 2LL * v9 + 12) != v5 && v11 != 1 )
    {
      *(_OWORD *)a5 = 0LL;
      *(_QWORD *)(a5 + 16) = 0LL;
      *(_DWORD *)(a5 + 24) = 0;
      *(_WORD *)(a5 + 6) = -1;
      *(_WORD *)(a5 + 4) = v5;
      return 0LL;
    }
    ++v9;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
  v16 = Heap;
  if ( !Heap )
    return 3221225495LL;
  if ( a4 && *(__int16 *)(a2 + 6) > 0 && (v19 = Heap, v18 = 11141120, RtlLCIDToCultureName(v5, (__int64)&v18)) )
  {
    FallbackLanguageInfoByName = RtlpMuiRegGetFallbackLanguageInfoByName(a1, a2, v19, 0LL, a5);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
    return FallbackLanguageInfoByName;
  }
  else
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
    return 3221225524LL;
  }
}
