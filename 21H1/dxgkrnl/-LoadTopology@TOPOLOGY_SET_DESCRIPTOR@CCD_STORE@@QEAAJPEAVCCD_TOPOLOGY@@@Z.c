/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C0138178
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C01380E0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0012C14 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00E66BC (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00E6AC8 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00E6BB8 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdReadRegistryValues @ 0x1C00E6E28 (_CcdReadRegistryValues.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00E71B8 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00E8718 (_CcdOpenRegistrySubkey.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EC34C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01360C0 (DxgkGetAdapterDefaultScaling.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C013848C (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int16 v6; // di
  unsigned __int16 *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // r12d
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rsi
  int RegistryValues; // eax
  __int64 v28; // rdx
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v29; // rcx
  int v30; // eax
  int Path; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned int v52; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v53[3]; // [rsp+34h] [rbp-3Ch] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  int v55; // [rsp+48h] [rbp-28h]
  unsigned int v56; // [rsp+4Ch] [rbp-24h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v57; // [rsp+50h] [rbp-20h]
  wchar_t Dest; // [rsp+58h] [rbp-18h] BYREF

  v57 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v6 = 0;
  v7 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v41 = WdLogNewEntry5_WdError(v5, v4);
    WdLogEvent5_WdError(v41);
    return 3221225473LL;
  }
  v8 = *((unsigned __int16 *)SetId + 16);
  v9 = *((_QWORD *)a2 + 8);
  if ( v9 )
    v10 = *(unsigned __int16 *)(v9 + 22);
  else
    v10 = 0LL;
  if ( (unsigned __int16)v8 > (unsigned __int16)v10 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v10, v8);
    v43 = *((_QWORD *)a2 + 8);
    if ( v43 )
      v6 = *(_WORD *)(v43 + 22);
    *(_QWORD *)(v42 + 24) = v6;
    *(_QWORD *)(v42 + 32) = v7[16];
    WdLogEvent5_WdAssertion(v42);
    return 3221225507LL;
  }
  v11 = 0;
  if ( (_WORD)v8 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v11);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v11;
    }
    while ( v11 < v7[16] );
  }
  v55 = -1;
  LODWORD(v13) = -1073741823;
  Handle = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !v7[16] )
    return (unsigned int)v13;
  while ( 1 )
  {
    v53[1] = 0;
    v52 = 0;
    v53[0] = 0;
    v16 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v7, v15, &v53[1], 0LL, &v52);
    v13 = v16;
    if ( v16 < 0 )
      break;
    v19 = v53[1];
    if ( v55 != v53[1] )
    {
      v20 = RtlStringCbPrintfW(&Dest, 6uLL, L"%02x", v53[1]);
      v13 = v20;
      if ( v20 < 0 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v21);
        v49[3] = v13;
        v49[4] = v15;
        v49[5] = v19;
        v49[6] = a2;
        v49[7] = *((_QWORD *)a2 + 8);
        goto LABEL_69;
      }
      if ( Handle )
        ZwClose(Handle);
      v23 = CcdOpenRegistrySubkey((int)&Handle, 131097, *((_QWORD *)v57 + 8), &Dest, 0LL);
      v13 = v23;
      if ( v23 < 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
        v48[4] = v15;
        v48[3] = v13;
        v48[5] = v19;
        v48[6] = a2;
        v48[7] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v48);
        goto LABEL_35;
      }
      v55 = v19;
    }
    v26 = CCD_TOPOLOGY::GetPathDescriptor(a2, v15);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_1C00AE7E0, 8u, (__int64)v26);
    v13 = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_66;
    *((_QWORD *)v26 + 13) = *((_QWORD *)v26 + 12);
    v30 = CcdReadRegistryValues(Handle, 0LL, &unk_1C00AE770, 2u, (__int64)v53);
    v13 = v30;
    if ( v30 == -1073741772 )
    {
      v53[0] = 0;
    }
    else if ( v30 < 0 )
    {
LABEL_66:
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v50[3] = v13;
      v50[4] = Handle;
      v50[5] = v52;
      v50[6] = v15;
      goto LABEL_67;
    }
    v56 = *((_DWORD *)v26 + 24);
    v53[1] = *((_DWORD *)v26 + 25);
    Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v29, Handle, v52, v26);
    v13 = Path;
    if ( Path < 0 )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v50[4] = v15;
      v50[5] = v52;
      v50[3] = v13;
      v50[6] = a2;
      v50[7] = *((_QWORD *)a2 + 8);
