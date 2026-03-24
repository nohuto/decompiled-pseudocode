/*
 * XREFs of KeyboardClassDeviceControl @ 0x1C000D110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x1C0002190 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C0002260 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqdL @ 0x1C0002600 (WPP_RECORDER_SF_qqdL.c)
 *     KeyboardCallAllPorts @ 0x1C0004A50 (KeyboardCallAllPorts.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0006C38 (WPP_RECORDER_SF_qqd.c)
 *     WPP_RECORDER_SF_qqdd @ 0x1C0006D88 (WPP_RECORDER_SF_qqdd.c)
 */

__int64 __fastcall KeyboardClassDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r14
  struct _IO_REMOVE_LOCK *v7; // r15
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // esi
  IRP *v13; // rdx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // rax
  NTSTATUS v21; // eax
  unsigned int *PoolWithTag; // rax
  unsigned int *v23; // r14
  unsigned int v24; // edi
  PDRIVER_CONTROL DeviceRoutine; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 RemlockSize; // [rsp+20h] [rbp-58h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 4LL);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(v2 + 184);
  v7 = (struct _IO_REMOVE_LOCK *)(v5 + 32);
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), (PVOID)v2, File, 1u, 0x20u);
  v11 = v8;
  if ( v8 < 0 )
  {
    *(_DWORD *)(v2 + 48) = v8;
    *(_QWORD *)(v2 + 56) = 0LL;
    IofCompleteRequest((PIRP)v2, 0);
    return v11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, 4u, 0x14u, RemlockSize);
  v12 = *(_DWORD *)(v6 + 24);
  switch ( v12 )
  {
    case 0xB01A8u:
    case 0xB0193u:
LABEL_9:
      if ( *(_BYTE *)(v5 + 64) && v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
      {
        ++*(_BYTE *)(v2 + 67);
        v13 = (IRP *)v2;
        *(_QWORD *)(v2 + 184) += 72LL;
LABEL_12:
        v14 = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 16), v13);
        goto LABEL_13;
      }
      goto LABEL_39;
    case 0xB0008u:
      if ( *(_DWORD *)(v6 + 16) < 4u )
      {
        v14 = -1073741789;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqLd(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            (__int64)&WPP_RECORDER_INITIALIZED,
            0x15u,
            RemlockSize);
        goto LABEL_41;
      }
      *(_DWORD *)(v5 + 156) = **(_DWORD **)(v2 + 24);
      goto LABEL_26;
    case 0xB0004u:
LABEL_26:
      if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
        v4 = 1;
      goto LABEL_28;
  }
  if ( v12 > 0xB0194 )
  {
    if ( v12 > 0xB1000 )
    {
      if ( v12 != 724996 )
      {
        if ( v12 == 2703680 || v12 == 2703684 )
          goto LABEL_9;
LABEL_39:
        v14 = -1073741808;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqdL(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v9,
            (__int64)&WPP_RECORDER_INITIALIZED,
            v10,
            RemlockSize);
        goto LABEL_41;
      }
    }
    else if ( v12 != 724992 )
    {
      v9 = 0x1C0000000uLL;
      switch ( v12 )
      {
        case 0xB0197u:
        case 0xB0198u:
        case 0xB019Au:
        case 0xB019Cu:
        case 0xB019Eu:
        case 0xB01A0u:
        case 0xB01A4u:
        case 0xB01BAu:
        case 0xB01BEu:
        case 0xB01C2u:
        case 0xB01E2u:
        case 0xB0268u:
          goto LABEL_9;
        case 0xB0200u:
          break;
        default:
          goto LABEL_39;
      }
    }
  }
  else
  {
    if ( v12 >= 0xB0190 )
      goto LABEL_9;
    if ( v12 != 720896 && v12 != 720928 && v12 != 720960 && v12 != 721024 )
      goto LABEL_39;
  }
