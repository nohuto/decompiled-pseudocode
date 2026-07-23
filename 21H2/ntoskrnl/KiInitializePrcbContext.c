/*
 * XREFs of KiInitializePrcbContext @ 0x1409A03A0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408BA7D8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140A4E568 (KeStartAllProcessors.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateIndependentPages @ 0x140762BB0 (MmAllocateIndependentPages.c)
 */

__int64 __fastcall KiInitializePrcbContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // ebp
  void *IndependentPages; // rax
  void *v7; // rsi
  int v8; // eax
  _DWORD *v9; // r8
  int v10; // eax

  v3 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
    v4 = (unsigned int)(KeXStateLength + KiXSaveAreaLength + 885);
  else
    v4 = 0LL;
  if ( (_DWORD)v4 )
  {
    v5 = v4;
    IndependentPages = (void *)MmAllocateIndependentPages(v4, a2);
    v7 = IndependentPages;
    if ( !IndependentPages )
      return 3221225626LL;
    memset(IndependentPages, 0, v5);
    *(_QWORD *)(a1 + 34256) = ((unsigned __int64)v7 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  }
  if ( v3 )
  {
    v8 = KeXStateLength - 512;
    v9 = (_DWORD *)((*(_QWORD *)(a1 + 34256) + (unsigned int)KiXSaveAreaLength + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    v9[313] = KeXStateLength - 512;
    v9[310] = -1232;
    v9[311] = 1232;
    v9[312] = (((_DWORD)v9 + 1319) & 0xFFFFFFC0) - ((_DWORD)v9 + 1232);
    v9[308] = -1232;
    v9[309] = (((_DWORD)v9 + 1319) & 0xFFFFFFC0) - (_DWORD)v9 + v8;
    *(_QWORD *)(a1 + 34240) = v9;
  }
  *(_DWORD *)(a1 + 34248) = 1048587;
  if ( v3 )
  {
    v10 = *(_DWORD *)(a1 + 34248);
    if ( !*(_DWORD *)(a1 + 36) )
      v10 = 1048651;
    *(_DWORD *)(a1 + 34248) = v10;
  }
  return 0LL;
}
