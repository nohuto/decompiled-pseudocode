/*
 * XREFs of ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00B36F8
 * Callers:
 *     VidMmPurgeAllSegments @ 0x1C0022B20 (VidMmPurgeAllSegments.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087998 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z @ 0x1C00C0C04 (-AddData@VIDMM_PURGE_TELEMETRY@@QEAAX_K0@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C00C2B88 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllSegments(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rax
  char v7; // r14
  int v8; // edi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // ebx
  ULONG TimeIncrement; // eax
  _QWORD v16[12]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v17[2]; // [rsp+80h] [rbp+7h] BYREF

  v4 = (unsigned int)a2;
  if ( a1[10040] )
  {
    v7 = 0;
    v8 = 0;
    if ( (a2 & 0x26) != 0 )
    {
      v8 = MEMORY[0xFFFFF78000000320];
      v7 = 1;
    }
    *(_OWORD *)v17 = 0LL;
    memset(v16, 0, 0x58uLL);
    v16[7] = v17;
    v16[0] = -4294967194LL;
    LODWORD(v16[5]) = v4;
    v16[6] = a3;
    v9 = VIDMM_GLOBAL::QueueSystemCommandAndWait((VIDMM_GLOBAL *)a1, (struct _VIDMM_SYSTEM_COMMAND *)v16, 1);
    v12 = v9;
    if ( v9 < 0 )
    {
      v13 = WdLogNewEntry5_WdCriticalError(v11, v10);
      *(_QWORD *)(v13 + 24) = 270LL;
      *(_QWORD *)(v13 + 32) = 23LL;
      *(_QWORD *)(v13 + 40) = v12;
      *(_OWORD *)(v13 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    if ( v7 )
    {
      if ( v17[0] )
      {
        v14 = MEMORY[0xFFFFF78000000320];
        TimeIncrement = KeQueryTimeIncrement();
        VIDMM_PURGE_TELEMETRY::AddData((VIDMM_PURGE_TELEMETRY *)(a1 + 10302), v17[0], (v14 - v8) * TimeIncrement);
      }
    }
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(0);
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2);
    v6[3] = a1;
    v6[4] = v4;
    v6[5] = a3;
    WdLogEvent5_WdWarning(v6);
  }
}
