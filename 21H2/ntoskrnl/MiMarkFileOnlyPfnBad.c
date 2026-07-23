/*
 * XREFs of MiMarkFileOnlyPfnBad @ 0x140541948
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052FB70 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiPersistPage @ 0x140541ADC (MiPersistPage.c)
 *     MiSetPfnRemovalRequested @ 0x14054F668 (MiSetPfnRemovalRequested.c)
 */

__int64 __fastcall MiMarkFileOnlyPfnBad(ULONG_PTR a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // esi
  unsigned __int8 v6; // di
  ULONG_PTR v7; // rcx
  char v8; // al
  char v10; // al

  v4 = a2;
  v6 = MiLockPageInline(a1, a2, a3, a4);
  if ( (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0
    && MiIsPfnFileOnly(a1)
    && MI_PFN_IS_PROTO(a1)
    && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    if ( (v4 & 0x10000000) != 0 )
    {
      v8 = *(_BYTE *)(a1 + 35);
      if ( v8 >= 0 )
        *(_BYTE *)(a1 + 35) = v8 | 0x80;
    }
    if ( (*(_BYTE *)(a1 + 35) & 0x40) == 0 )
    {
      if ( *(_WORD *)(a1 + 32) || (*(_BYTE *)(a1 + 34) & 7u) - 2 > 1 )
      {
        MiSetPfnRemovalRequested(v7, 1LL);
        if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
          MiTrimSharedPage(a1, v6, v4);
      }
      else
      {
        MiUnlinkPageFromList(v7, 0);
        v10 = *(_BYTE *)(a1 + 34);
        if ( (v10 & 0x10) != 0 )
        {
          if ( *(char *)(a1 + 35) >= 0 )
          {
            MiPersistPage((__int64)(a1 + 0x58000000000LL) / 48);
            v10 = *(_BYTE *)(a1 + 34);
          }
          *(_BYTE *)(a1 + 34) = v10 & 0xEF;
        }
        MiSetPfnRemovalRequested(a1, 1LL);
        MiInsertPageInList(a1, 4u);
      }
      v7 = a1;
    }
    MiUnlockPage(v7, v6);
    return 259LL;
  }
  else
  {
    MiUnlockPage(a1, v6);
    return 3221226548LL;
  }
}
