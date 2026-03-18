/*
 * XREFs of ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C02993DC
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0297BAC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BA54 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
        ADAPTER_DISPLAY **this,
        __int64 a2,
        int a3,
        int a4,
        enum _D3DKMT_VIDPNSOURCEOWNER_TYPE *a5)
{
  ADAPTER_DISPLAY *v6; // rcx
  __int64 v7; // rsi
  int v8; // ebx
  enum _D3DKMT_VIDPNSOURCEOWNER_TYPE VidPnSourceOwnerType; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v15; // rax

  if ( a3 || (v6 = *this) == 0LL )
  {
    *a5 = D3DKMT_VIDPNSOURCEOWNER_SHARED;
  }
  else
  {
    v7 = (unsigned int)a2;
    v8 = *(_DWORD *)(3968LL * (unsigned int)a2 + *((_QWORD *)v6 + 14) + 700);
    VidPnSourceOwnerType = (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(v6, a2);
    v13 = VidPnSourceOwnerType;
    *a5 = VidPnSourceOwnerType;
    if ( a4 )
    {
      if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED )
        return 3223192387LL;
    }
    else if ( VidPnSourceOwnerType != D3DKMT_VIDPNSOURCEOWNER_SHARED && (v8 & 1) == 0 )
    {
      v15 = WdLogNewEntry5_WdTrace(a5, v10, v11, v12);
      *(_QWORD *)(v15 + 24) = v7;
      *(_QWORD *)(v15 + 32) = v13;
      return 3221225506LL;
    }
  }
  return 0LL;
}
