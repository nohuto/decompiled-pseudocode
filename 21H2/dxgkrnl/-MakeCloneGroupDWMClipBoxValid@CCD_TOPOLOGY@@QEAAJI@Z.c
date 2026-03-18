/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01D751C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01D7494 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0011EC8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C0019E5C (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01B153C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // r10^4
  DWORD HighPart; // eax
  int v13; // eax
  int v14; // eax
  int *v15; // rdi
  int v16; // eax
  _QWORD *v18; // rax
  struct _LUID v19; // rax
  int *p_HighPart; // rsi
  int v21; // eax
  int v22; // eax
  char v23; // al
  DWORD LowPart; // [rsp+90h] [rbp+8h] BYREF
  DWORD v25; // [rsp+94h] [rbp+Ch]
  __int64 v26; // [rsp+A0h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v6 = (struct _LUID *)PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_21;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
        WdLogSingleEntry0(1LL);
      v6[32].HighPart |= 1u;
      v15 = (int *)&v6[21];
      v6[22].LowPart = v6[12].LowPart;
      v6[22].HighPart = v6[12].HighPart;
      v16 = 0;
      v6[21].HighPart = 0;
      v6[21].LowPart = 0;
      goto LABEL_17;
    }
    v7 = *((_DWORD *)PathDescriptor + 33);
    v26 = *((_QWORD *)PathDescriptor + 12);
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v7) - 2) & 0xFFFFFFFD) != 0 )
    {
      LowPart = v6[19].LowPart;
      HighPart = v6[19].HighPart;
    }
    else
    {
      LowPart = v6[19].HighPart;
      HighPart = v6[19].LowPart;
    }
    v25 = HighPart;
    if ( (v6->LowPart & 0x800000) == 0 )
      goto LABEL_23;
    v9 = (unsigned int)v6[21].HighPart;
    if ( (int)v9 < 0 )
      break;
    v13 = v6[21].LowPart;
    if ( v13 < 0 )
      break;
    v8 = v6[22].LowPart;
    if ( (int)v8 <= v13 )
      break;
    v14 = v6[22].HighPart;
    if ( v14 <= (int)v9 || (int)v8 > v10 || v14 > v11 )
      break;
LABEL_21:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (v6[1].LowPart & 0x800000) == 0 )
  {
LABEL_23:
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v18[3] = v3;
    v18[4] = v6[3].LowPart;
    v18[5] = (unsigned int)v6[3].HighPart;
    v19 = *v6;
    if ( (*(_QWORD *)v6 & 0x40000000000LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      v19 = *v6;
    }
    if ( v6[17].LowPart == 1 )
    {
      p_HighPart = &v6[17].HighPart;
      if ( (*(_QWORD *)&v19 & 0x10000) != 0 )
      {
        if ( *p_HighPart == 5 )
        {
          DxgkGetAdapterDefaultScaling(v6 + 2, &v6[17].HighPart);
          v6[32].HighPart |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling(v6 + 2, &v6[17].HighPart);
        *(_QWORD *)v6 |= 0x10000uLL;
        v6[32].HighPart |= 0x80u;
      }
      v15 = (int *)&v6[21];
      v21 = ConvertDmmToDisplayConfigScaling(*p_HighPart);
      if ( !CalculateScaling(v21, (unsigned int *)&v26, &LowPart, (unsigned int *)&v6[21]) )
      {
        WdLogSingleEntry1(1LL, *p_HighPart);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Failed to set clipbox with scaling intent 0x%lx, going to force ",
          *p_HighPart,
          0LL,
          0LL,
          0LL,
          0LL);
        DxgkGetAdapterDefaultScaling(v6 + 2, &v6[17].HighPart);
        v22 = ConvertDmmToDisplayConfigScaling(*p_HighPart);
        v23 = CalculateScaling(v22, (unsigned int *)&v26, &LowPart, (unsigned int *)&v6[21]);
        v6[32].HighPart |= 0x40u;
        if ( !v23 )
        {
          WdLogSingleEntry1(1LL, 4041LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"bRet", 4041LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    else
    {
      if ( (v19.LowPart & 0x100) == 0 )
        WdLogSingleEntry0(1LL);
      v6[32].HighPart |= 1u;
      v15 = (int *)&v6[21];
      v6[22].LowPart = v6[12].LowPart;
      v6[22].HighPart = v6[12].HighPart;
      v6[21].HighPart = 0;
      v6[21].LowPart = 0;
    }
    v16 = v6[21].HighPart;
LABEL_17:
    *(_QWORD *)v6 |= 0x800000uLL;
    if ( v16 < 0 || *v15 < 0 || (signed int)v6[22].LowPart <= *v15 || v6[22].HighPart <= v16 )
    {
      WdLogSingleEntry1(1LL, 4061LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pPathDescriptor->DwmClipBox.top >= 0) && (pPathDescriptor->DwmClipBox.left >= 0) && (pPathDescriptor->"
                  "DwmClipBox.right > pPathDescriptor->DwmClipBox.left) && (pPathDescriptor->DwmClipBox.bottom > pPathDes"
                  "criptor->DwmClipBox.top)",
        4061LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_21;
  }
  WdLogSingleEntry3(2LL, v3, v6[3].LowPart, (unsigned int)v6[3].HighPart);
  return 3221225485LL;
}
