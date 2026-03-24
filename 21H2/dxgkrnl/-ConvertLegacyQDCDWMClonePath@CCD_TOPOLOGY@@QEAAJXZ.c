/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0162C24
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C013AEF4 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EA94C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E30 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0009E84 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013527C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C0162E60 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C02696B0 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v9; // rdx
  struct _LUID *v10; // rdi
  unsigned int v11; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rdi
  unsigned int v13; // r15d
  unsigned int j; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  unsigned int v19; // ecx
  int PreferredVidPnSourceList; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int AdapterAndSourceForHash; // r13d
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  unsigned int v38; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v39; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v40[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v41[16]; // [rsp+78h] [rbp-19h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v4 = *((_QWORD *)this + 8);
  v5 = 0;
  v6 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)Global + 1272); v6 < *(unsigned __int16 *)(v4 + 20); ++v6 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6);
    v10 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i, v9) & *((_DWORD *)PathDescriptor + 7)) != 0 )
      {
        v39 = 0LL;
        v38 = 0;
        v31 = (unsigned int)v10[3].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v31, &v39, &v38);
        if ( AdapterAndSourceForHash < 0 )
        {
          v35 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v35 + 24) = v31;
          WdLogEvent5_WdError(v35);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v10[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i, v32);
        v10[3].LowPart = v38;
        v10[2] = v39;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v4 = *((_QWORD *)this + 8);
  }
  v11 = 0;
  if ( !*(_WORD *)(v4 + 20) )
    return 0LL;
  while ( 1 )
  {
    v12 = CCD_TOPOLOGY::GetPathDescriptor(this, v11);
    if ( (*(_QWORD *)v12 & 0x4000000000000LL) != 0 )
      break;
LABEL_24:
    v28 = *((_QWORD *)this + 8);
    if ( ++v11 >= *(unsigned __int16 *)(v28 + 20) )
    {
      if ( *(_WORD *)(v28 + 20) )
      {
        do
        {
          v29 = CCD_TOPOLOGY::GetPathDescriptor(this, v5++);
          *(_QWORD *)v29 |= 0x4000000000000uLL;
        }
        while ( v5 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v13 = 0;
  for ( j = v11; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v12 + 4) == *((_DWORD *)v15 + 4) )
    {
      v17 = *((unsigned int *)v15 + 5);
      if ( *((_DWORD *)v12 + 5) == (_DWORD)v17 )
      {
        v18 = v13;
        if ( v13 >= 0x10 )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v36[3] = v13;
          v36[4] = *((int *)v12 + 5);
          v36[5] = *((unsigned int *)v12 + 4);
          v36[6] = -1073741811LL;
          WdLogEvent5_WdError(v36);
          return 3221225485LL;
        }
        if ( *((_BYTE *)v15 + 129) )
          v19 = -1;
        else
          v19 = *((_DWORD *)v15 + 6);
        v41[v13++] = v19;
        v40[v18] = *((_DWORD *)v15 + 7);
      }
    }
  }
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v12 + 2, v13, v40, v41);
  v23 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v11; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v25 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v26 = v25;
      if ( *((_DWORD *)v12 + 4) == *((_DWORD *)v25 + 4) && *((_DWORD *)v12 + 5) == *((_DWORD *)v25 + 5) )
      {
        v27 = 0;
        if ( v13 )
        {
          while ( v40[v27] != *((_DWORD *)v26 + 7) )
          {
            if ( ++v27 >= v13 )
              goto LABEL_22;
          }
          *((_DWORD *)v26 + 6) = v41[v27];
        }
LABEL_22:
        *(_QWORD *)v26 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_24;
  }
  v37 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
  v37[3] = *((int *)v12 + 5);
  v37[4] = *((unsigned int *)v12 + 4);
  v37[5] = v23;
  WdLogEvent5_WdError(v37);
  return (unsigned int)v23;
}
