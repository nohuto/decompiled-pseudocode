/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B08B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z @ 0x1C0014A2C (-SysMmAllocateLogicalMemory@@YAJPEAUSYSMM_ADAPTER@@_KPEBXPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C00331BC (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0033214 (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C0033260 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B0BE0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(
        VIDMM_MEMORY_SEGMENT *this,
        void (*a2)(void *),
        union _LARGE_INTEGER *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // r8
  int v8; // edx
  char v9; // al
  int v10; // edx
  int v11; // ebp
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  VIDMM_CPU_HOST_APERTURE *v15; // rax
  VIDMM_CPU_HOST_APERTURE *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // edx
  __int64 v23; // r8
  char v24; // cl
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  int v30; // edi
  unsigned int v31; // esi
  VIDMM_CPU_HOST_APERTURE *v32; // rcx
  __int128 SystemInformation; // [rsp+50h] [rbp-48h] BYREF
  __int128 v34; // [rsp+60h] [rbp-38h]

  v4 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = *((unsigned int *)this + 4);
    *(_QWORD *)(v13 + 32) = this;
  }
  v7 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v7 + 32) < 0x9006u )
    *((_DWORD *)this + 20) &= ~0x10u;
  v8 = *((_DWORD *)this + 20);
  if ( (v8 & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)(v7 + 24) + 436LL) & 8) != 0) )
    v9 = 1;
  v10 = v8 | 0x10;
  *((_BYTE *)this + 474) = v9;
  *((_DWORD *)this + 20) = v10;
  if ( (v10 & 0x40) == 0 )
    goto LABEL_8;
  if ( *((_QWORD *)this + 8) > (unsigned __int64)(unsigned int)(qword_1C006E568 - 0x800000) )
  {
    WdLogSingleEntry1(1LL, 278LL);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return 3221225473LL;
  }
  result = SysMmAllocateLogicalMemory(
             *(struct SYSMM_ADAPTER **)(*(_QWORD *)(v7 + 24) + 224LL),
             *((_QWORD *)this + 6),
             this,
             (void **)this + 60);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 1) + 7048LL) += *((_QWORD *)this + 6);
    v10 = *((_DWORD *)this + 20);
LABEL_8:
    *((_QWORD *)this + 26) = *((_QWORD *)this + 6);
    if ( (v10 & 0x2000) != 0 )
    {
      v15 = (VIDMM_CPU_HOST_APERTURE *)operator new(72LL, 0x35346956u, 256LL);
      if ( v15 )
        v16 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v15);
      else
        v16 = 0LL;
      *((_QWORD *)this + 63) = v16;
      if ( !v16 )
      {
        _InterlockedIncrement(&dword_1C006E844);
        WdLogSingleEntry1(6LL, 317LL);
        DxgkLogInternalTriageEvent(v17, 262145LL);
        return 3221225495LL;
      }
      v18 = VIDMM_CPU_HOST_APERTURE::Init(v16, this, *((_QWORD *)this + 4), *((_DWORD *)this + 10));
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(1LL, v18);
        DxgkLogInternalTriageEvent(v20, 0x40000LL);
        return v19;
      }
    }
    v11 = VIDMM_SEGMENT::Init(this, a2, 0LL);
    if ( v11 < 0 )
      goto LABEL_11;
    if ( (*((_DWORD *)this + 20) & 0x2000) == 0 )
      goto LABEL_11;
    if ( !*((_DWORD *)this + 22) )
      goto LABEL_11;
    v21 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 436LL);
    if ( (v21 & 0x8000) == 0 )
      goto LABEL_11;
    if ( (v21 & 0x10000) == 0 )
      goto LABEL_11;
    SystemInformation = 0LL;
    v34 = 0LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL) < 0 )
      goto LABEL_11;
    if ( DWORD2(v34) != 1 )
    {
      if ( DWORD2(v34) == 2 )
      {
LABEL_33:
        v22 = 4;
LABEL_35:
        v23 = *((unsigned int *)this + 94);
        v24 = 12;
        if ( v23 != 4096 )
          v24 = 16;
        v25 = (__int64)SystemInformation >> v24;
        v26 = (unsigned int)(v34 * HIDWORD(SystemInformation) * v22);
        LOBYTE(v4) = ((v23 - 1) & v26) != 0;
        v27 = (v26 >> v24) - 1 + ((__int64)SystemInformation >> v24) + v4;
        v28 = *((__int64 *)this + 4) >> v24;
        v29 = v28 + (unsigned int)(*((_DWORD *)this + 10) - 1);
        if ( v28 > (__int64)SystemInformation >> v24 )
          v25 = *((__int64 *)this + 4) >> v24;
        if ( v29 >= v27 )
          v29 = v27;
        if ( v25 <= v29 )
        {
          v30 = v29 - v25;
          v31 = v25 - v28;
          WdLogSingleEntry2(4LL, v31, (unsigned int)(v30 + 1));
          v32 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 63);
          *((_DWORD *)this + 23) = v31;
          *((_DWORD *)this + 24) = v31 + v30;
          v11 = VIDMM_CPU_HOST_APERTURE::BlockRange(v32, (VIDMM_MEMORY_SEGMENT *)((char *)this + 92));
        }
        goto LABEL_11;
      }
      if ( DWORD2(v34) != 3 )
      {
        if ( DWORD2(v34) != 4 )
        {
LABEL_11:
          *((_BYTE *)this + 473) = 1;
          WdLogSingleEntry0(4LL);
          WdLogSingleEntry4(
            4LL,
            *((_QWORD *)this + 6),
            *((int *)this + 7),
            *((unsigned int *)this + 6),
            *((unsigned int *)this + 4));
          return (unsigned int)v11;
        }
        goto LABEL_33;
      }
    }
    v22 = 3;
    goto LABEL_35;
  }
  return result;
}
