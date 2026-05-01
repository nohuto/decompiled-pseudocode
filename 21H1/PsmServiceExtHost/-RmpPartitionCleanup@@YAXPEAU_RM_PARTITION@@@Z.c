/*
 * XREFs of ?RmpPartitionCleanup@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800705E0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012FA0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800263B0 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180031B10 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003E500 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z @ 0x180071D0C (-RmpPolicyReleaseScratchBuffers@@YAXPEAU_RM_POLICY_WORK_BUFFER@@@Z.c)
 */

void __fastcall RmpPartitionCleanup(struct _RM_PARTITION *a1)
{
  void *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edi
  void **v5; // rsi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v2 = (void *)*((_QWORD *)a1 + 12);
  if ( v2 )
    CloseHandle(v2);
  v3 = *((_QWORD *)a1 + 13);
  if ( v3 )
    TpReleaseTimer(v3);
  v4 = 0;
  v5 = (void **)((char *)a1 + 48);
  do
  {
    v6 = *v5;
    if ( *v5 )
    {
      if ( v4 )
        CloseHandle(v6);
      else
        NtClose(v6);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 6 );
  RmpPolicyReleaseScratchBuffers((struct _RM_PARTITION *)((char *)a1 + 144));
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
    {
      v8 = *((_QWORD *)a1 + 27);
      v13 = 0;
      v9 = v8;
      v12 = 8;
      v11 = &v9;
      tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_18009CDB2, 0LL, 0LL, 3u, &v10);
    }
  }
}
