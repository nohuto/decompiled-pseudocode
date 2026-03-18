/*
 * XREFs of ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C013D050
 * Callers:
 *     W32pLkmdDataCollectionCallback @ 0x1C013D3A0 (W32pLkmdDataCollectionCallback.c)
 * Callees:
 *     IsFreeSMSSupported @ 0x1C0085288 (IsFreeSMSSupported.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C013CEE4 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C013CFC8 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall _AddWin32TriageDataToDump(struct tagWIN32_TRIAGE_DATA *a1)
{
  void *v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *i; // rdi
  unsigned int v11; // eax
  _QWORD *j; // rdi
  unsigned int v13; // eax
  void **v14; // rdi
  unsigned int v15; // eax
  _QWORD *k; // rdi

  v1 = *(void **)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v3 )
  {
    do
    {
      _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v3);
      v3 = *(_QWORD *)(v3 + 664);
    }
    while ( v3 );
    v1 = *(void **)a1;
  }
  _AddMemoryBlockToLiveTriageDump(a1, v1);
  v4 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 320LL);
  if ( v5 )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v5 + 456));
    _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)(*(_QWORD *)a1 + 320LL) + 464LL));
    v4 = *(_QWORD *)a1;
  }
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(v4 + 360));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 336LL));
  _AddMemoryBlockToLiveTriageDump(a1, *(void **)(*(_QWORD *)a1 + 664LL));
  for ( i = *(_QWORD **)(*(_QWORD *)a1 + 344LL); i; i = (_QWORD *)*i )
  {
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v11 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, i);
  }
  for ( j = *(_QWORD **)(*(_QWORD *)a1 + 352LL); j; j = (_QWORD *)*j )
  {
    v13 = *((_DWORD *)a1 + 4);
    if ( v13 >= 0x3E8 )
      break;
    *((_DWORD *)a1 + 4) = v13 + 1;
    _AddMemoryBlockToLiveTriageDump(a1, j);
  }
  if ( *((_DWORD *)a1 + 4) >= 0x3E8u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    v14 = (void **)gsmsList;
    if ( gsmsList != &gsmsList )
    {
      v15 = *((_DWORD *)a1 + 2);
      do
      {
        if ( v15 >= 0x3E8 )
          break;
        _AddMemoryBlockToLiveTriageDump(a1, v14);
        _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v14[4]);
        _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v14[5]);
        _AddThreadInfoToLiveTriageDump(a1, (struct tagTHREADINFO *)v14[8]);
        _AddMemoryBlockToLiveTriageDump(a1, v14[14]);
        ++*((_DWORD *)a1 + 2);
        v14 = (void **)*v14;
        v15 = *((_DWORD *)a1 + 2);
      }
      while ( v14 != &gsmsList );
    }
  }
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gsmsList & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiRit & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gptiForeground & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpai & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gbNonServiceSession & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpresUser & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpvwplHungRedraw & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpsi & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gSharedInfo & 0xFFFFFFFFFFFFF000uLL));
  _AddMemoryBlockToLiveTriageDump(a1, (void *)((unsigned __int64)&gpWin32kDriverObject & 0xFFFFFFFFFFFFF000uLL));
  _AddThreadInfoToLiveTriageDump(a1, gptiRit);
  _AddThreadInfoToLiveTriageDump(a1, gptiForeground);
  _AddMemoryBlockToLiveTriageDump(a1, gpresUser);
  _AddMemoryBlockToLiveTriageDump(a1, gpvwplHungRedraw);
  _AddMemoryBlockToLiveTriageDump(a1, gpsi);
  _AddMemoryBlockToLiveTriageDump(a1, gpWin32kDriverObject);
  for ( k = gpai; k; k = (_QWORD *)*k )
    _AddMemoryBlockToLiveTriageDump(a1, k);
  return 0LL;
}
