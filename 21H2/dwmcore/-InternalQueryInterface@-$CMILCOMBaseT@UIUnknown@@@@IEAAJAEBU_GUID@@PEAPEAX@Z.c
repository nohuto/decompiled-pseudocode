/*
 * XREFs of ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180048940 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ @ 0x180080CC8 (-UpdateCompositorClockBoost@CRenderTargetManager@@AEAAXXZ.c)
 *     ?QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B2E90 (-QueryInterface@CVisualGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F4FF4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ @ 0x1800F5E78 (-UpdateMPOCaps@CRenderTargetManager@@IEAAJXZ.c)
 *     ?NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ @ 0x1800F62A0 (-NotifyTargetsOfOcclusionChange@CRenderTargetManager@@AEAAJXZ.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F7B94 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180115080 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x18019A380 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029FEB0 (-QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILCOMBaseT<IUnknown>::InternalQueryInterface(
        volatile signed __int32 *a1,
        _QWORD *a2,
        volatile signed __int32 **a3)
{
  int v5; // esi
  __int64 v6; // rax
  int v8; // eax
  int v9; // edi
  BOOL v10; // eax
  char v11; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+90h] [rbp+18h] BYREF

  v5 = -2147024809;
  if ( a3 )
  {
    v6 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v6 )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 40LL))(a1);
      if ( v5 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v5;
      }
    }
    else
    {
      *a3 = a1;
      v5 = 0;
    }
    if ( *((int *)a1 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v8 = IsKernelDebuggerPresent();
        Response = 63;
        v9 = v8;
        if ( !v8 )
        {
          v10 = IsDebuggerPresent();
          v11 = Response;
          if ( v10 )
            v11 = 103;
          LOBYTE(Response) = v11;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_18032C468,
          word_18032C468,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v9 )
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
        if ( (char)Response > 98 )
        {
          if ( (char)Response == 103 )
            break;
          if ( (char)Response == 105 )
            goto LABEL_35;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_34;
            goto LABEL_32;
          }
LABEL_33:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_34:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        }
        else
        {
          if ( (char)Response == 98 || (char)Response == 66 )
          {
            __debugbreak();
            break;
          }
          if ( (char)Response == 71 )
            break;
          if ( (char)Response != 73 )
          {
            if ( (char)Response != 80 )
            {
              if ( (char)Response != 84 )
                goto LABEL_34;
LABEL_32:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_34;
            }
            goto LABEL_33;
          }
LABEL_35:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement(a1 + 2);
  }
  return (unsigned int)v5;
}
