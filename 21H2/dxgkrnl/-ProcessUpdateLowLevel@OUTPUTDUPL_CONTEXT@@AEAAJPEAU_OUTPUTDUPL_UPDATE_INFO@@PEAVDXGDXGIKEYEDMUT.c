/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C03283C4
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0327D4C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E8B48 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0320C50 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0325F94 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C03266FC (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0328E3C (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r13d
  __int64 v10; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // r8
  LARGE_INTEGER v13; // r9
  int v14; // ecx
  __int64 v15; // rcx
  struct _D3DKMT_PRESENT_RGNS *v16; // rcx
  struct _D3DKMT_PRESENT_RGNS *v17; // r12
  __int64 v18; // r9
  __int64 v20; // rbx
  __int64 v21; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  const wchar_t *v26; // r9
  int v27; // eax
  __int128 v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rbx
  void *Buffer; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  struct _D3DKMT_PRESENT_RGNS v34; // [rsp+50h] [rbp-39h] BYREF
  int *v35; // [rsp+70h] [rbp-19h]
  union _LARGE_INTEGER v36; // [rsp+78h] [rbp-11h] BYREF
  struct DXGDXGIKEYEDMUTEX *v37; // [rsp+80h] [rbp-9h]
  struct tagRECT v38; // [rsp+88h] [rbp-1h] BYREF

  v6 = 0;
  v37 = a3;
  v35 = a6;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v14 = *(_DWORD *)a2;
  v36 = PerformanceCounter;
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v28 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v28;
      if ( *(_DWORD *)a2 == 2 )
      {
        v29 = *((_QWORD *)a2 + 3);
        v30 = (unsigned int)(*(_DWORD *)(v29 + 8) * *(_DWORD *)(v29 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((const void ***)a4 + 11),
                   *(_DWORD *)(v29 + 8) * *(_DWORD *)(v29 + 12),
                   0,
                   v13.QuadPart);
        v32 = *((_QWORD *)a2 + 3);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(v32 + 24), (unsigned int)v30);
          v33 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v33;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v33 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v33 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          WdLogSingleEntry2(6LL, v30, *(unsigned int *)(v32 + 16));
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Failed to allocate 0x%I64x bytes for new pointer shape on source 0x%I64x",
            v30,
            *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL),
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  v15 = *((unsigned int *)this + 10);
  memset(&v34, 0, sizeof(v34));
  v38 = 0LL;
  if ( (_DWORD)v15 != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    WdLogSingleEntry2(4LL, *((int *)this + 70), v15);
    LODWORD(v10) = GetAllocationSize(
                     *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                     *((unsigned int *)a2 + 7),
                     &v38,
                     v18);
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry1(2LL, 1691LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find source surface size",
        1691LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    *(_QWORD *)&v34.DirtyRectCount = 1LL;
    *((_DWORD *)this + 70) = 0;
    *(_OWORD *)&v34.MoveRectCount = 0LL;
    v34.pDirtyRects = &v38;
    v17 = &v34;
  }
  else
  {
    v16 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    v17 = v16;
    if ( !v16->DirtyRectCount && !v16->MoveRectCount )
      v6 = 1;
  }
  if ( !v37 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      WdLogSingleEntry1(1LL, 1780LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pFrameInfo->PresentUpdateStatus != PRODUCER_INFO_PRESENT_UPDATE_READY",
        1780LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v17,
                            &v36,
                            *((_DWORD *)a2 + 6) & 1,
                            v35) )
      {
        v20 = 1792LL;
        WdLogSingleEntry1(2LL, 1792LL);
        goto LABEL_18;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v10) = 259;
    goto LABEL_35;
  }
  if ( !v6
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v17,
                        &v36,
                        *((_DWORD *)a2 + 6) & 1,
                        v35) )
  {
    v20 = 1724LL;
    WdLogSingleEntry1(2LL, 1724LL);
LABEL_18:
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to combine present regions to metadata",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  if ( *((_DWORD *)a4 + 4) != 1 )
  {
    if ( !v6 )
    {
      v27 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
              this,
              a2,
              *((_DWORD *)a2 + 7),
              *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
              v17);
      v10 = v27;
      if ( v27 < 0 )
      {
        WdLogSingleEntry1(2LL, v27);
        v26 = L"Failed to copy pixel data from new present rgns, Status 0x%I64x";
        goto LABEL_22;
      }
LABEL_23:
      *((_DWORD *)a4 + 4) = 2;
      return (unsigned int)v10;
    }
LABEL_35:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  v21 = *((_QWORD *)a4 + 1);
  *(&v34.DirtyRectCount + 1) = 0;
  *(&v34.MoveRectCount + 1) = 0;
  v34.DirtyRectCount = *(_DWORD *)(v21 + 24);
  DirtyRectData = DDAMetaData::GetDirtyRectData((const void ***)v21, v34.DirtyRectCount, v12.QuadPart, v13.QuadPart);
  v23 = *((_QWORD *)a4 + 1);
  v34.pDirtyRects = DirtyRectData;
  v34.MoveRectCount = *(_DWORD *)(v23 + 44);
  v24 = *((unsigned int *)this + 11);
  v34.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v23 + 48);
  v25 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *((_DWORD *)a2 + 7),
          *(_DWORD *)(*((_QWORD *)this + v24 + 6) + 92LL),
          &v34);
  v10 = v25;
  if ( v25 >= 0 )
    goto LABEL_23;
  WdLogSingleEntry1(2LL, v25);
  v26 = L"Failed to copy pixel data from accumulated + new present rgns, Status 0x%I64x";
LABEL_22:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v26, v10, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v10;
}
