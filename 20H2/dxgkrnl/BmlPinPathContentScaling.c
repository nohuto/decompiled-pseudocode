/*
 * XREFs of BmlPinPathContentScaling @ 0x1C013A1D0
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C0139F78 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02EB880 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005A68 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     BmlInternalTryPinningScaling @ 0x1C013A334 (BmlInternalTryPinningScaling.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01458C0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPinPathContentScaling(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r12
  int *v5; // rsi
  __int64 v6; // r14
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // r8
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  int v23; // edi
  VIDPN_MGR *v24; // rcx
  __int64 v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = a1;
  v3 = a3;
  v5 = (int *)(104LL * a3 + a1 + 16);
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 24LL),
           *(_DWORD *)(*(_QWORD *)v5 + 28LL));
  v8 = *((_DWORD *)Path + 30);
  if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path, v9) )
  {
    if ( (_DWORD)v6 == 5 )
    {
      result = BmlInternalTryPinningScaling(v5, a2, 5LL, v8);
      if ( (int)result >= 0 )
        return result;
      v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
      v21[3] = v27;
      v21[4] = a2;
      v21[5] = v3;
      WdLogEvent5_WdWarning(v21);
    }
    v15 = BmlInternalTryPinningScaling(v5, a2, 1LL, v8);
    if ( v15 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v16);
      v22[3] = v5[2];
      v22[4] = v27;
      v22[5] = a2;
      v22[6] = v3;
      WdLogEvent5_WdWarning(v22);
      return (unsigned int)v15;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v23 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v23 = BmlInternalTryPinningScaling(v5, a2, (unsigned int)v6, v8), v23 == -1071774970) )
    {
      if ( (dword_1C00B268C & 1) == 0 )
      {
        v24 = *(VIDPN_MGR **)(a2 + 48);
        dword_1C00B268C |= 1u;
        dword_1C00B2640[0] = VIDPN_MGR::GetAdapterDefaultScaling(v24);
        dword_1C00B2644 = 3;
        dword_1C00B2648 = 4;
        dword_1C00B264C = 2;
      }
      v25 = 0LL;
      do
      {
        if ( (unsigned int)v25 >= 4 )
          break;
        v11 = dword_1C00B2640;
        v12 = (unsigned int)dword_1C00B2640[v25];
        if ( (_DWORD)v12 != (_DWORD)v6 )
          v23 = BmlInternalTryPinningScaling(v5, a2, v12, v8);
        v25 = (unsigned int)(v25 + 1);
      }
      while ( v23 == -1071774970 );
    }
    if ( v23 < 0 )
    {
      ++v5[16];
      v5[18] = v23;
      if ( v23 != -1071774970 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v26[4] = &v27;
        v26[3] = v6;
        v26[5] = a2;
        v26[6] = v3;
        WdLogEvent5_WdWarning(v26);
      }
    }
    return (unsigned int)v23;
  }
}
