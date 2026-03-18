/*
 * XREFs of ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C000BC6C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C000BB5C (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C000BD50 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003265C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  unsigned int v6; // ebp
  BOOL v9; // r10d
  int v10; // edi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  v6 = *((unsigned __int16 *)a2 + 1);
  v9 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL) != 0;
  v10 = v9 | 2;
  if ( (v6 & 0x80) == 0 )
    v10 = v9;
  if ( (v10 & 1) == 0 && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
  v11 = *((_QWORD *)a2 + 6);
  v12 = *((unsigned int *)a2 + 4);
  v13 = *((unsigned int *)a2 + 3);
  v14 = *((unsigned int *)a2 + 5);
  if ( (v6 & 1) != 0 )
    CMouseProcessor::GetMouseCoordinateAbsolute(this, v13, v12, v6, a3, a4, v11, v14, v10);
  else
    CMouseProcessor::GetMouseCoordinateRelative(this, v13, v12, a3, a4, v11, v14, v10);
}
