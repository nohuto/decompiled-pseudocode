/*
 * XREFs of ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00B1018
 * Callers:
 *     VidMmInitializeAdapter @ 0x1C001C750 (VidMmInitializeAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C002C9E0 (--_GVIDMM_GLOBAL@@QEAAPEAXI@Z.c)
 *     ?VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00B11D8 (-VidMmiFreeQuerySegmentInfo@@YAXPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00B1204 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 *     ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00B2A38 (--0VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00B30B0 (-VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmiInit(struct ADAPTER_RENDER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r15d
  unsigned int DriverVersion; // r12d
  __int64 v8; // rax
  struct _DXGK_QUERYSEGMENTOUT4 *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // edi
  VIDMM_GLOBAL *v12; // rax
  VIDMM_GLOBAL *v13; // rax
  VIDMM_GLOBAL *v14; // rdi
  int v15; // eax
  struct _DXGK_QUERYSEGMENTOUT4 *v16; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _DXGK_QUERYSEGMENTOUT4 *v23; // rbx
  __int64 v24; // rdi
  _DWORD SystemInformation[16]; // [rsp+50h] [rbp-88h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = v4;
  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL) < 0
    || *(_QWORD *)(v4 + 2088) < (unsigned __int64)SystemInformation[5] << 12 )
  {
    WdLogSingleEntry1(1LL, 231LL);
    v19 = 0x40000LL;
    goto LABEL_27;
  }
  DriverVersion = DpiGetDriverVersion(*(_QWORD *)(v4 + 216));
  v8 = 40LL * *(unsigned int *)(v4 + 288);
  if ( !is_mul_ok(*(unsigned int *)(v4 + 288), 0x28uLL) )
    v8 = -1LL;
  v9 = (struct _DXGK_QUERYSEGMENTOUT4 *)operator new[](v8, 0x30306956u, 256LL);
  if ( !v9 )
  {
    _InterlockedIncrement(&dword_1C006E77C);
    WdLogSingleEntry1(6LL, 240LL);
    v19 = 262145LL;
LABEL_27:
    DxgkLogInternalTriageEvent(v18, v19);
    return 0LL;
  }
  v10 = *(unsigned int *)(v4 + 288);
  v11 = 0;
  if ( (_DWORD)v10 )
  {
    while ( (int)VidMmiQuerySegmentInfo4((struct DXGADAPTER *)v4, v11, &v9[v11]) >= 0 )
    {
      if ( ++v11 >= (unsigned int)v10 )
        goto LABEL_11;
    }
    WdLogSingleEntry1(1LL, 250LL);
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
    goto LABEL_23;
  }
LABEL_11:
  v12 = (VIDMM_GLOBAL *)operator new(44928LL, 0x35316956u, 64LL);
  if ( !v12 || (v13 = VIDMM_GLOBAL::VIDMM_GLOBAL(v12), (v14 = v13) == 0LL) )
  {
    _InterlockedIncrement(&dword_1C006E77C);
    WdLogSingleEntry1(6LL, 264LL);
    DxgkLogInternalTriageEvent(v22, 262145LL);
LABEL_22:
    if ( !(_DWORD)v10 )
    {
LABEL_25:
      operator delete(v9);
      return 0LL;
    }
LABEL_23:
    v23 = v9;
    v24 = v10;
    do
    {
      VidMmiFreeQuerySegmentInfo(v23++);
      --v24;
    }
    while ( v24 );
    goto LABEL_25;
  }
  v15 = VIDMM_GLOBAL::Init(v13, a1, v9, DriverVersion, v5);
  if ( v15 < 0 )
  {
    _InterlockedIncrement(&dword_1C006E780);
    WdLogSingleEntry1(6LL, v15);
    DxgkLogInternalTriageEvent(v21, 262145LL);
    VIDMM_GLOBAL::`scalar deleting destructor'(v14);
    goto LABEL_22;
  }
  WdLogSingleEntry0(4LL);
  if ( (_DWORD)v10 )
  {
    v16 = v9;
    do
    {
      VidMmiFreeQuerySegmentInfo(v16++);
      --v10;
    }
    while ( v10 );
  }
  operator delete(v9);
  return v14;
}
