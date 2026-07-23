/*
 * XREFs of _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 */

int __fastcall LdrpInitializeApplicationVerifierPackage(
        unsigned __int16 *a1,
        int a2,
        char a3,
        HANDLE KeyHandle,
        int a5,
        int a6)
{
  __int16 v8; // bx
  int v9; // ecx
  wchar_t *v10; // eax
  int result; // eax
  int v12; // ecx
  PULONG v13; // edx
  ULONG v14; // edi
  NTSTATUS ImageFileKeyOption; // eax
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-10h] BYREF
  _UNICODE_STRING String1; // [esp+18h] [ebp-8h] BYREF

  if ( MEMORY[0x7FFE02EC] )
    goto LABEL_2;
  if ( !a3 )
    goto LABEL_8;
  v8 = *a1;
  v9 = *a1;
  v10 = (wchar_t *)(v9 + *((_DWORD *)a1 + 1));
  if ( *a1 )
  {
    do
    {
      if ( *(v10 - 1) == 92 )
        break;
      --v10;
      v9 -= 2;
    }
    while ( v9 );
  }
  String1.Buffer = v10;
  String1.Length = v8 - v9;
  RtlInitUnicodeString(&DestinationString, L"SPPsvc.exe");
  if ( !RtlCompareUnicodeString(&String1, &DestinationString, 1u) )
  {
LABEL_2:
    *(_DWORD *)(a2 + 104) &= 0xFDFFFEFF;
  }
  else
  {
LABEL_8:
    LdrpShouldCreateStackTraceDb = (*(_DWORD *)(a2 + 104) & 0x2000100) != 0;
    result = AVrfInitializeVerifier(KeyHandle, 0, a5, a6);
    v12 = *(_DWORD *)(a2 + 104);
    if ( result < 0 )
    {
      *(_DWORD *)(a2 + 104) = v12 & 0xFDFFFEFF;
      *RtlpDebugPageHeapTable = 0;
      dword_4B3A373C = 0;
      return result;
    }
    if ( (v12 & 0x2000000) != 0 )
    {
      v13 = RtlpDebugPageHeapTable;
      *(_DWORD *)(a2 + 104) = v12 & 0xFFFF670F;
      LdrpShouldCreateStackTraceDb = 1;
      v14 = *v13;
      *v13 = -1;
      if ( KeyHandle )
      {
        ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, L"PageHeapFlags", 4, v13, 4u, 0);
        v13 = RtlpDebugPageHeapTable;
        if ( ImageFileKeyOption < 0 )
          *RtlpDebugPageHeapTable = -1;
      }
      if ( *v13 == -1 )
        *v13 = v14;
      if ( (((*v13 & 0x400) != 0) & _bittest(&AVrfpVerifierFlags, 0xFu)) != 0 )
      {
        if ( (ShowSnaps & 5) != 0 )
        {
          LdrpLogDbgPrint(
            (int)"minkernel\\ntdll\\ldrinit.c",
            6891,
            (int)"LdrpInitializeApplicationVerifierPackage",
            2,
            "Per-DLL page heap is disabled since fast fill heap is enabled\n");
          v13 = RtlpDebugPageHeapTable;
        }
        *v13 &= ~0x400u;
      }
      dword_4B3A373C = 1;
    }
  }
  return 0;
}
