/*
 * XREFs of _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164
 * Callers:
 *     _RtlpGetDefaultsSubjectContext@36 @ 0x4B2D8FCB (_RtlpGetDefaultsSubjectContext@36.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
 *     _RtlSidDominatesForTrust@12 @ 0x4B2D9290 (_RtlSidDominatesForTrust@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpGetDefaultTrustSubjectContext(HANDLE TokenHandle, _DWORD *a2)
{
  PSID *v3; // ebx
  NTSTATUS v4; // edi
  ULONG v5; // ecx
  _DWORD *Heap; // eax
  void *v7; // esi
  SIZE_T v9; // [esp-4h] [ebp-BCh]
  PVOID HeapHandle; // [esp+10h] [ebp-A8h]
  ULONG TokenInformationLength; // [esp+14h] [ebp-A4h] BYREF
  ULONG ReturnLength; // [esp+18h] [ebp-A0h] BYREF
  BOOLEAN DominatesTrust; // [esp+1Fh] [ebp-99h] BYREF
  PSID Sid2[18]; // [esp+20h] [ebp-98h] BYREF
  PSID TokenInformation[19]; // [esp+68h] [ebp-50h] BYREF

  ReturnLength = 72;
  v3 = TokenInformation;
  TokenInformationLength = 72;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  DominatesTrust = 0;
  v4 = ZwQueryInformationToken((HANDLE)0xFFFFFFFC, 0x29u, TokenInformation, 0x48u, &ReturnLength);
  if ( v4 < 0 )
    return v4;
  if ( !TokenHandle )
    goto LABEL_14;
  v4 = ZwQueryInformationToken(TokenHandle, 0x29u, Sid2, TokenInformationLength, &TokenInformationLength);
  if ( v4 < 0 )
    return v4;
  v4 = RtlSidDominatesForTrust(TokenInformation[0], Sid2[0], &DominatesTrust);
  if ( v4 < 0 )
    return v4;
  if ( DominatesTrust )
  {
    v5 = TokenInformationLength;
    v3 = Sid2;
    ReturnLength = TokenInformationLength;
  }
  else
  {
LABEL_14:
    v5 = ReturnLength;
  }
  LODWORD(v9) = v5;
  Heap = RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v9);
  v7 = Heap;
  if ( !Heap )
    return -1073741801;
  if ( !*v3 )
  {
    *Heap = 0;
LABEL_10:
    *a2 = v7;
    v7 = 0;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  v4 = RtlCopySid(ReturnLength - 4, Heap + 1, *v3);
  if ( v4 >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v7 )
    RtlFreeHeap(HeapHandle, 0, v7);
  return v4;
}
