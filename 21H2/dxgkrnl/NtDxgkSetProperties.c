/*
 * XREFs of NtDxgkSetProperties @ 0x1C01DD7E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C01A5214 (-ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z @ 0x1C01DDCBC (-AllocateElements@-$PagedPoolZeroedArray@E$03@@QEAAPEAEI@Z.c)
 *     ?PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@@_N@Z @ 0x1C030B9E8 (-PresentDurationPlaneProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE@.c)
 *     ?ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x1C030BBCC (-ProcessUserPreferredAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRE.c)
 *     ?ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@Z @ 0x1C030BCCC (-ProcessVrrEligibleProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE@@_N@.c)
 */

__int64 __fastcall NtDxgkSetProperties(ULONG64 a1)
{
  __int128 *v1; // rdx
  __int128 v2; // xmm1
  size_t v3; // rdi
  void *v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int v11; // eax
  unsigned int v12; // edi
  __int128 v13; // [rsp+58h] [rbp-60h]
  PVOID P; // [rsp+88h] [rbp-30h] BYREF
  _BYTE v15[4]; // [rsp+90h] [rbp-28h] BYREF
  int v16; // [rsp+94h] [rbp-24h]

  v1 = (__int128 *)a1;
  P = 0LL;
  v16 = 0;
  if ( a1 >= MmUserProbeAddress )
    v1 = (__int128 *)MmUserProbeAddress;
  v13 = *v1;
  v2 = v1[1];
  if ( !(_QWORD)v2 || !DWORD1(v13) || *((_QWORD *)&v13 + 1) )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  if ( !(_DWORD)v13 )
    goto LABEL_9;
  if ( (int)v13 <= 0 )
    goto LABEL_19;
  if ( (int)v13 <= 2 )
  {
LABEL_9:
    v3 = 16LL;
    goto LABEL_10;
  }
  if ( (_DWORD)v13 != 3 )
  {
LABEL_19:
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
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  v3 = 32LL;
LABEL_10:
  if ( DWORD1(v13) < (unsigned int)v3 )
  {
    WdLogSingleEntry2(2LL, (int)v13, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid propertydata size specified for D3DKMT_PROPERTIES_TYPE %d, returning 0x%I64x",
      (int)v13,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    P = 0LL;
    v16 = 0;
    return 3221225485LL;
  }
  else
  {
    v4 = (void *)PagedPoolZeroedArray<unsigned char,4>::AllocateElements(&P, (unsigned int)v3);
    if ( v4 )
    {
      if ( v3 + (unsigned __int64)v2 < (unsigned __int64)v2 || v3 + (unsigned __int64)v2 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v4, (const void *)v2, v3);
      Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 == 1 )
        {
          v11 = ProcessUserPreferredAdapterProperty(
                  Current,
                  (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v4,
                  1);
        }
        else if ( (_DWORD)v13 == 2 )
        {
          v11 = ProcessDefaultHighPerformanceAdapterProperty(
                  Current,
                  (struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *)v4,
                  1);
        }
        else
        {
          v11 = PresentDurationPlaneProperty(Current, (struct _D3DKMT_PROPERTIES_PRESENT_DURATION_PLANE *)v4, 1);
        }
      }
      else
      {
        v11 = ProcessVrrEligibleProperty(Current, (struct _D3DKMT_PROPERTIES_PROCESS_VRR_ELIGIBLE *)v4, 1);
      }
      v12 = v11;
      if ( P != v15 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return v12;
    }
    else
    {
      WdLogSingleEntry2(2LL, v3, -1073741801LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Out of memory allocating pPropertyData of size 0x%I64x, returning 0x%I64x",
        v3,
        -1073741801LL,
        0LL,
        0LL,
        0LL);
      if ( P != v15 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v16 = 0;
      return 3221225495LL;
    }
  }
}
