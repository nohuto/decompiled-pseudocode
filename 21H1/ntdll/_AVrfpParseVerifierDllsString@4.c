/*
 * XREFs of _AVrfpParseVerifierDllsString@4 @ 0x4B339319
 * Callers:
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 */

int AVrfpParseVerifierDllsString()
{
  UNICODE_STRING *Heap; // edx
  UNICODE_STRING **v1; // eax
  wchar_t *v2; // esi
  wchar_t v3; // ax
  wchar_t v4; // cx
  const wchar_t *v5; // edx
  _UNICODE_STRING *v6; // ebx
  _UNICODE_STRING **v7; // eax
  SIZE_T v9; // [esp-4h] [ebp-18h]
  SIZE_T v10; // [esp-4h] [ebp-18h]
  const WCHAR *SourceString; // [esp+Ch] [ebp-8h]
  PVOID HeapHandle; // [esp+10h] [ebp-4h]

  LODWORD(v9) = 36;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  Heap = (UNICODE_STRING *)RtlAllocateHeap(HeapHandle, 0, v9);
  if ( !Heap )
    return -1073741801;
  memset(Heap, 0, 0x24u);
  Heap[1] = VerifierDllString;
  v1 = (UNICODE_STRING **)dword_4B3A5244;
  if ( *(int **)dword_4B3A5244 != &AVrfpVerifierProvidersList )
LABEL_18:
    __fastfail(3u);
  *(_DWORD *)&Heap->Length = &AVrfpVerifierProvidersList;
  v2 = &AVrfpVerifierDllsString;
  Heap->Buffer = (wchar_t *)v1;
  *v1 = Heap;
  dword_4B3A5244 = (int)Heap;
  if ( AVrfpVerifierDllsString )
  {
    do
    {
      while ( 1 )
      {
        v3 = *v2;
        v4 = *v2;
        if ( *v2 != 32 && v3 != 9 )
          break;
        ++v2;
      }
      v5 = v2;
      SourceString = (const WCHAR *)v2;
      if ( !v3 )
        break;
      do
      {
        if ( v4 == 32 )
          break;
        if ( v4 == 9 )
          break;
        v4 = *++v2;
      }
      while ( *v2 );
      if ( v5 == v2 )
        break;
      *v2 = 0;
      if ( _wcsicmp(v5, L"verifier.dll") )
      {
        LODWORD(v10) = 36;
        v6 = (_UNICODE_STRING *)RtlAllocateHeap(HeapHandle, 0, v10);
        if ( !v6 )
          return -1073741801;
        memset(v6, 0, 0x24u);
        RtlInitUnicodeString(v6 + 1, SourceString);
        v7 = (_UNICODE_STRING **)dword_4B3A5244;
        if ( *(int **)dword_4B3A5244 != &AVrfpVerifierProvidersList )
          goto LABEL_18;
        *(_DWORD *)&v6->Length = &AVrfpVerifierProvidersList;
        v6->Buffer = (wchar_t *)v7;
        *v7 = v6;
        dword_4B3A5244 = (int)v6;
      }
      ++v2;
    }
    while ( *v2 );
  }
  return 0;
}
