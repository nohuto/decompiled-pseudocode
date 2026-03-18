/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00AA370
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C001B5A0 (VidMmPurgeAllSegments.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00A6BA8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00AA464 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 *     ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x1C00E4B0C (-AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(_DWORD *a1, unsigned int a2, __int64 a3)
{
  char v6; // bp
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  ULONG TimeIncrement; // eax
  _QWORD v11[12]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v12[2]; // [rsp+90h] [rbp-48h] BYREF

  if ( a1[10042] )
  {
    v6 = 0;
    v7 = 0;
    if ( (a2 & 0x26) != 0 )
    {
      v7 = MEMORY[0xFFFFF78000000320];
      v6 = 1;
    }
    *(_OWORD *)v12 = 0LL;
    memset(v11, 0, 0x58uLL);
    v11[7] = v12;
    v11[0] = -4294967194LL;
    LODWORD(v11[5]) = a2;
    v11[6] = a3;
    v8 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v11, 1);
    if ( v8 < 0 )
      WdLogSingleEntry5(0LL, 270LL, 23LL, v8, 0LL, 0LL);
    if ( v6 )
    {
      if ( v12[0] )
      {
        v9 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_PURGE_TELEMETRY::AddData((VIDMM_PURGE_TELEMETRY *)(a1 + 10304), v12[0], (v9 - v7) * TimeIncrement);
      }
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    WdLogSingleEntry3(3LL, a1, a2, a3);
  }
}
