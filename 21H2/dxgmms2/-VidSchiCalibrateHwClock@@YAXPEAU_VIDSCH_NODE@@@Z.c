/*
 * XREFs of ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001E908
 * Callers:
 *     ?SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C003E344 (-SubmitPagingToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C003E5D0 (-SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QU.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0041394 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0042A90 (VidSchiCreateNodeSchedulingLog.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VidSchiCalibrateHwClock(struct _VIDSCH_NODE *a1)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]
  unsigned __int64 v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]

  v2 = *((_QWORD *)a1 + 3);
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 && !*((_QWORD *)a1 + 1398) )
  {
    v3 = *((unsigned __int16 *)a1 + 2);
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 1;
    v4 = *(_QWORD *)(v2 + 632);
    v5 = v4 + 8 * v3;
    if ( (unsigned int)v3 < *(_DWORD *)(v2 + 704) )
      v4 += 8 * v3;
    else
      v5 = *(_QWORD *)(v2 + 632);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))DxgCoreInterface[61])(
      *(_QWORD *)(v2 + 8),
      *(unsigned __int16 *)(*(_QWORD *)v4 + 8LL),
      *(unsigned __int16 *)(*(_QWORD *)v5 + 6LL),
      &v8);
    v6 = *((_QWORD *)a1 + 1397);
    if ( v6 )
    {
      if ( v6 + 1000 <= v10 )
      {
        v7 = v9;
        if ( *((_QWORD *)a1 + 1399) + 1000LL <= v9 )
        {
          *((_QWORD *)a1 + 1398) = v10;
          *((_QWORD *)a1 + 1400) = v7;
        }
      }
    }
    else
    {
      *((_QWORD *)a1 + 1397) = v10;
      *((_QWORD *)a1 + 1399) = v9;
    }
  }
}
