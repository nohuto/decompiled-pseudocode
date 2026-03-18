/*
 * XREFs of ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x180079CF8
 * Callers:
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA?AW4ParallelModePolicy@@XZ @ 0x18003D58C (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBA-AW4ParallelModePolicy@@XZ.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x18003DEC4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18003F73C (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180069990 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800D9B2C (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180184E40 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180185E54 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180186560 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 *     SendRemotingMetaData @ 0x1801C3304 (SendRemotingMetaData.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x1801F42B0 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180213CDC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

struct IMonitorTarget *__fastcall CRenderTargetManager::GetPrimaryMonitorTarget(CRenderTargetManager *this)
{
  volatile signed __int32 **v1; // rbx
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rax
  int v5; // r14d
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  int v9; // eax
  int v10; // esi
  BOOL v11; // eax
  char v12; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v16; // [rsp+88h] [rbp+28h] BYREF

  v1 = (volatile signed __int32 **)*((_QWORD *)this + 1);
  v2 = 0LL;
  if ( v1 == *((volatile signed __int32 ***)this + 2) )
    return (struct IMonitorTarget *)v2;
  v3 = *v1;
  v16 = 0LL;
  v4 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v3 + 40LL))(
           v3,
           &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
           &v16);
    if ( v5 < 0 )
    {
      v6 = 0LL;
      v16 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v16 = v3;
    v5 = 0;
  }
  if ( *((int *)v3 + 2) >= 0 )
    goto LABEL_7;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = IsKernelDebuggerPresent();
      Response = 63;
      v10 = v9;
      if ( !v9 )
      {
        v11 = IsDebuggerPresent();
        v12 = Response;
        if ( v11 )
          v12 = 103;
        LOBYTE(Response) = v12;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_180288730,
        word_180288730,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        25);
      if ( v10 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response <= 98 )
        break;
      if ( (char)Response == 103 )
        goto LABEL_7;
      if ( (char)Response == 105 )
        goto LABEL_37;
      if ( (char)Response != 112 )
      {
        if ( (char)Response != 116 )
          goto LABEL_36;
        goto LABEL_34;
      }
LABEL_35:
      CurrentProcess = GetCurrentProcess();
      TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_36:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
    if ( (char)Response == 98 || (char)Response == 66 )
      break;
    if ( (char)Response == 71 )
      goto LABEL_7;
    if ( (char)Response != 73 )
    {
      if ( (char)Response != 80 )
      {
        if ( (char)Response != 84 )
          goto LABEL_36;
LABEL_34:
        CurrentThread = GetCurrentThread();
        TerminateThread(CurrentThread, 0xC0000001);
        goto LABEL_36;
      }
      goto LABEL_35;
    }
LABEL_37:
    DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
  }
  __debugbreak();
LABEL_7:
  _InterlockedIncrement(v3 + 2);
  v6 = v16;
LABEL_8:
  if ( v5 >= 0 )
    v2 = v6;
  if ( v6 )
  {
    v7 = (__int64)v6 + *(int *)(*((_QWORD *)v6 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (struct IMonitorTarget *)v2;
}
