/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFA98
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C01B5124 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03A9374 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F208 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000F2B0 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C01DFCD8 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C030A218 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v8; // rbx
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // r14
  unsigned int v12; // r15d
  unsigned int j; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v14; // rax
  __int64 v15; // r13
  unsigned int v16; // ecx
  int PreferredVidPnSourceList; // eax
  __int64 v18; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  unsigned int v26; // r12d
  int AdapterAndSourceForHash; // r13d
  unsigned int v28; // [rsp+58h] [rbp-69h] BYREF
  struct _LUID v29; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v30[16]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v31[16]; // [rsp+A8h] [rbp-19h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v5 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)Global + 1416); v5 < *(unsigned __int16 *)(v3 + 20); ++v5 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v5);
    v8 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      v9 = *((_DWORD *)PathDescriptor + 7);
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & v9) != 0 )
      {
        v29 = 0LL;
        v28 = 0;
        v26 = v9 >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v26, &v29, &v28);
        if ( AdapterAndSourceForHash < 0 )
        {
          WdLogSingleEntry1(2LL, v26);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed info for hash (0x%lx)",
            v26,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v8[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v8[3].LowPart = v28;
        v8[2] = v29;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v3 = *((_QWORD *)this + 8);
  }
  v10 = 0;
  if ( !*(_WORD *)(v3 + 20) )
    return 0LL;
  while ( 1 )
  {
    v11 = CCD_TOPOLOGY::GetPathDescriptor(this, v10);
    if ( (*(_QWORD *)v11 & 0x4000000000000LL) != 0 )
      break;
LABEL_24:
    v23 = *((_QWORD *)this + 8);
    if ( ++v10 >= *(unsigned __int16 *)(v23 + 20) )
    {
      if ( *(_WORD *)(v23 + 20) )
      {
        do
        {
          v24 = CCD_TOPOLOGY::GetPathDescriptor(this, v4++);
          *(_QWORD *)v24 |= 0x4000000000000uLL;
        }
        while ( v4 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v12 = 0;
  for ( j = v10; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v14 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v11 + 4) == *((_DWORD *)v14 + 4) && *((_DWORD *)v11 + 5) == *((_DWORD *)v14 + 5) )
    {
      v15 = v12;
      if ( v12 >= 0x10 )
      {
        WdLogSingleEntry4(2LL, v12, *((int *)v11 + 5), *((unsigned int *)v11 + 4), -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Total paths (0x%I64x) from adapter 0x%I64x%08I64x is larger than D3DKMDT_MAX_VIDPN_SOURCES, returning 0x%I64x.",
          v12,
          *((int *)v11 + 5),
          *((unsigned int *)v11 + 4),
          -1073741811LL,
          0LL);
        return 3221225485LL;
      }
      if ( *((_BYTE *)v14 + 129) )
        v16 = -1;
      else
        v16 = *((_DWORD *)v14 + 6);
      v31[v12++] = v16;
      v30[v15] = *((_DWORD *)v14 + 7);
    }
  }
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v11 + 2, v12, v30, v31);
  v18 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v10; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v20 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v21 = v20;
      if ( *((_DWORD *)v11 + 4) == *((_DWORD *)v20 + 4) && *((_DWORD *)v11 + 5) == *((_DWORD *)v20 + 5) )
      {
        v22 = 0;
        if ( v12 )
        {
          while ( v30[v22] != *((_DWORD *)v21 + 7) )
          {
            if ( ++v22 >= v12 )
              goto LABEL_22;
          }
          *((_DWORD *)v21 + 6) = v31[v22];
        }
LABEL_22:
        *(_QWORD *)v21 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_24;
  }
  WdLogSingleEntry3(2LL, *((int *)v11 + 5), *((unsigned int *)v11 + 4), PreferredVidPnSourceList);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get the preferred VidPn source list for adapter 0x%I64x%08I64x, Status = 0x%I64x",
    *((int *)v11 + 5),
    *((unsigned int *)v11 + 4),
    v18,
    0LL,
    0LL);
  return (unsigned int)v18;
}
