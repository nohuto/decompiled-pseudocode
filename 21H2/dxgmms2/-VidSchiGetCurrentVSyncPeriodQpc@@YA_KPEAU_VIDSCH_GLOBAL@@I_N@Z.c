/*
 * XREFs of ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0004B64
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0003BC0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C0011E34 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     ?VidSchiSelectDriverPresentDuration@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@IIIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@@Z @ 0x1C0012374 (-VidSchiSelectDriverPresentDuration@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_V.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C00356F4 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0046144 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 * Callees:
 *     ?GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z @ 0x1C001D4D8 (-GetSmoothenedDurationQpc@VIDSCH_VSYNC_SMOOTHER@@QEAAJIPEAI@Z.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C003260C (McTemplateK0qxxx_EtwWriteTransfer.c)
 */

unsigned __int64 __fastcall VidSchiGetCurrentVSyncPeriodQpc(struct _VIDSCH_GLOBAL *a1, unsigned int a2, char a3)
{
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned int v16; // [rsp+78h] [rbp+38h] BYREF

  v5 = *((_QWORD *)a1 + a2 + 400);
  v6 = *(_DWORD *)(v5 + 2944);
  if ( v6 == -1 )
    return *(_QWORD *)(v5 + 82744);
  if ( !v6 || v6 == *(_DWORD *)(v5 + 82728) )
  {
    v13 = *(_DWORD *)(v5 + 82728);
    if ( v13 )
    {
      v14 = *((_QWORD *)a1 + 328);
      if ( is_mul_ok(v13, v14) )
        LODWORD(v9) = v13 * v14 / 0x989680;
      else
        LODWORD(v9) = v14 * (v13 / 0x989680) + v14 * (v13 % 0x989680uLL) / 0x989680;
    }
    else
    {
      LODWORD(v9) = *(_DWORD *)(v5 + 82744);
    }
    v16 = 0;
    if ( !a3
      || !*((_BYTE *)a1 + 6610)
      || (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44152), v9, &v16) < 0 )
    {
      return (unsigned int)v9;
    }
    if ( (byte_1C006E944 & 1) != 0 )
    {
      v15 = *((_QWORD *)a1 + 328);
      v10 = *(unsigned int *)(v5 + 2944);
      v11 = v10 * v15;
      if ( !is_mul_ok(v10, v15) )
      {
        v11 = v15 * (v10 / 0x989680);
        v10 = v15 * (v10 % 0x989680);
        v12 = v11 + v10 / 0x989680;
        goto LABEL_26;
      }
LABEL_25:
      v12 = v11 / 0x989680;
      goto LABEL_26;
    }
LABEL_27:
    LODWORD(v9) = v16;
    return (unsigned int)v9;
  }
  v8 = *((_QWORD *)a1 + 328);
  if ( is_mul_ok(*(unsigned int *)(v5 + 2944), v8) )
    v9 = *(unsigned int *)(v5 + 2944) * v8 / 0x989680;
  else
    v9 = v8 * (*(unsigned int *)(v5 + 2944) % 0x989680uLL) / 0x989680
       + v8 * (*(unsigned int *)(v5 + 2944) / 0x989680uLL);
  v16 = 0;
  if ( !a3
    || !*((_BYTE *)a1 + 6610)
    || (int)VIDSCH_VSYNC_SMOOTHER::GetSmoothenedDurationQpc(*(VIDSCH_VSYNC_SMOOTHER **)(v5 + 44152), v9, &v16) < 0 )
  {
    return (unsigned int)v9;
  }
  if ( (byte_1C006E944 & 1) == 0 )
    goto LABEL_27;
  v11 = *(unsigned int *)(v5 + 2944) * *((_QWORD *)a1 + 328);
  if ( is_mul_ok(*(unsigned int *)(v5 + 2944), *((_QWORD *)a1 + 328)) )
    goto LABEL_25;
  v11 = 10000000 * (*(unsigned int *)(v5 + 2944) / 0x989680uLL);
  v10 = *((_QWORD *)a1 + 328) * (*(unsigned int *)(v5 + 2944) / 0x989680uLL);
  LOBYTE(v12) = v10 + *((_QWORD *)a1 + 328) * (*(unsigned int *)(v5 + 2944) % 0x989680uLL) / 0x989680;
LABEL_26:
  LODWORD(v9) = v16;
  McTemplateK0qxxx_EtwWriteTransfer(
    v11,
    (unsigned int)&EventVSyncSmoothenedPeriod,
    v10,
    a2,
    v16,
    *(_QWORD *)(v5 + 82744),
    v12);
  return (unsigned int)v9;
}
