/*
 * XREFs of ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03A86C8
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03A1F60 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C00113E0 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0011764 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  void *Instance; // rax
  char *v10; // rcx
  __int128 v11; // xmm0
  _DWORD *v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( a2 )
    {
      v12 = 0LL;
      Instance = (void *)Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(
                           (__int64)a2,
                           (__int64)a2,
                           (__int64)a3,
                           a4);
      auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset((void **)&v12, Instance);
      if ( v12 )
      {
        v10 = (char *)(v12 + 4);
        v12[4] = *((_DWORD *)a2 + 6);
        v11 = *(_OWORD *)((char *)a2 + 72);
        *a3 = (const struct _D3DKMDT_VIDPN_TARGET_MODE *)v10;
        *(_OWORD *)(v10 + 8) = v11;
        *(_OWORD *)(v10 + 24) = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)(v10 + 40) = *(_OWORD *)((char *)a2 + 104);
        *((_QWORD *)v10 + 7) = *((_QWORD *)a2 + 15);
      }
      else
      {
        WdLogSingleEntry1(6LL, this);
        v4 = -1073741801;
      }
      operator delete(0LL);
      return v4;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      return 3223192337LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192352LL;
  }
}
