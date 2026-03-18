/*
 * XREFs of MiUpdatePfnPriority @ 0x1402D3D44
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     NtLockVirtualMemory @ 0x1402D3000 (NtLockVirtualMemory.c)
 *     MiUpdatePrefetchPriority @ 0x140301150 (MiUpdatePrefetchPriority.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140534BCC (MiDeprioritizeVirtualAddresses.c)
 * Callees:
 *     MiIsPteInStore @ 0x14023AE70 (MiIsPteInStore.c)
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
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
                              *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL)),
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
