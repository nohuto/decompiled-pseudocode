/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03A9374
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C02F9C50 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C001EC4C (-ForceIHVScaling@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C01AB974 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C01ADEA8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C01B4F70 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C01DFA98 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01E5F2C (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942 @ 0x1C01E7F04 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1942--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C03A9E54 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C03A9EFC (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C03AA310 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03AB0D4 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        unsigned int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  CCD_TOPOLOGY *v5; // r8
  __int64 v6; // rax
  _DWORD *v7; // r8
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  CCD_TOPOLOGY *v11; // rcx
  __int64 v12; // rdi
  int v13; // esi
  unsigned int i; // edx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  unsigned __int16 v17; // di
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  int Active; // eax
  __int64 v23; // rdx
  CCD_TOPOLOGY *v24; // rcx
  unsigned int j; // edi
  CCD_TOPOLOGY *v26; // rax
  unsigned __int16 v27; // cx
  DXGGLOBAL *Global; // rax
  __int64 v29; // r14
  struct DXGADAPTER *v30; // rax
  __int64 v31; // r15
  unsigned __int8 v32; // r12
  DXGADAPTER *v33; // rdx
  CCD_TOPOLOGY *v34; // rcx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v35; // rdx
  _QWORD *v36; // rax
  CCD_TOPOLOGY *v37; // r12
  int v38; // r14d
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // r8
  int PathModeListForAdapter; // eax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // [rsp+38h] [rbp-59h] BYREF
  int v49; // [rsp+40h] [rbp-51h]
  _BYTE v50[160]; // [rsp+48h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+F8h] [rbp+67h] BYREF
  unsigned int v52; // [rsp+100h] [rbp+6Fh]
  struct CCD_MODE_RESULT_SET *v53; // [rsp+110h] [rbp+7Fh]

  v53 = a4;
  v52 = a2;
  CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
  v5 = this[8];
  v48 = (__int64)v5 + 56;
  v6 = *((unsigned __int16 *)v5 + 10);
  v49 = v6;
  if ( (_DWORD)v6 )
  {
    v7 = (_DWORD *)((char *)v5 + 312);
    do
    {
      *v7 |= 1u;
      v7[1] = 0;
      v7 += 74;
      --v6;
    }
    while ( v6 );
    v5 = this[8];
  }
  if ( v5 && *((_WORD *)v5 + 10) )
  {
    CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
    v8 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this);
    v11 = this[8];
    LODWORD(v12) = v8;
    if ( v8 >= 0 )
    {
      v13 = 0;
      for ( i = 0; ; ++i )
      {
        v15 = v11 ? *((_WORD *)v11 + 10) : 0;
        if ( i >= (unsigned int)v15 - 1 )
          break;
        v16 = 296LL * i;
        if ( *((_BYTE *)v11 + v16 + 185) && (*(_DWORD *)((_BYTE *)v11 + v16 + 56) & 0x20101) == 0x20000LL )
          v13 = 1;
      }
      if ( v13 )
      {
        v17 = 8;
        CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v50, 8u, 0);
        LOWORD(v51) = 8;
        while ( 1 )
        {
          if ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v50, v17, v18, v19) < v17 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, v20);
            v36[3] = v17;
            v36[4] = this;
            v24 = this[8];
            v36[5] = v24;
            goto LABEL_38;
          }
          Active = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v50, 1, 0, 1, (unsigned __int16 *)&v51);
          if ( Active != -1073741789 )
            break;
          v17 = v51;
        }
        if ( Active >= 0 )
        {
          for ( j = 0; ; ++j )
          {
            v26 = this[8];
            v27 = v26 ? *((_WORD *)v26 + 10) : 0;
            if ( j >= (unsigned int)v27 - 1 )
              break;
            Global = DXGGLOBAL_GetGlobal();
            v29 = 296LL * j;
            v30 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)this[8] + v29 + 72), &v51);
            if ( !v30 )
              goto LABEL_39;
            v31 = *((_QWORD *)v30 + 350);
            v32 = ADAPTER_DISPLAY::ForceIHVScaling(*((ADAPTER_DISPLAY **)v30 + 349));
            DXGADAPTER::ReleaseReference(v33);
            v34 = this[8];
            if ( *((_BYTE *)v34 + v29 + 185) )
            {
              if ( v31 )
              {
                if ( !v32 )
                {
                  v35 = (CCD_TOPOLOGY *)((char *)v34 + v29 + 56);
                  if ( (*(_DWORD *)v35 & 0x20101) == 0x20000LL )
                    CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v34, v35, (const struct CCD_TOPOLOGY *)v50);
                }
              }
            }
          }
          goto LABEL_40;
        }
LABEL_38:
        WdLogNewEntry5_WdTrace(v24, v23);
LABEL_39:
        v13 = 0;
LABEL_40:
        CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v50);
      }
      CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1, v9, v10);
      v37 = this[8];
      v38 = 0;
      v39 = 296LL * *((unsigned __int16 *)v37 + 10);
      v40 = (__int64)v37 + v39;
      while ( 1 )
      {
        v41 = v52;
        LOBYTE(v41) = *((_BYTE *)this + 76) & 1;
        PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                   this[8],
                                   *(_QWORD *)(v40 - 224),
                                   v41,
                                   *((unsigned int *)this + 20),
                                   v52,
                                   v53,
                                   v48,
                                   v49);
        v12 = PathModeListForAdapter;
        if ( PathModeListForAdapter != -1071774970 )
          break;
        if ( !v13
          || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                              (CCD_TOPOLOGY *)this,
                              (const struct _LUID *)(v40 - 224))
          || v38 )
        {
          goto LABEL_48;
        }
        v38 = 1;
        WdLogNewEntry5_WdTrace(v46, v45);
      }
      if ( PathModeListForAdapter < 0 )
      {
LABEL_48:
        WdLogSingleEntry5(
          2LL,
          v12,
          this[8],
          *((unsigned __int16 *)this[8] + 10) - 1LL,
          *(int *)((char *)v37 + v39 - 220),
          *(unsigned int *)(v40 - 224));
        goto LABEL_51;
      }
      CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0, v43, v44);
    }
    else
    {
      WdLogSingleEntry2(2LL, this[8], v8);
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, v5);
    LODWORD(v12) = -1073741823;
  }
LABEL_51:
  CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1942::__AUTO_USING_PM_PathChangeReason1942(&v48);
  return (unsigned int)v12;
}
