/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C01B72F8
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01B6A50 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0013120 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF568 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C01AFBA0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C01B0660 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01B7690 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@.c)
 *     _CcdReadRegistryValues @ 0x1C01B77A8 (_CcdReadRegistryValues.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01B7A3C (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01D5E50 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rax
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  unsigned int v7; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned int v11; // r12d
  int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  int v15; // eax
  __int64 v16; // r15
  int v17; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rsi
  int RegistryValues; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  CCD_SET_STRING_ID *v28; // rbx
  void **v29; // rax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r9
  unsigned int v37; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-4Ch] BYREF
  int v39; // [rsp+38h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  int v41; // [rsp+48h] [rbp-38h]
  unsigned int v42; // [rsp+4Ch] [rbp-34h]
  CCD_SET_STRING_ID *SetId; // [rsp+50h] [rbp-30h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v44; // [rsp+58h] [rbp-28h]
  unsigned __int16 v45; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int16 v46; // [rsp+68h] [rbp-18h] BYREF

  v44 = this;
  v3 = 0;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  if ( !SetId )
  {
    WdLogSingleEntry0(2LL);
    return 3221225473LL;
  }
  v4 = *((_QWORD *)a2 + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 22);
  else
    v5 = 0;
  v6 = *((_WORD *)SetId + 16);
  if ( v6 > v5 )
  {
    if ( v4 )
      v3 = *(_WORD *)(v4 + 22);
    WdLogSingleEntry2(1LL, v3, *((unsigned __int16 *)SetId + 16));
    return 3221225507LL;
  }
  v7 = 0;
  if ( v6 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v7);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v7;
    }
    while ( v7 < *((unsigned __int16 *)SetId + 16) );
  }
  v41 = -1;
  LODWORD(v9) = -1073741823;
  Handle = 0LL;
  v10 = 0LL;
  v11 = 0;
  if ( !*((_WORD *)SetId + 16) )
    return (unsigned int)v9;
  while ( 1 )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v12 = CCD_SET_STRING_ID::QueryCloneInfo(SetId, v11, &v37, 0LL, &v38);
    LODWORD(v9) = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry4(1LL, v12, v11, a2, *((_QWORD *)a2 + 8));
      goto LABEL_43;
    }
    v13 = v37;
    if ( v41 != v37 )
    {
      v14 = RtlStringCbPrintfW(&v46, 6uLL, L"%02x", v37);
      v9 = v14;
      if ( v14 < 0 )
      {
        v35 = 1LL;
      }
      else
      {
        if ( Handle )
          ZwClose(Handle);
        v15 = CcdOpenRegistrySubkey(&Handle, 131097LL, *((_QWORD *)v44 + 8), &v46, 0LL);
        v9 = v15;
        if ( v15 >= 0 )
        {
          v41 = v13;
          goto LABEL_15;
        }
        v35 = 2LL;
      }
      WdLogSingleEntry5(v35, v9, v11, v13, a2, *((_QWORD *)a2 + 8));
      goto LABEL_43;
    }
