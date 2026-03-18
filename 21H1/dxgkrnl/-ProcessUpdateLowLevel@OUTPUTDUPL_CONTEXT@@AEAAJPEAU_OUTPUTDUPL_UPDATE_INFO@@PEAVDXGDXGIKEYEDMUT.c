/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C029DB38
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C029D5A4 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C015A11C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C0295268 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C029BD60 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C029C350 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C029E3F8 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  __int64 v6; // rsi
  int v10; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  __int64 v13; // rcx
  struct _D3DKMT_PRESENT_RGNS *v14; // r12
  int DirtyRectCount; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int64 v33; // rax
  __int64 v34; // rbx
  void *Buffer; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  struct _D3DKMT_PRESENT_RGNS v42; // [rsp+30h] [rbp-50h] BYREF
  int *v43; // [rsp+50h] [rbp-30h]
  union _LARGE_INTEGER v44; // [rsp+58h] [rbp-28h] BYREF
  struct DXGDXGIKEYEDMUTEX *v45; // [rsp+60h] [rbp-20h]
  struct tagRECT v46; // [rsp+68h] [rbp-18h] BYREF

  LODWORD(v6) = 0;
  v45 = a3;
  v43 = a6;
  v10 = 1;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = *(unsigned int *)a2;
  v44 = PerformanceCounter;
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)(v13 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v32 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v32;
      if ( *(_DWORD *)a2 == 2 )
      {
        v33 = *((_QWORD *)a2 + 3);
        v34 = (unsigned int)(*(_DWORD *)(v33 + 8) * *(_DWORD *)(v33 + 12));
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(
                   *((AUTOEXPANDALLOCATION **)a4 + 11),
                   *(_DWORD *)(v33 + 8) * *(_DWORD *)(v33 + 12),
                   0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), (unsigned int)v34);
          v40 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v40;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v40 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v40 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v41 = WdLogNewEntry5_WdLowResource(v37, v36, v38, v39);
          *(_QWORD *)(v41 + 24) = v34;
          *(_QWORD *)(v41 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v41);
          LODWORD(v6) = -1073741801;
        }
      }
    }
    return (unsigned int)v6;
  }
  memset(&v42, 0, sizeof(v42));
  v46 = 0LL;
  if ( *((_DWORD *)this + 10) != 1 || *((_DWORD *)this + 70) == 1 || (*((_DWORD *)a2 + 6) & 4) != 0 )
  {
    v16 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdEvent)(v13, (LARGE_INTEGER)v12.QuadPart);
    *(_QWORD *)(v16 + 24) = *((int *)this + 70);
    *(_QWORD *)(v16 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v16);
    LODWORD(v6) = GetAllocationSize(*(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL), *((unsigned int *)a2 + 7), &v46);
    if ( (int)v6 < 0 )
    {
      v17 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdError)(v13, (LARGE_INTEGER)v12.QuadPart);
      *(_QWORD *)(v17 + 24) = 1682LL;
LABEL_10:
      WdLogEvent5_WdError(v17);
      return 3221225473LL;
    }
    *(&v42.DirtyRectCount + 1) = 0;
    *((_DWORD *)this + 70) = 0;
    v14 = &v42;
    v42.pDirtyRects = &v46;
    DirtyRectCount = 1;
    v42.DirtyRectCount = 1;
    *(_OWORD *)&v42.MoveRectCount = 0LL;
  }
  else
  {
    v14 = (struct _D3DKMT_PRESENT_RGNS *)*((_QWORD *)a2 + 5);
    DirtyRectCount = v14->DirtyRectCount;
  }
  if ( DirtyRectCount || v14->MoveRectCount )
    v10 = 0;
  if ( !v45 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(v13, (LARGE_INTEGER)v12.QuadPart);
      *(_QWORD *)(v29 + 24) = 1771LL;
      WdLogEvent5_WdAssertion(v29);
    }
    if ( !v10 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v14,
                            &v44,
                            *((_DWORD *)a2 + 6) & 1,
                            v43) )
      {
        v17 = WdLogNewEntry5_WdError(v31, v30);
        *(_QWORD *)(v17 + 24) = 1783LL;
        goto LABEL_10;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v6) = 259;
    goto LABEL_34;
  }
  if ( !v10
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v14,
                        &v44,
                        *((_DWORD *)a2 + 6) & 1,
                        v43) )
  {
    v17 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v17 + 24) = 1715LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v21 = *((_QWORD *)a4 + 1);
    *(&v42.DirtyRectCount + 1) = 0;
    *(&v42.MoveRectCount + 1) = 0;
    v42.DirtyRectCount = *(_DWORD *)(v21 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((AUTOEXPANDALLOCATION **)v21, v42.DirtyRectCount);
    v23 = *((_QWORD *)a4 + 1);
    v42.pDirtyRects = DirtyRectData;
    v42.MoveRectCount = *(_DWORD *)(v23 + 44);
    v24 = *((unsigned int *)this + 11);
    v42.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v23 + 48);
    v25 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *((_DWORD *)a2 + 7),
            *(_DWORD *)(*((_QWORD *)this + v24 + 6) + 92LL),
            &v42);
    goto LABEL_21;
  }
  if ( v10 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v6;
  }
  v25 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *((_DWORD *)a2 + 7),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 92LL),
          v14);
LABEL_21:
  v6 = v25;
  if ( v25 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v27, v26);
    *(_QWORD *)(v28 + 24) = v6;
    WdLogEvent5_WdError(v28);
  }
  return (unsigned int)v6;
}
