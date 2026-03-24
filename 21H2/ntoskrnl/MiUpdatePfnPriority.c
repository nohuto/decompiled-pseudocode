/*
 * XREFs of MiUpdatePfnPriority @ 0x140270DA4
 * Callers:
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiUpdatePrefetchPriority @ 0x14026E760 (MiUpdatePrefetchPriority.c)
 *     NtLockVirtualMemory @ 0x140270060 (NtLockVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1402FB620 (MiPfPutPagesInTransition.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x1405366CC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiRelinkStandbyPage @ 0x140271FD8 (MiRelinkStandbyPage.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiUpdatePfnPriority(__int64 a1)
{
  char v1; // bl
  unsigned int PfnPriority; // eax
  __int64 v3; // rcx
  int v4; // r8d
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
    if ( v6 >= PfnPriority || v4 && (PfnPriority <= 5 || !(unsigned int)MI_PFN_IS_PROTO(v3)) )
    {
      v9 = *(_BYTE *)(v3 + 34) & 7;
      if ( v9 == 2 )
      {
        if ( v7
          || (*(_DWORD *)(v3 + 16) & 0x400LL) != 0
          || !(unsigned int)MiIsPteInStore(
                              *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL)),
                              *(_QWORD *)(v3 + 16)) )
        {
          MiRelinkStandbyPage(v5);
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
