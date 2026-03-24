/*
 * XREFs of ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002B714
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000282C (VidSchiSubmitPresentHistoryToken.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0007084 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C00154F0 (-VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     memmove @ 0x1C0018C00 (memmove.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 */

void __fastcall VidSchiPostponePresentHistoryToken(
        struct _VIDSCH_CONTEXT *a1,
        struct VIDSCH_HW_QUEUE *a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        struct _VIDSCH_GLOBAL *a6)
{
  struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *v6; // r13
  __int64 v8; // rdi
  char v11; // r9
  bool v12; // zf
  unsigned int v13; // eax
  char v14; // cl
  _QWORD *PoolWithTag; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+24h] [rbp-34h]

  v6 = (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 576);
  v24 = *((_DWORD *)a4 + 29);
  v8 = 0LL;
  v13 = *((_DWORD *)a4 + 144) & 0x3FF;
  v11 = -1;
  v12 = !_BitScanForward(&v13, v13);
  v14 = 0;
  if ( !v12 )
    v11 = v13;
  if ( v11 != -1 )
    v14 = v11;
  v25 = v14;
  PoolWithTag = ExAllocatePoolWithTag(
                  (POOL_TYPE)512,
                  *((_DWORD *)a6 + 36) * ((*((_DWORD *)a6 + 17) << 6) + ((8 * *((_DWORD *)a6 + 17) + 199) & 0xFFFFFFF8))
                + 8 * (*((_DWORD *)a6 + 17) + 80),
                  0x30626956u);
  v19 = WdLogNewEntry5_WdPresentTokenEvent(v18, v17);
  *(_QWORD *)(v19 + 24) = *((_QWORD *)a4 + 13);
  WdLogEvent5_WdPresentTokenEvent(v19);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x348uLL);
    memmove(PoolWithTag + 6, a4, *((unsigned int *)a4 + 135));
    VidSchiAcquirePrivateDataReference(a6, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(PoolWithTag + 78));
    VidSchiReleasePrivateDataReference(a6, v6);
    v20 = PoolWithTag[10];
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 12));
    PoolWithTag[2] = a5.QuadPart;
    PoolWithTag[3] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 198);
    PoolWithTag[4] = a2;
    PoolWithTag[5] = a3;
    if ( a3 )
      ++*((_DWORD *)a3 + 394);
    ++*((_DWORD *)a6 + 199);
    v21 = *(int *)(*((_QWORD *)a6 + v24 + 388) + 216LL * v25 + 172);
    if ( (int)v21 > -1 )
      v8 = *((_QWORD *)a6 + 404) + 152 * v21;
    v22 = v8 + 120;
    v23 = *(_QWORD **)(v22 + 8);
    if ( *v23 != v22 )
      __fastfail(3u);
    *PoolWithTag = v22;
    PoolWithTag[1] = v23;
    *v23 = PoolWithTag;
    *(_QWORD *)(v22 + 8) = PoolWithTag;
  }
}
