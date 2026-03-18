/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01DECF4
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C01DECC0 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0011EE8 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0013120 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C01ABE88 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01AF5C4 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C01AFBA0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C01B78F8 (_CcdOpenRegistrySubkey.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01DEF80 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdWriteRegistryValues @ 0x1C01DF0AC (_CcdWriteRegistryValues.c)
 *     ?MapModalitySetIdPath@CCD_TOPOLOGY@@QEBAJIPEAG@Z @ 0x1C01DF1C8 (-MapModalitySetIdPath@CCD_TOPOLOGY@@QEBAJIPEAG@Z.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C01DF238 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  void **ModalitySetId; // r12
  unsigned int v6; // r8d
  unsigned int v7; // esi
  int v8; // eax
  CCD_TOPOLOGY *v9; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdi
  int v14; // eax
  int v15; // r15d
  int v16; // edx
  int v17; // eax
  unsigned int BitsPerPixel; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int16 v23; // dx
  __int64 v25; // rdx
  struct DXGGLOBAL *Global; // rax
  HANDLE v27; // r8
  const struct CCD_TOPOLOGY *v28; // r9
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  unsigned __int16 v33[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+34h] [rbp-3Ch] BYREF
  unsigned int v35; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  int v37; // [rsp+48h] [rbp-28h]
  int v38; // [rsp+4Ch] [rbp-24h] BYREF
  int v39; // [rsp+50h] [rbp-20h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v40; // [rsp+58h] [rbp-18h]
  unsigned __int16 v41; // [rsp+60h] [rbp-10h] BYREF

  v40 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v25 = v3;
LABEL_39:
    WdLogSingleEntry4(2LL, v25, a2, *((_QWORD *)a2 + 8), 1LL);
    return v4;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId((void **)a2);
  v6 = 0;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v25 = *(int *)ModalitySetId;
    goto LABEL_39;
  }
  v37 = -1;
  v7 = 0;
  Handle = 0LL;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v35 = v6;
      v34 = v6;
      v8 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)ModalitySetId, v7, &v35, 0LL, &v34);
      if ( v8 < 0 )
        break;
      v33[0] = 0;
      v8 = CCD_TOPOLOGY::MapModalitySetIdPath(a2, v7, v33);
      if ( v8 < 0 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v9, v33[0]);
      v12 = v35;
      v13 = (__int64)PathDescriptor;
      if ( v37 != v35 )
      {
        v14 = RtlStringCbPrintfW(&v41, 6uLL, L"%02x", v35);
        if ( v14 < 0 )
        {
          v32 = 1LL;
          goto LABEL_34;
        }
        if ( Handle )
          ZwClose(Handle);
        v38 = 0;
        v14 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v40 + 8), &v41, (__int64)&v38);
        if ( v14 < 0 )
        {
          v32 = 2LL;
LABEL_34:
          WdLogSingleEntry5(v32, v14, v7, v12, a2, *((_QWORD *)a2 + 8));
          goto LABEL_24;
        }
        v37 = v12;
        if ( !v34 )
        {
          v15 = *(_DWORD *)(v13 + 96);
          v35 = *(_DWORD *)(v13 + 100);
          *(_DWORD *)v33 = *(_DWORD *)(v13 + 112);
          if ( (*(_QWORD *)v13 & 0x20000LL) != 0 )
          {
            if ( (*(_QWORD *)v13 & 0x200LL) != 0 && ((*(_DWORD *)(v13 + 132) - 2) & 0xFFFFFFFD) == 0 )
            {
              v16 = *(_DWORD *)(v13 + 156);
              v17 = *(_DWORD *)(v13 + 152);
            }
            else
            {
              v16 = *(_DWORD *)(v13 + 152);
              v17 = *(_DWORD *)(v13 + 156);
            }
            *(_DWORD *)(v13 + 100) = v17;
            *(_DWORD *)(v13 + 96) = v16;
          }
          BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v13 + 116));
          *(_DWORD *)(v13 + 112) = v19 * (BitsPerPixel >> 3);
          v20 = CcdWriteRegistryValues((_DWORD)Handle, 0, (unsigned int)&unk_1C012F6A0, 8, v13);
          v11 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v20;
          if ( v20 < 0
            || (*(_DWORD *)(v13 + 100) = v35,
                *(_DWORD *)(v13 + 112) = *(_DWORD *)v33,
                *(_DWORD *)(v13 + 96) = v15,
                v39 = 4,
                v21 = CcdWriteRegistryValues((_DWORD)Handle, 0, (unsigned int)&unk_1C012F630, 2, (__int64)&v39),
                v11 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v21,
                v21 < 0) )
          {
            v27 = Handle;
            v28 = 0LL;
            v29 = v11;
            v30 = v7;
            v31 = 2LL;
            goto LABEL_37;
          }
        }
      }
      v22 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v11,
              Handle,
              v34,
              (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v13);
      v6 = 0;
      if ( v22 < 0 )
      {
        WdLogSingleEntry5(2LL, v22, v7, v34, a2, *((_QWORD *)a2 + 8));
        goto LABEL_24;
      }
      if ( (*(_QWORD *)v13 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v13 + 88))
        && (v23 & 0x200) != 0 )
      {
        Global = DXGGLOBAL_GetGlobal();
        v6 = 0;
        *((_DWORD *)Global + 346) = *(_DWORD *)(v13 + 132);
      }
      if ( ++v7 >= *((unsigned __int16 *)ModalitySetId + 16) )
        goto LABEL_24;
    }
    v29 = (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v8;
    v31 = 1LL;
    v30 = *((_QWORD *)a2 + 8);
    v28 = a2;
    v27 = (HANDLE)v7;
LABEL_37:
    WdLogSingleEntry4(v31, v29, v27, v28, v30);
LABEL_24:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
