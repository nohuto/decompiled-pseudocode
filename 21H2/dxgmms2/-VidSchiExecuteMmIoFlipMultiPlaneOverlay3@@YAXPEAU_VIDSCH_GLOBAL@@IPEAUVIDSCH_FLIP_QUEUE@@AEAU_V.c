/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@AEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAW4_VIDSCH_FLIP_STATUS@@K@Z @ 0x1C0011BF4
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000DBA0 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1C0011338 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0012684 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C00126D4 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001BF78 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEBXW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 */

void __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlay3(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_CALL_EXECUTE_FLIP *a4,
        enum _VIDSCH_FLIP_STATUS *a5,
        unsigned int a6)
{
  __int64 v8; // r14
  char *v9; // rsi
  unsigned __int64 v11; // rax
  char v12; // r13
  int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r9d
  int v21; // eax
  int v22; // edx
  __int64 v23; // r9
  _BYTE v24[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-BCh]
  struct _VIDSCH_GLOBAL *v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+54h] [rbp-ACh]
  struct VIDSCH_FLIP_QUEUE *v29; // [rsp+58h] [rbp-A8h]
  char v30; // [rsp+60h] [rbp-A0h]
  int v31; // [rsp+61h] [rbp-9Fh]
  __int16 v32; // [rsp+65h] [rbp-9Bh]
  char v33; // [rsp+67h] [rbp-99h]
  __int64 v34[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35[2]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  __int64 v38[10]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = a2;
  v25 = a6;
  v9 = (char *)a3 + 1376 * a6;
  memset(v38, 0, sizeof(v38));
  v37 = 0LL;
  v11 = *((_QWORD *)v9 + 148);
  *(_OWORD *)v34 = 0LL;
  *(_OWORD *)v35 = 0LL;
  v36 = 0LL;
  if ( v11 && v11 < *((_QWORD *)a3 + 12) )
  {
    WdLogSingleEntry5(0LL, 281LL, 36864LL, v8, *((int *)a3 + 21), a6);
    __debugbreak();
    goto LABEL_21;
  }
  *((_QWORD *)a3 + 12) = v11;
  v12 = *(_DWORD *)a5 == 11;
  VidSchiSetupMmIoFlipMultiPlaneOverlay3(
    a1,
    (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v9 + 120),
    v8,
    a4,
    v12,
    (__int64)v38,
    (__int64)v34,
    (__int64)v35);
  v13 = 0;
  if ( !*((_DWORD *)a4 + 5) )
  {
LABEL_21:
    *((_DWORD *)a4 + 530) = v13;
    WdLogSingleEntry2(4LL, v8, (**((_DWORD **)v9 + 162) >> 10) & 0x3FF);
    goto LABEL_10;
  }
  if ( (*((_DWORD *)v9 + 314) & 0x1000) != 0 )
  {
    *((_DWORD *)a4 + 530) = 0;
    WdLogSingleEntry0(4LL);
    goto LABEL_10;
  }
  v14 = *((unsigned int *)a1 + 8);
  v24[0] = 0;
  v15 = DpSynchronizeExecution(*((_QWORD *)a1 + 3), VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3, a4, v14, v24);
  v16 = 0;
  if ( v15 < 0 )
  {
    v17 = WdLogSingleEntry5(0LL, 281LL, 11LL, v15, a4, *((_QWORD *)a1 + 2));
    __debugbreak();
  }
  else
  {
    v17 = *((_DWORD *)a4 + 530);
    v18 = -1073741267;
    if ( v17 != -1073741267 )
      goto LABEL_7;
    if ( *((_DWORD *)a4 + 4) )
      goto LABEL_15;
  }
  if ( *((_BYTE *)a1 + 59) != (_BYTE)v16 )
  {
    *((_DWORD *)a4 + 4) = 2;
    goto LABEL_15;
  }
  *((_DWORD *)a4 + 4) = 1;
LABEL_7:
  if ( v17 == -2147483631 )
    return;
  if ( v17 != v18 )
  {
LABEL_9:
    VidSchiUpdateFlipTelemetryStats(
      *(struct _VIDSCH_PROCESS **)(*((_QWORD *)v9 + 145) + 40LL),
      a4,
      *((struct _VIDSCH_PRESENT_INFO **)a1 + v8 + 400));
LABEL_10:
    VidSchiComputeFlipEntryStatusAfterFlip(v19, a4, a5);
    v20 = *(_DWORD *)a5;
    if ( *(_DWORD *)a5 == 11 )
    {
      v23 = *((_QWORD *)a1 + v8 + 400);
      *((_QWORD *)a4 + 266) = *(_QWORD *)(v23 + 44120);
      *((_DWORD *)a4 + 531) = *(_DWORD *)(v23 + 44104);
      v20 = *(_DWORD *)a5;
    }
    VidSchiLogMmIoFlipMultiPlaneOverlay3(
      (__int64)a1,
      (_DWORD *)v9 + 30,
      (LARGE_INTEGER *)a4,
      v20,
      *((_DWORD *)v9 + 298),
      *((_QWORD *)a3 + 13));
    return;
  }
LABEL_15:
  v21 = *((_DWORD *)a4 + 4);
  if ( (v21 & 2) != 0 )
    return;
  if ( (v21 & 1) == 0 )
    goto LABEL_9;
  v31 = v16;
  v32 = v16;
  v33 = v16;
  v26 = a1;
  v28 = v8;
  v29 = a3;
  v27 = v25;
  v30 = v12;
  VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(&v26);
  if ( (*((_DWORD *)v9 + 314) & 0x10) != 0 )
    v22 = ((unsigned __int16)**((_DWORD **)v9 + 162) | (unsigned __int16)(**((_DWORD **)v9 + 162) >> 10)) & 0x3FF;
  else
    v22 = (1 << *((_DWORD *)a1 + 38)) - 1;
  *(_DWORD *)(*((_QWORD *)a1 + v8 + 400) + 3004LL) |= v22;
}
