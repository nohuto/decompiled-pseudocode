/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002FB2C
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009E50 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0032F18 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BA80 (VidSchiUnwaitMonitoredFences.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0015DF4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiCompleteSignalCommmand @ 0x1C001651C (VidSchiCompleteSignalCommmand.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     memset @ 0x1C00185C0 (memset.c)
 */

_QWORD *__fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(struct HwQueueStagingList *a1, __int64 a2)
{
  __int64 **v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rdx
  _QWORD *result; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  int v12; // eax
  __int64 v13; // r14
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v17; // [rsp+28h] [rbp-D8h]
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+50h] [rbp-B0h]
  _QWORD v20[134]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0;
  v17 = &v16;
  v16 = (__int64)&v16;
  v18[0] = a2 + 3080;
  AcquireSpinLock::Acquire((Acquire *)v18);
  v4 = (__int64 **)(a2 + 3064);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 *)v4 )
      break;
    if ( (__int64 **)v5[1] != v4
      || (v6 = (__int64 *)*v5, *(__int64 **)(*v5 + 8) != v5)
      || (*v4 = v6, v6[1] = (__int64)v4, *v5 = 0LL, v5[1] = 0LL, v7 = v5 + 2, v8 = v17, (__int64 *)*v17 != &v16) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v7[1] = (__int64)v17;
    *v7 = (__int64)&v16;
    *v8 = (__int64)v7;
    --*(_DWORD *)(a2 + 3096);
    v17 = v7;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v18);
  while ( 1 )
  {
    result = (_QWORD *)v16;
    if ( (__int64 *)v16 == &v16 )
      return result;
    if ( *(__int64 **)(v16 + 8) != &v16 )
      goto LABEL_20;
    v10 = *(_QWORD *)v16;
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
      goto LABEL_20;
    v16 = *(_QWORD *)v16;
    *(_QWORD *)(v10 + 8) = &v16;
    v11 = result - 22;
    *result = 0LL;
    result[1] = 0LL;
    v12 = *((_DWORD *)result - 33);
    v13 = *(_QWORD *)(a2 + 240);
    if ( v12 == 2 )
    {
      memset(v20, 0, sizeof(v20));
      v14 = *((_BYTE *)v11 + 27) == 0;
      LODWORD(v20[0]) = 895576406;
      LODWORD(v20[6]) = 5;
      v20[11] = v13;
      if ( v14 )
        v15 = v11[9];
      else
        v15 = *(_QWORD *)(v11[26] + 32LL);
      v20[67] = v15;
      v20[35] = v11;
      HIDWORD(v20[34]) = 1;
      VidSchiCompleteSignalCommmand((__int64)a1, (__int64)v20, 0);
    }
    else if ( (unsigned int)(v12 - 4) <= 1 )
    {
      if ( *(_BYTE *)(v11[26] + 48LL) )
        _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v11, a1, 0);
      else
        VidSchiUnwaitMonitoredFences(a1, a2, 0LL);
    }
  }
}
