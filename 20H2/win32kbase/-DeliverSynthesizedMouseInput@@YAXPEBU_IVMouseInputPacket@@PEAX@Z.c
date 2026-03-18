/*
 * XREFs of ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01AE8D8
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B2FB0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01A8F30 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 */

void __fastcall DeliverSynthesizedMouseInput(const struct _IVMouseInputPacket *a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  int v7; // edx
  struct InputVirtualization::RootSynthesizedMouseList *v8; // rdi
  _WORD *v9; // rcx
  __int64 v10; // r8
  _WORD *v11; // rdx
  __int16 v12; // ax
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rsi
  struct InputVirtualization::RootSynthesizedMouseList **v14; // rax

  v2 = *((unsigned int *)a1 + 8);
  v4 = *((_QWORD *)a1 + 3);
  v6 = Win32AllocPool(28 * (int)v2 + 36LL, 0x736D5649u);
  v8 = (struct InputVirtualization::RootSynthesizedMouseList *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = a2;
    *(_DWORD *)(v6 + 32) = v2;
    *(_QWORD *)(v6 + 24) = *((_QWORD *)a1 + 6);
    if ( (_DWORD)v2 )
    {
      v9 = (_WORD *)(v4 + 8);
      v10 = v2;
      v11 = (_WORD *)(v6 + 40);
      do
      {
        *(v11 - 2) = *(v9 - 4);
        *(v11 - 1) = *(v9 - 2);
        v12 = *v9;
        v9 += 18;
        *v11 = v12;
        v11 += 14;
        *(v11 - 13) = *(v9 - 16);
        *((_DWORD *)v11 - 6) = *((_DWORD *)v9 - 7);
        *((_DWORD *)v11 - 5) = *((_DWORD *)v9 - 6);
        *((_DWORD *)v11 - 4) = *((_DWORD *)v9 - 5);
        *((_DWORD *)v11 - 3) = *((_DWORD *)v9 - 4);
        *((_DWORD *)v11 - 2) = *((_DWORD *)v9 - 3);
        --v10;
      }
      while ( v10 );
    }
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    CPushLock::AcquireLockExclusive((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
    v14 = (struct InputVirtualization::RootSynthesizedMouseList **)*((_QWORD *)Instance + 1);
    if ( *v14 != Instance )
      __fastfail(3u);
    *(_QWORD *)v8 = Instance;
    *((_QWORD *)v8 + 1) = v14;
    *v14 = v8;
    *((_QWORD *)Instance + 1) = v8;
    KeSetEvent(gpevtSynthesizedContainerMouseInput, 1, 0);
    CPushLock::ReleaseLock((struct InputVirtualization::RootSynthesizedMouseList *)((char *)Instance + 16));
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v7,
      12,
      126,
      (__int64)&WPP_2ccd359dbff93ea23c150f58e4d81fa3_Traceguids);
  }
}
