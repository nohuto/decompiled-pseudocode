/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01439E8
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C0143960 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000C750 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0130A2C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0133F8C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C0144620 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, __int64 a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  int v15; // r10^4
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int *v19; // rdi
  int v20; // eax
  _QWORD *v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rsi
  unsigned int v25; // eax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // eax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+60h] [rbp+8h] BYREF
  int v37; // [rsp+64h] [rbp+Ch]
  __int64 v38; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v8 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_21;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v34);
      }
      *((_DWORD *)v8 + 59) |= 1u;
      v19 = (unsigned int *)((char *)v8 + 168);
      *((_DWORD *)v8 + 44) = *((_DWORD *)v8 + 24);
      *((_DWORD *)v8 + 45) = *((_DWORD *)v8 + 25);
      v20 = 0;
      *((_DWORD *)v8 + 43) = 0;
      *((_DWORD *)v8 + 42) = 0;
      goto LABEL_17;
    }
    v9 = *((_DWORD *)PathDescriptor + 33);
    v38 = *((_QWORD *)PathDescriptor + 12);
    if ( (((unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION(v9) - 2) & 0xFFFFFFFD) != 0 )
    {
      v36 = *((_DWORD *)v8 + 38);
      v16 = *((_DWORD *)v8 + 39);
    }
    else
    {
      v36 = *((_DWORD *)v8 + 39);
      v16 = *((_DWORD *)v8 + 38);
    }
    v37 = v16;
    if ( (*(_DWORD *)v8 & 0x800000) == 0 )
      goto LABEL_23;
    v11 = *((unsigned int *)v8 + 43);
    if ( (int)v11 < 0 )
      break;
    v17 = *((_DWORD *)v8 + 42);
    if ( v17 < 0 )
      break;
    v10 = *((unsigned int *)v8 + 44);
    if ( (int)v10 <= v17 )
      break;
    v18 = *((_DWORD *)v8 + 45);
    if ( v18 <= (int)v11 || (int)v10 > v14 || v18 > v15 )
      break;
LABEL_21:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v8 + 2) & 0x800000) == 0 )
  {
LABEL_23:
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v22[3] = v3;
    v22[4] = *((unsigned int *)v8 + 6);
    v22[5] = *((unsigned int *)v8 + 7);
    v7 = 0x40000000000LL;
    v23 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0x40000000000LL) == 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(0x40000000000LL, v6);
      WdLogEvent5_WdAssertion(v27);
      v23 = *(_QWORD *)v8;
    }
    if ( *((_DWORD *)v8 + 34) == 1 )
    {
      v24 = (_DWORD *)((char *)v8 + 140);
      if ( (v23 & 0x10000) != 0 )
      {
        if ( *v24 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
          *((_DWORD *)v8 + 59) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
        *(_QWORD *)v8 |= 0x10000uLL;
        *((_DWORD *)v8 + 59) |= 0x80u;
      }
      v19 = (unsigned int *)((char *)v8 + 168);
      v25 = ConvertDmmToDisplayConfigScaling((unsigned int)*v24, v6);
      if ( !CalculateScaling(v25, (unsigned int *)&v38, &v36, (unsigned int *)v8 + 42) )
      {
        v29 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v29 + 24) = (int)*v24;
        WdLogEvent5_WdAssertion(v29);
        DxgkGetAdapterDefaultScaling((char *)v8 + 16, (char *)v8 + 140);
        v31 = ConvertDmmToDisplayConfigScaling((unsigned int)*v24, v30);
        v32 = CalculateScaling(v31, (unsigned int *)&v38, &v36, (unsigned int *)v8 + 42);
        *((_DWORD *)v8 + 59) |= 0x40u;
        if ( !v32 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v7, v6);
          *(_QWORD *)(v33 + 24) = 3760LL;
          WdLogEvent5_WdAssertion(v33);
        }
      }
    }
    else
    {
      if ( (v23 & 0x100) == 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v7, v6);
        WdLogEvent5_WdAssertion(v28);
      }
      *((_DWORD *)v8 + 59) |= 1u;
      v19 = (unsigned int *)((char *)v8 + 168);
      *((_DWORD *)v8 + 44) = *((_DWORD *)v8 + 24);
      *((_DWORD *)v8 + 45) = *((_DWORD *)v8 + 25);
      *((_DWORD *)v8 + 43) = 0;
      *((_DWORD *)v8 + 42) = 0;
    }
    v20 = *((_DWORD *)v8 + 43);
LABEL_17:
    *(_QWORD *)v8 |= 0x800000uLL;
    if ( v20 < 0 || (v7 = *v19, (int)v7 < 0) || *((_DWORD *)v8 + 44) <= (int)v7 || *((_DWORD *)v8 + 45) <= v20 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v7, v6);
      *(_QWORD *)(v35 + 24) = 3780LL;
      WdLogEvent5_WdAssertion(v35);
    }
    goto LABEL_21;
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v26[3] = v3;
  v26[4] = *((unsigned int *)v8 + 6);
  v26[5] = *((unsigned int *)v8 + 7);
  WdLogEvent5_WdError(v26);
  return 3221225485LL;
}
