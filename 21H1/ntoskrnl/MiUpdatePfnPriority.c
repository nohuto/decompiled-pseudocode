/*
 * XREFs of MiUpdatePfnPriority @ 0x1402A91E0
 * Callers:
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     NtLockVirtualMemory @ 0x1402A5D80 (NtLockVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiUpdatePrefetchPriority @ 0x1403354A0 (MiUpdatePrefetchPriority.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140530BAC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiRelinkStandbyPage @ 0x14023F234 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  ULONG_PTR v5; // r9
  unsigned int v6; // r10d
  unsigned int v7; // edx
  char v8; // r11
  char v9; // al

  v1 = -1;
  PfnPriority = MiGetPfnPriority(a1);
  v7 = PfnPriority;
  if ( v6 != PfnPriority )
  {
    v8 = 0;
    if ( v6 >= PfnPriority || (_DWORD)v4 && (PfnPriority <= 5 || !(unsigned int)MI_PFN_IS_PROTO(v3, PfnPriority, v4)) )
    {
      v9 = *(_BYTE *)(v3 + 34) & 7;
      if ( v9 == 2 )
      {
        if ( v7
          || (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
          || !(unsigned int)MiIsPteInStore(
                              *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL)),
                              *(_QWORD *)(v3 + 16)) )
        {
          MiRelinkStandbyPage(v5, v6);
        }
      }
      else if ( v9 != 6 || (*(_QWORD *)(v3 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= 1 || v6 >= v7 )
      {
        *(_BYTE *)(v5 + 35) ^= (*(_BYTE *)(v5 + 35) ^ v6) & 7;
        if ( v7 < 5 )
        {
          v1 = -1;
          if ( v6 == 5 )
            return v8;
        }
        else if ( v6 < 5 )
        {
          return 7;
        }
      }
    }
  }
  return v1;
}
