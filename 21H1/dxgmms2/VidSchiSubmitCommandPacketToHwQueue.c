/*
 * XREFs of VidSchiSubmitCommandPacketToHwQueue @ 0x1C003C194
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007440 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSubmitCommandToHwQueue @ 0x1C003A130 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C003A480 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitWaitToHwQueue @ 0x1C003AA50 (VidSchSubmitWaitToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00D2480 (VidSchEnqueueCpuEvent.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D4DFC (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000AC50 (VidSchiProfilePerformanceTick.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C00115E0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C001217C (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037C98 (-VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007EA50 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007ECA0 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  VIDMM_DEVICE *v9; // rcx
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v11; // [rsp+60h] [rbp-18h]

  v1 = (_QWORD *)*((_QWORD *)a1 + 12);
  v3 = v1[5];
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v5);
  v11 = 0;
  v10[0] = v6 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v10);
  v7 = *((_DWORD *)a1 + 12);
  if ( v7 )
  {
    if ( v7 == 8 )
      v1[9] = *((_QWORD *)a1 + 36);
  }
  else
  {
    v1[3 * *((unsigned int *)a1 + 190) + 9] = *((_QWORD *)a1 + 94);
    ++*(_QWORD *)(v5 + 1592);
  }
  *((_QWORD *)a1 + 14) = ++v1[17];
  VidSchiProfilePerformanceTick(4LL, v6, v4, 0LL, 0LL, (__int64)a1, 0LL, 0LL);
  VidSchiInsertCommandToHwQueue(a1);
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
  v8 = *(_QWORD *)(v5 + 8);
  if ( v8 )
  {
    v9 = *(VIDMM_DEVICE **)(v8 + 760);
    if ( v9 )
      VIDMM_DEVICE::EnsureSchedulable(v9, 1);
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v10);
}
