/*
 * XREFs of ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C0281438
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FD2E0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00FE8C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C0254004 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z @ 0x1C02541B4 (-DestroyStagingSurface@DXGDEVICE@@QEAAXIIPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DXGPRESENT::PrepareStagingBuffer(
        DXGPRESENT *this,
        struct _DXGK_ALLOCATIONINFO *a2,
        unsigned int a3,
        struct COREDEVICEACCESS *a4,
        unsigned int *a5)
{
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r8d
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  struct _EX_RUNDOWN_REF *v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  UINT Pitch; // eax
  __int64 v35; // rax
  _QWORD *v36; // rax
  struct _EX_RUNDOWN_REF *v38; // [rsp+30h] [rbp-68h] BYREF
  struct _D3DKMDT_STAGINGSURFACEDATA v39; // [rsp+38h] [rbp-60h] BYREF

  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a2->Size + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 11196LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_DWORD *)this + 1);
  v13 = 0;
  if ( (v12 & 0x40) != 0 )
  {
    v14 = *((_DWORD *)this + 105);
    *((_DWORD *)this + 1) = v12 & 0xFFFFFFBF;
    if ( v14 )
    {
      DXGDEVICE::DestroyStagingSurface((DXGDEVICE *)a2, 0, v14, a4);
      *((_QWORD *)this + 52) = 0LL;
    }
  }
  if ( !*((_DWORD *)this + 105) )
  {
    v15 = *(_QWORD *)&a2->SupportedReadSegmentSet;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v18 = *(_DWORD *)(v15 + 232);
        if ( v18 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v18);
      }
      ExAcquirePushLockSharedEx(v15 + 208, 0LL);
    }
    v19 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v19 < *(_DWORD *)(v15 + 256) )
    {
      v20 = *(_QWORD *)(v15 + 240);
      v21 = *(_DWORD *)(v20 + 16 * v19 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60)
        && (v21 & 0x2000) == 0
        && (v21 & 0x1F) != 0 )
      {
        v22 = v21 & 0x1F;
        if ( (_BYTE)v22 == 5 )
        {
          v24 = *(struct _EX_RUNDOWN_REF **)(v20 + 16LL * (unsigned int)v19);
          goto LABEL_20;
        }
        v23 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60, v22);
        *(_QWORD *)(v23 + 24) = 267LL;
        WdLogEvent5_WdError(v23);
      }
    }
    v24 = 0LL;
LABEL_20:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v38, v24);
    ExReleasePushLockSharedEx(v15 + 208, 0LL);
    KeLeaveCriticalRegion();
    if ( v38 )
    {
      v28 = *(_QWORD *)(v38[1].Count + 16);
      v29 = *(_QWORD *)(a2->Size + 16);
      if ( *(_QWORD *)(v28 + 16) == v29 )
      {
        v39.Width = *((_DWORD *)this + 19);
        v39.Height = *((_DWORD *)this + 20);
        v39.Pitch = 0;
        v13 = DXGDEVICE::CreateStagingSurface2(a2, &v39, a4, (unsigned int *)this + 104, (unsigned int *)this + 105);
        if ( v13 >= 0 )
        {
          if ( !*((_DWORD *)this + 104) )
          {
            v33 = WdLogNewEntry5_WdAssertion(v32, v31);
            *(_QWORD *)(v33 + 24) = 11243LL;
            WdLogEvent5_WdAssertion(v33);
          }
          Pitch = v39.Pitch;
          if ( !v39.Pitch )
          {
            v35 = WdLogNewEntry5_WdAssertion(v32, v31);
            *(_QWORD *)(v35 + 24) = 11245LL;
            WdLogEvent5_WdAssertion(v35);
            Pitch = v39.Pitch;
          }
          *((_DWORD *)this + 106) = Pitch;
        }
      }
      else
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
        v13 = -1073741811;
        v30[3] = a2;
        v30[4] = v38;
        v30[5] = -1073741811LL;
        WdLogEvent5_WdError(v30);
      }
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v13 = -1073741811;
      v36[3] = -1073741811LL;
      v36[4] = this;
      v36[5] = v7;
      WdLogEvent5_WdWarning(v36);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v31);
  }
  *a5 = *((_DWORD *)this + 104);
  return (unsigned int)v13;
}
