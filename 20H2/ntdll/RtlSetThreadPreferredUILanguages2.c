/*
 * XREFs of RtlSetThreadPreferredUILanguages2 @ 0x18003EC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC90 (RtlSetThreadPreferredUILanguages.c)
 *     RtlpFreeTebLanguageList @ 0x18006EE8C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x180078500 (RtlpMuiRegDupLanguageList.c)
 *     RtlpDupTebLanguageList @ 0x1800F06F8 (RtlpDupTebLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  PVOID Heap; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  ULONG NumberOfLanguages[10]; // [rsp+20h] [rbp-28h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp+20h] BYREF

  v7 = a1;
  if ( !a4 )
    return RtlSetThreadPreferredUILanguages(a1, a2, a3);
  *a4 = 0LL;
  ReturnLength = 0;
  RtlGetThreadPreferredUILanguages(a1 | 0x30, NumberOfLanguages, 0LL, &ReturnLength);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( !Heap )
    return 3221225495LL;
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    v10 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->PreferredLanguages);
    *(_QWORD *)Heap = v10;
    if ( !v10 )
      goto LABEL_19;
    *(_DWORD *)(v10 + 40) &= ~0x40u;
  }
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    v11 = RtlpMuiRegDupLanguageList(NtCurrentTeb()->MergedPrefLanguages);
    *((_QWORD *)Heap + 1) = v11;
    if ( !v11 )
      goto LABEL_19;
    *(_DWORD *)(v11 + 40) &= ~0x40u;
  }
  if ( !NtCurrentTeb()->UserPrefLanguages )
    goto LABEL_14;
  v12 = RtlpDupTebLanguageList(NtCurrentTeb()->UserPrefLanguages);
  *((_QWORD *)Heap + 2) = v12;
  if ( v12 )
  {
    *(_DWORD *)(*(_QWORD *)v12 + 40LL) &= ~0x40u;
LABEL_14:
    *((_DWORD *)Heap + 6) = NtCurrentTeb()->ClientId.UniqueThread;
    v13 = RtlSetThreadPreferredUILanguages(v7, a2, a3);
    if ( v13 >= 0 )
    {
      *a4 = Heap;
      Heap = 0LL;
    }
    goto LABEL_16;
  }
LABEL_19:
  v13 = -1073741801;
LABEL_16:
  if ( Heap )
  {
    RtlpMuiRegFreeLanguageList(*(PVOID *)Heap);
    RtlpMuiRegFreeLanguageList(*((PVOID *)Heap + 1));
    RtlpFreeTebLanguageList(*((_QWORD *)Heap + 2));
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  }
  return (unsigned int)v13;
}
