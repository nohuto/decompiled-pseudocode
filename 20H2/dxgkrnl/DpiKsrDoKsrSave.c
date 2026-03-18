/*
 * XREFs of DpiKsrDoKsrSave @ 0x1C02D17A4
 * Callers:
 *     DpiSriovDetach @ 0x1C02CC0C0 (DpiSriovDetach.c)
 * Callees:
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D0A90 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpSaveMemoryForHotUpdateCB @ 0x1C02D1470 (DpSaveMemoryForHotUpdateCB.c)
 */

void DpiKsrDoKsrSave()
{
  struct _MDL *v0; // rdi
  int v1; // eax
  PMDL PagesForMdl; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _DWORD *MappedSystemVa; // rsi
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int128 v11; // [rsp+30h] [rbp-9h] BYREF
  PVOID BaseAddress[2]; // [rsp+40h] [rbp+7h]
  __int64 v13; // [rsp+50h] [rbp+17h]
  _OWORD v14[3]; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v15; // [rsp+88h] [rbp+4Fh]

  v11 = 0LL;
  v13 = 0LL;
  v0 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v11);
  if ( (int)v13 >= 0 )
  {
    v1 = DWORD2(v11);
    if ( DWORD2(v11) )
    {
      DWORD2(v11) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v1 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v0 = PagesForMdl;
      if ( !PagesForMdl
        || ((PagesForMdl->MdlFlags & 5) == 0
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = PagesForMdl->MappedSystemVa),
            (BaseAddress[0] = MappedSystemVa) == 0LL) )
      {
        v5 = WdLogNewEntry5_WdError(v4, v3);
        *(_QWORD *)(v5 + 24) = -1073741670LL;
LABEL_12:
        WdLogEvent5_WdError(v5);
        goto LABEL_13;
      }
      MappedSystemVa[1] = DWORD1(v11);
      *MappedSystemVa = DWORD2(v11);
      DWORD1(v11) = 0;
      BaseAddress[1] = (char *)MappedSystemVa + 29;
      BaseAddress[0] = (char *)MappedSystemVa + 29;
      DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v11);
      if ( __PAIR64__(DWORD1(v11), DWORD2(v11)) == *(_QWORD *)MappedSystemVa )
      {
        v14[1] = (unsigned __int64)v0;
        v14[0] = 0LL;
        v15 = 0LL;
        v14[2] = 0LL;
        updated = DpSaveMemoryForHotUpdateCB(0LL, (int *)v14);
        v10 = updated;
        if ( updated < 0 )
        {
          v5 = WdLogNewEntry5_WdError(v9, v8);
          *(_QWORD *)(v5 + 24) = v10;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  if ( BaseAddress[0] )
    MmUnmapLockedPages(BaseAddress[0], v0);
  if ( (int)v13 >= 0 )
  {
    LOBYTE(word_1C00B1010) = 1;
  }
  else
  {
    MmFreePagesFromMdl(v0);
    ExFreePoolWithTag(v0, 0);
  }
}
