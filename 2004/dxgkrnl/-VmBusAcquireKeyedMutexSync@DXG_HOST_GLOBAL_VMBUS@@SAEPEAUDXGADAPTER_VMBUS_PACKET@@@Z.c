/*
 * XREFs of ?VmBusAcquireKeyedMutexSync@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023BAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0025A44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_ACQUIREKEY.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00409F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkpAcquireKeyedMutexFromHandle @ 0x1C0238BE4 (DxgkpAcquireKeyedMutexFromHandle.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028F458 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusAcquireKeyedMutexSync(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  union _LARGE_INTEGER *v3; // rbx
  __int64 v4; // rax
  unsigned int *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rdx
  unsigned __int64 *v8; // r14
  union _LARGE_INTEGER *v10; // r9
  __int64 v11; // rdx
  union _LARGE_INTEGER v12; // [rsp+78h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_ACQUIREKEYEDMUTEXSYNC>((__int64)a1);
  v3 = (union _LARGE_INTEGER *)v2;
  if ( !v2 )
    return 0;
  v4 = DxgkpAcquireKeyedMutexFromHandle(*((struct _KTHREAD ***)a1 + 7), *(_DWORD *)(v2 + 24));
  v5 = (unsigned int *)v4;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(v4 + 160) + 24;
  v8 = (unsigned __int64 *)operator new(v6, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v8 )
  {
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v5, v7);
    return 0;
  }
  v12.QuadPart = 0LL;
  v10 = 0LL;
  if ( (v3[7].LowPart & 1) == 0 )
  {
    v10 = &v12;
    v12 = v3[6];
  }
  *(_DWORD *)v8 = DXGKEYEDMUTEX::AcquireSync(
                    v3[3].HighPart,
                    v3[4].QuadPart,
                    v3[5].LowPart,
                    v10,
                    (DXGKEYEDMUTEX *)(v8 + 2),
                    v8 + 3,
                    v5[40],
                    v8 + 1,
                    0);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v8, v6);
  DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v5, v11);
  operator delete[](v8);
  return 1;
}