LABEL_67:
      WdLogEvent5_WdError(v50);
      CCD_TOPOLOGY::ClearPathDescriptor(v26);
      goto LABEL_35;
    }
    *((_DWORD *)v26 + 51) = 0;
    *((_DWORD *)v26 + 52) = 4;
    switch ( v53[0] )
    {
      case 0u:
        *(_QWORD *)v26 &= 0x10B87uLL;
        if ( (*(_QWORD *)v26 & 0x100LL) != 0 )
        {
          if ( (*(_QWORD *)v26 & 0x200LL) == 0 || ((*((_DWORD *)v26 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v45 = *((_DWORD *)v26 + 25);
            v33 = *((unsigned int *)v26 + 24);
          }
          else
          {
            v45 = *((_DWORD *)v26 + 24);
            v33 = *((unsigned int *)v26 + 25);
          }
          *((_DWORD *)v26 + 38) = v33;
          *((_DWORD *)v26 + 39) = v45;
          *(_QWORD *)v26 |= 0x20000uLL;
        }
LABEL_54:
        v46 = *(_QWORD *)v26 & 0x30B87LL;
        *(_QWORD *)v26 = v46;
        if ( v53[0] == 1 && (v46 & 0x10000) != 0 )
        {
          v32 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)v26 + 140);
          if ( *((_DWORD *)v26 + 35) == 5 )
            DxgkGetAdapterDefaultScaling((struct _LUID *)v26 + 2, v32);
        }
LABEL_58:
        *(_QWORD *)v26 &= 0x830B87uLL;
        if ( *((_DWORD *)v26 + 29) != 21 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v47[3] = *((int *)v26 + 29);
          v47[4] = v57;
          v47[5] = v26;
          WdLogEvent5_WdWarning(v47);
        }
        *((_DWORD *)v26 + 29) = 21;
        goto LABEL_23;
      case 1u:
        goto LABEL_54;
      case 2u:
        goto LABEL_58;
    }
    if ( v53[0] != 3 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v44[3] = (int)v53[0];
      v44[4] = *((unsigned int *)v26 + 6);
      v44[5] = *((unsigned int *)v26 + 7);
      WdLogEvent5_WdError(v44);
      CCD_TOPOLOGY::ClearPathDescriptor(v26);
      goto LABEL_24;
    }
LABEL_23:
    *(_QWORD *)v26 &= 0x830F87uLL;
LABEL_24:
    v35 = *(_QWORD *)v26;
    if ( (*(_QWORD *)v26 & 0x20000LL) != 0 )
    {
      if ( v52 )
      {
        *((_QWORD *)v26 + 19) = v14;
      }
      else
      {
        if ( (v35 & 0x200) != 0 && ((*((_DWORD *)v26 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v36 = v56;
          v37 = v53[1];
        }
        else
        {
          v36 = v53[1];
          v37 = v56;
        }
        *((_DWORD *)v26 + 38) = v37;
        *((_DWORD *)v26 + 39) = v36;
        v14 = *((_QWORD *)v26 + 19);
        v35 = *(_QWORD *)v26;
      }
    }
    if ( (v35 & 0x10000) != 0 )
    {
      *((_DWORD *)v26 + 34) = *((_DWORD *)v26 + 35);
      v35 |= 0x40000000000uLL;
      *(_QWORD *)v26 = v35;
    }
    if ( (v35 & 0x100) == 0 )
      *(_QWORD *)v26 = v35 & 0xFFFFFFFFFF7FFFFFuLL;
    if ( ++v15 >= v7[16] )
      goto LABEL_35;
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17);
  v49[3] = v13;
  v49[4] = v15;
  v49[5] = a2;
  v49[6] = *((_QWORD *)a2 + 8);
LABEL_69:
  WdLogEvent5_WdAssertion(v49);
LABEL_35:
  if ( (int)v13 >= 0 )
  {
    v13 = *(int *)CCD_TOPOLOGY::SetModalitySetId((void **)a2, (const struct CCD_SET_STRING_ID *)v7);
    if ( (int)v13 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
      v51[3] = v13;
      v51[4] = a2;
      v51[5] = v7;
      WdLogEvent5_WdError(v51);
    }
    else
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v7[16];
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v13;
}