LABEL_28:
  v18 = *(_DWORD *)(v6 + 16);
  if ( v18 )
  {
    if ( v18 < 2 )
    {
      v14 = -1073741789;
      goto LABEL_41;
    }
    v19 = **(unsigned __int16 **)(v2 + 24);
  }
  else
  {
    v19 = 0LL;
  }
  if ( *(_QWORD *)v5 == *(_QWORD *)(v5 + 8) )
  {
    if ( v5 != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      v4 = 0;
      goto LABEL_34;
    }
    ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v19 )
      goto LABEL_65;
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) )
    {
      if ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v19 + 16)
        || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v19 + 19) )
      {
        v19 = 0LL;
      }
      if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v19 )
      {
LABEL_65:
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        v14 = -1073741811;
        goto LABEL_41;
      }
      while ( !*((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v19 + 16)
           || *((_BYTE *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v19 + 19) )
      {
        v19 = (unsigned int)(v19 + 1);
        if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) <= (unsigned int)v19 )
          goto LABEL_65;
      }
    }
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) > (unsigned int)v19 )
    {
      _mm_lfence();
      v5 = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v19 + 1);
      *(_QWORD *)(v6 + 48) = *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 3 * v19);
      ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
LABEL_34:
      v20 = *(_QWORD *)(v2 + 184);
      v13 = (IRP *)v2;
      *(_OWORD *)(v20 - 72) = *(_OWORD *)v20;
      *(_OWORD *)(v20 - 56) = *(_OWORD *)(v20 + 16);
      *(_OWORD *)(v20 - 40) = *(_OWORD *)(v20 + 32);
      *(_QWORD *)(v20 - 24) = *(_QWORD *)(v20 + 48);
      *(_BYTE *)(v20 - 69) = 0;
      *(_BYTE *)(*(_QWORD *)(v2 + 184) - 72LL) = 15;
      if ( v4 )
      {
        v21 = IoAcquireRemoveLockEx(v7, (PVOID)v2, File, 1u, 0x20u);
        if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqd((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, 4u, 0x16u, RemlockSize);
        ExAcquireFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                        (POOL_TYPE)512,
                                        24LL * LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) + 8,
                                        0x4364624Bu);
        v23 = PoolWithTag;
        if ( PoolWithTag )
        {
          v24 = 0;
          for ( *(_QWORD *)PoolWithTag = LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
                v24 < LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext);
                ++v24 )
          {
            DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
            v26 = 3LL * v24;
            *(_OWORD *)&v23[2 * v26 + 2] = *(_OWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 24 * v24);
            *(_QWORD *)&v23[2 * v26 + 6] = *((_QWORD *)DeviceRoutine + 3 * v24 + 2);
            if ( LOBYTE(v23[6 * v24 + 6])
              && !HIBYTE(v23[6 * v24 + 6])
              && IoAcquireRemoveLockEx(
                   (PIO_REMOVE_LOCK)(*(_QWORD *)&v23[6 * v24 + 4] + 32LL),
                   (PVOID)v2,
                   File,
                   1u,
                   0x20u) < 0
              && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqdd((__int64)WPP_GLOBAL_Control->DeviceExtension, v27, v28, v29, RemlockSize);
            }
          }
          v14 = KeyboardCallAllPorts(a1, (IRP *)v2, v23);
        }
        else
        {
          v14 = -1073741670;
          *(_QWORD *)(v2 + 56) = 0LL;
          *(_DWORD *)(v2 + 48) = -1073741670;
          IofCompleteRequest((PIRP)v2, 0);
        }
        ExReleaseFastMutex((PFAST_MUTEX)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    goto LABEL_65;
  }
  v14 = -1073741637;
LABEL_41:
  *(_DWORD *)(v2 + 48) = v14;
  *(_QWORD *)(v2 + 56) = 0LL;
  IofCompleteRequest((PIRP)v2, 0);
LABEL_13:
  IoReleaseRemoveLockEx(v7, (PVOID)v2, 0x20u);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqLd((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, v15, 0x19u, RemlockSize);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v16) = 5;
        WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v16, 4LL);
      }
    }
  }
  return v14;
}
