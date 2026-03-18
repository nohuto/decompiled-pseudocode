/*
 * XREFs of NtDxgkGetProperties @ 0x1C01A17E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01A5214 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z @ 0x1C02231C8 (-PresentStatsDwm2Property@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_STATS_DWM2@@@Z.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C030B9E8 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C030BBCC (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C030BCCC (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkGetProperties(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // r14
  __int128 v5; // xmm1
  unsigned int v6; // ebx
  size_t v7; // rcx
  unsigned __int64 v8; // rax
  _DWORD *Pool2; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v17; // rsi
  struct DXGPROCESS *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // esi
  void *v21; // rcx
  ULONG64 v22; // rdx
  struct DXGTHREAD *Current; // rax
  __int128 v24; // [rsp+60h] [rbp-68h]
  _BYTE *P; // [rsp+88h] [rbp-40h]
  _BYTE v26[4]; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v27; // [rsp+94h] [rbp-34h]

  v4 = a1;
  P = 0LL;
  v27 = 0;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (_OWORD *)MmUserProbeAddress;
  v24 = *a1;
  v5 = a1[1];
  if ( !(_QWORD)v5 || !DWORD1(v24) || DWORD2(v24) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    v27 = 0;
    return 3221225485LL;
  }
  if ( (_DWORD)v24 == 4 )
  {
    v6 = 64;
    goto LABEL_8;
  }
  if ( !(_DWORD)v24 )
    goto LABEL_20;
  if ( (int)v24 <= 0 )
    goto LABEL_26;
  if ( (int)v24 <= 2 )
  {
LABEL_20:
    v6 = 16;
    goto LABEL_8;
  }
  if ( (_DWORD)v24 != 3 )
  {
LABEL_26:
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid D3DKMT_PROPERTIES_TYPE, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v27 = 0;
    return 3221225485LL;
  }
  v6 = 32;
LABEL_8:
  if ( DWORD1(v24) < v6 )
  {
    WdLogSingleEntry2(2LL, (int)v24, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v24,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v27 = 0;
    return 3221225485LL;
  }
  v7 = v6;
  if ( v6 == 64LL )
    v8 = 0x3FFFFFFFFFFFFFFLL;
  else
    v8 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  if ( v8 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v6, 1265072196LL, a4);
    P = Pool2;
    v27 = v6;
    v7 = v6;
  }
  else
  {
    Pool2 = 0LL;
  }
  if ( Pool2 )
  {
    if ( v7 + (unsigned __int64)v5 < (unsigned __int64)v5 || v7 + (unsigned __int64)v5 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, (const void *)v5, v7);
    CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v17 = (struct DXGPROCESS *)ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
      || (Current = DXGTHREAD::GetCurrent()) == 0LL
      || (v18 = (struct DXGPROCESS *)*((_QWORD *)Current + 3)) == 0LL )
    {
      v18 = v17;
    }
    if ( (_DWORD)v24 != 4 )
    {
      if ( (_DWORD)v24 )
      {
        if ( (_DWORD)v24 == 1 )
        {
          v19 = ProcessUserPreferredAdapterProperty(
                  v18,
                  (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                  0);
        }
        else if ( (_DWORD)v24 == 2 )
        {
          v19 = ProcessDefaultHighPerformanceAdapterProperty(
                  v18,
                  (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)Pool2,
                  0);
        }
        else
        {
          v19 = PresentDurationPlaneProperty(v18, (struct _D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE *)Pool2, 0);
        }
      }
      else
      {
        v19 = ProcessVrrEligibleProperty(v18, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)Pool2, 0);
      }
      goto LABEL_40;
    }
    if ( Pool2[2] >= 0x38u )
    {
      v19 = PresentStatsDwm2Property(v18, (struct _D3DKMT_PROPERTIES_PRESENT_STATS_DWM2 *)Pool2);
LABEL_40:
      v20 = v19;
      v21 = (void *)*((_QWORD *)v4 + 2);
      v22 = (ULONG64)v21 + v6;
      if ( v22 > MmUserProbeAddress || v22 <= (unsigned __int64)v21 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v21, Pool2, v6);
      if ( P != v26 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return v20;
    }
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid cbSize specified of PresentStatsDwm2 , returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry2(2LL, v7, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
      v6,
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    if ( P != v26 && P )
      ExFreePoolWithTag(P, 0);
    v27 = 0;
    return 3221225495LL;
  }
}
