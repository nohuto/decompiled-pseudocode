/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0139C38
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00E3080 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0139718 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C013BD20 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C0293180 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00EB9C0 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C0139D34 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x1C02E6528 (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ??0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ @ 0x1C02E8EA4 (--0BTL_TOPOLOGY_CONSTRUCTOR@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v4; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r9
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // edi
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 result; // rax
  _QWORD *v17; // rax
  _BYTE v18[104]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+10h] BYREF
  struct _LUID v20; // [rsp+A0h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  v20 = 0LL;
  v19 = 0;
  CCD_BTL::Global((__int64)this, (__int64)a2);
  BTL_TOPOLOGY_CONSTRUCTOR::BTL_TOPOLOGY_CONSTRUCTOR((BTL_TOPOLOGY_CONSTRUCTOR *)v18);
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v20, &v19, v4, v5);
  v9 = v6;
  if ( v6 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v17[3] = v9;
    v17[4] = this;
    v17[5] = *((_QWORD *)this + 8);
    v17[6] = this;
    WdLogEvent5_WdError(v17);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)this + 8);
  v11 = 0;
  v12 = 0;
  v13 = *(unsigned __int16 *)(v10 + 20);
  if ( !*(_WORD *)(v10 + 20) )
    goto LABEL_23;
  while ( 1 )
  {
    v14 = 272LL * v12;
    if ( *(_DWORD *)(v14 + v10 + 64) == v20.LowPart
      && *(_DWORD *)(v14 + v10 + 68) == v20.HighPart
      && *(_DWORD *)(v14 + v10 + 76) == v19 )
    {
      break;
    }
    if ( ++v12 >= v13 )
      goto LABEL_23;
  }
  v15 = 0;
  do
  {
    if ( v15 == v12 || CCD_TOPOLOGY::IsSameCloneGroup(this, v15, v12, 0) )
      ++v11;
    ++v15;
  }
  while ( v15 < v13 );
  if ( !v11 )
  {
LABEL_23:
    *(_DWORD *)a2 = 8;
    return 0LL;
  }
  if ( v11 != 1 )
  {
    if ( v13 <= 1 )
      return 3221225473LL;
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  result = 0LL;
  if ( v13 > 1 )
    *(_DWORD *)a2 = 4;
  else
    *(_DWORD *)a2 = 1;
  return result;
}