LABEL_15:
    v16 = v38;
    v37 = v38;
    v17 = RtlStringCbPrintfW(&v45, 6uLL, L"%02x", v38);
    LODWORD(v9) = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(1LL, v17, v16);
      return (unsigned int)v9;
    }
    v18 = CCD_TOPOLOGY::GetPathDescriptor(a2, v11);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C012F6A0, 8LL, v18);
    v20 = RegistryValues;
    if ( RegistryValues < 0 )
      break;
    *((_QWORD *)v18 + 13) = *((_QWORD *)v18 + 12);
    v21 = CcdReadRegistryValues(Handle, 0LL, &unk_1C012F630, 2LL, &v39);
    v20 = v21;
    if ( v21 == -1073741772 )
    {
      v39 = 0;
    }
    else if ( v21 < 0 )
    {
      v36 = v37;
      goto LABEL_78;
    }
    v42 = *((_DWORD *)v18 + 24);
    v38 = *((_DWORD *)v18 + 25);
    v22 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
            (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v21,
            Handle,
            v37,
            &v45,
            v18);
    if ( v22 < 0 )
    {
      WdLogSingleEntry5(2LL, v22, v11, v37, a2, *((_QWORD *)a2 + 8));
      goto LABEL_79;
    }
    *((_DWORD *)v18 + 51) = 0;
    *((_DWORD *)v18 + 52) = 4;
    switch ( v39 )
    {
      case 0:
        v31 = *(_QWORD *)v18 & 0x10B87LL;
        *(_QWORD *)v18 = v31;
        if ( (v31 & 0x100) != 0 )
        {
          if ( (v31 & 0x200) == 0 || ((*((_DWORD *)v18 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v32 = *((_DWORD *)v18 + 25);
            v33 = *((_DWORD *)v18 + 24);
          }
          else
          {
            v32 = *((_DWORD *)v18 + 24);
            v33 = *((_DWORD *)v18 + 25);
          }
          *((_DWORD *)v18 + 38) = v33;
          *((_DWORD *)v18 + 39) = v32;
          *(_QWORD *)v18 = v31 | 0x20000;
        }
LABEL_59:
        v34 = *(_QWORD *)v18 & 0x30B87LL;
        *(_QWORD *)v18 = v34;
        if ( v39 == 1 && (v34 & 0x10000) != 0 && *((_DWORD *)v18 + 35) == 5 )
          DxgkGetAdapterDefaultScaling((char *)v18 + 16, (char *)v18 + 140);
LABEL_63:
        *(_QWORD *)v18 &= 0x830B87uLL;
        if ( *((_DWORD *)v18 + 29) != 21 )
          WdLogSingleEntry3(3LL, *((int *)v18 + 29), v44, v18);
        *((_DWORD *)v18 + 29) = 21;
LABEL_66:
        *(_QWORD *)v18 &= 0x830F87uLL;
LABEL_25:
        *(_QWORD *)v18 &= 0x1830F87uLL;
        goto LABEL_26;
      case 1:
        goto LABEL_59;
      case 2:
        goto LABEL_63;
      case 3:
        goto LABEL_66;
      case 4:
        goto LABEL_25;
    }
    WdLogSingleEntry3(2LL, v39, *((unsigned int *)v18 + 6), *((unsigned int *)v18 + 7));
    CCD_TOPOLOGY::ClearPathDescriptor(v18);
LABEL_26:
    v23 = *(_QWORD *)v18;
    v24 = *(_QWORD *)v18;
    if ( (*(_QWORD *)v18 & 0x1000000LL) != 0 )
    {
      v25 = CcdReadRegistryValues(Handle, &v45, &unk_1C012F400, 4LL, v18);
      if ( v25 < 0 )
      {
        WdLogSingleEntry3(3LL, v25, v11, v37);
        goto LABEL_41;
      }
      v23 = *(_QWORD *)v18;
    }
    else
    {
      *((_DWORD *)v18 + 60) = 1;
      if ( (v23 & 2) == 0 )
        goto LABEL_30;
      v23 |= 0x1000000uLL;
      *((_QWORD *)v18 + 28) = *(_QWORD *)((char *)v18 + 52);
      *(_QWORD *)v18 = v23;
    }
    v24 = v23;
LABEL_30:
    if ( (v23 & 0x20000) != 0 )
    {
      if ( v37 )
      {
        *((_QWORD *)v18 + 19) = v10;
      }
      else
      {
        if ( (v23 & 0x200) != 0 && ((*((_DWORD *)v18 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v26 = v42;
          v27 = v38;
        }
        else
        {
          v26 = v38;
          v27 = v42;
        }
        *((_DWORD *)v18 + 38) = v27;
        v23 = v24;
        *((_DWORD *)v18 + 39) = v26;
        v10 = *((_QWORD *)v18 + 19);
      }
    }
    if ( (v23 & 0x10000) != 0 )
    {
      *((_DWORD *)v18 + 34) = *((_DWORD *)v18 + 35);
      v23 |= 0x40000000000uLL;
      *(_QWORD *)v18 = v23;
    }
    if ( (v23 & 0x100) == 0 )
      *(_QWORD *)v18 = v23 & 0xFFFFFFFFFF7FFFFFuLL;
    if ( ++v11 >= *((unsigned __int16 *)SetId + 16) )
      goto LABEL_41;
  }
  v36 = v16;
LABEL_78:
  WdLogSingleEntry4(2LL, v20, Handle, v36, v11);
LABEL_79:
  CCD_TOPOLOGY::ClearPathDescriptor(v18);
LABEL_41:
  v28 = SetId;
  v29 = CCD_TOPOLOGY::SetModalitySetId((void **)a2, SetId);
  LODWORD(v9) = *(_DWORD *)v29;
  if ( *(int *)v29 < 0 )
  {
    WdLogSingleEntry3(2LL, *(int *)v29, a2, v28);
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)v28 + 16);
    *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
  }
LABEL_43:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v9;
}
