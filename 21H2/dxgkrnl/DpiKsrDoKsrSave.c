/*
 * XREFs of DpiKsrDoKsrSave @ 0x1C0393EE0
 * Callers:
 *     DpiSriovDetach @ 0x1C038C560 (DpiSriovDetach.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C03930F0 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 *     DpSaveMemoryForHotUpdateCB @ 0x1C0393B60 (DpSaveMemoryForHotUpdateCB.c)
 */

char DpiKsrDoKsrSave()
{
  struct _MDL *v0; // rdi
  int v1; // eax
  PMDL PagesForMdl; // rax
  __int64 v3; // rdx
  _DWORD *MappedSystemVa; // rsi
  int updated; // eax
  __int128 v7; // [rsp+50h] [rbp-9h] BYREF
  PVOID BaseAddress[2]; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+70h] [rbp+17h]
  _OWORD v10[3]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+A8h] [rbp+4Fh]

  v7 = 0LL;
  v9 = 0LL;
  v0 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v7);
  if ( (int)v9 >= 0 )
  {
    v1 = DWORD2(v7);
    if ( DWORD2(v7) )
    {
      DWORD2(v7) += 29;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, (v1 + 4124) & 0xFFFFF000, MmCached, 0x24u);
      v0 = PagesForMdl;
      if ( !PagesForMdl
        || ((PagesForMdl->MdlFlags & 5) == 0
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = PagesForMdl->MappedSystemVa),
            (BaseAddress[0] = MappedSystemVa) == 0LL) )
      {
        v3 = -1073741670LL;
LABEL_12:
        WdLogSingleEntry1(2LL, v3);
        goto LABEL_13;
      }
      MappedSystemVa[1] = DWORD1(v7);
      *MappedSystemVa = DWORD2(v7);
      DWORD1(v7) = 0;
      BaseAddress[1] = (char *)MappedSystemVa + 29;
      BaseAddress[0] = (char *)MappedSystemVa + 29;
      DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, &v7);
      if ( __PAIR64__(DWORD1(v7), DWORD2(v7)) == *(_QWORD *)MappedSystemVa )
      {
        v10[1] = (unsigned __int64)v0;
        v10[0] = 0LL;
        v11 = 0LL;
        v10[2] = 0LL;
        updated = DpSaveMemoryForHotUpdateCB(0LL, (int *)v10);
        if ( updated < 0 )
        {
          v3 = updated;
          goto LABEL_12;
        }
      }
    }
  }
LABEL_13:
  if ( BaseAddress[0] )
    MmUnmapLockedPages(BaseAddress[0], v0);
  if ( (int)v9 >= 0 )
  {
    LOBYTE(word_1C0130998) = 1;
    *((_BYTE *)DXGGLOBAL_GetGlobal() + 305220) = 1;
  }
  else
  {
    MmFreePagesFromMdl(v0);
    ExFreePoolWithTag(v0, 0);
  }
  return DxgkLogInternalTriageEvent(
           0LL,
           65538,
           -1,
           (__int64)L"KSR Save routine has completed with status %1",
           (int)v9,
           0LL,
           0LL,
           0LL,
           0LL);
}
