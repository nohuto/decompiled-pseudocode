/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0183D20
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C01D7F80 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000BE68 (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0183ED4 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C0184164 (DpiGetDxgAdapterSafe.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  struct DXGPROCESS *Current; // rsi
  __int64 v5; // rcx
  int DxgAdapterSafe; // eax
  volatile signed __int64 *v7; // rdi
  struct DXGADAPTER *v8; // rbx
  char *v9; // r15
  int v10; // eax
  DXGADAPTER *v11; // rbx
  __int64 v12; // rdx
  int v13; // ebx
  signed __int64 v14; // rcx
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  char v21; // [rsp+68h] [rbp-8h]
  unsigned int v22; // [rsp+B8h] [rbp+48h] BYREF
  struct DXGADAPTER *v23; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+58h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2001);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v5 = *(_QWORD *)a1;
    v23 = 0LL;
    v24 = 0LL;
    DxgAdapterSafe = DpiGetDxgAdapterSafe(v5, &v23, &v24);
    if ( DxgAdapterSafe < 0 )
    {
      v13 = DxgAdapterSafe;
    }
    else
    {
      v7 = (volatile signed __int64 *)v23;
      if ( (*((_DWORD *)v23 + 666) & 4) != 0 )
      {
        WdLogSingleEntry1(3LL, v23);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
        v13 = -1073741790;
      }
      else
      {
        _InterlockedIncrement64((volatile signed __int64 *)v23 + 3);
        KeEnterCriticalRegion();
        v8 = v23;
        v9 = (char *)v23 + 136;
        ExAcquirePushLockSharedEx((char *)v23 + 136, 0LL);
        v10 = *((_DWORD *)v8 + 50);
        v11 = v23;
        if ( v10 == 1
          && !*((_BYTE *)v23 + 2705)
          && (v12 = *((_QWORD *)v23 + 350)) != 0
          && !*(_BYTE *)(*(_QWORD *)(v12 + 16) + 209LL)
          && (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                                *(VIDSCH_EXPORT **)(v12 + 624),
                                *(struct _VIDSCH_GLOBAL **)(v12 + 632),
                                Current) )
        {
          WdLogSingleEntry2(4LL, v11, Current);
          DXGADAPTER::ReleaseReference(v11);
          v13 = -1073741790;
        }
        else
        {
          v22 = 0;
          v13 = DXGADAPTER::CreateHandle(v11, Current, &v22);
          v14 = _InterlockedExchangeAdd64(v7 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          v15 = v23;
          if ( v14 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
          if ( v13 >= 0 )
          {
            v13 = 0;
            *((_DWORD *)a1 + 2) = v22;
            *(_QWORD *)((char *)a1 + 12) = *(_QWORD *)((char *)v15 + 404);
          }
        }
        ExReleasePushLockSharedEx(v9, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64(v7 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v23 + 2), v23);
      }
    }
  }
  else
  {
    v13 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return (unsigned int)v13;
}
