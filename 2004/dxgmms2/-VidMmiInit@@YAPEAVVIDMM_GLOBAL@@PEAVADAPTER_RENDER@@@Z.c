/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0093A94
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C0015780 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AA4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016DC0 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C00220A8 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C0093C6C (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0093C98 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0095020 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00956A4 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int DriverVersion; // r15d
  SIZE_T v7; // rax
  __int64 v8; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_GLOBAL *v15; // rax
  __int64 v16; // rcx
  VIDMM_GLOBAL *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v23; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v29; // rsi
  __int64 v30; // rax
  _DWORD SystemInformation[16]; // [rsp+20h] [rbp-68h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v2;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || *(_QWORD *)(v2 + 1968) < (unsigned __int64)SystemInformation[5] << 12 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v4, v3, v5);
    *(_QWORD *)(v30 + 24) = 231LL;
    WdLogEvent5_WdAssertion(v30);
    return 0LL;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v2 + 216));
  v7 = 40LL * *(unsigned int *)(v2 + 280);
  if ( !is_mul_ok(*(unsigned int *)(v2 + 280), 0x28uLL) )
    v7 = -1LL;
  v9 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new[](v7, 0x30306956u, PagedPool);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C00516BC);
    v25 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v25 + 24) = 240LL;
    WdLogEvent5_WdLowResource(v25);
    return 0LL;
  }
  memset(v9, 0, 40LL * *(unsigned int *)(v2 + 280));
  v11 = *(unsigned int *)(v2 + 280);
  v12 = 0LL;
  if ( (_DWORD)v11 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v2, v12, &v9[v12]) >= 0 )
    {
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= (unsigned int)v11 )
        goto LABEL_11;
    }
    v26 = WdLogNewEntry5_WdAssertion(v14, v13, v10);
    *(_QWORD *)(v26 + 24) = 251LL;
    WdLogEvent5_WdAssertion(v26);
    goto LABEL_24;
  }
LABEL_11:
  v15 = (VIDMM_GLOBAL *)operator new(0xAEC0uLL, 0x35316956u, v10, (POOL_TYPE)512);
  if ( v15 )
    v17 = VIDMM_GLOBAL::VIDMM_GLOBAL(v15);
  else
    v17 = 0LL;
  if ( !v17 )
  {
    _InterlockedIncrement(&dword_1C00516BC);
    v27 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v27 + 24) = 265LL;
    WdLogEvent5_WdLowResource(v27);
LABEL_24:
    if ( (_DWORD)v11 )
    {
      v29 = v9;
      do
      {
        VidMmiFreeQuerySegmentInfo(v29++);
        --v11;
      }
      while ( v11 );
    }
    operator delete(v9);
    return 0LL;
  }
  v18 = VIDMM_GLOBAL::Init(v17, a1, v9, DriverVersion);
  v21 = v18;
  if ( v18 < 0 )
  {
    _InterlockedIncrement(&dword_1C00516C0);
    v28 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v28 + 24) = v21;
    WdLogEvent5_WdLowResource(v28);
    VIDMM_GLOBAL::`scalar deleting destructor'(v17);
    goto LABEL_24;
  }
  v22 = WdLogNewEntry5_WdEvent(v20, v19);
  WdLogEvent5_WdEvent(v22);
  if ( (_DWORD)v11 )
  {
    v23 = v9;
    do
    {
      VidMmiFreeQuerySegmentInfo(v23++);
      --v11;
    }
    while ( v11 );
  }
  operator delete(v9);
  return v17;
}
