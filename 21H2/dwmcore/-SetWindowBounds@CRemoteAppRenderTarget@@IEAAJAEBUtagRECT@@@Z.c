/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801C390C
 * Callers:
 *     ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x1801A1B10 (-ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDER.c)
 *     ?ForceFullRender@CRemoteAppRenderTarget@@MEAAXXZ @ 0x1801C23B0 (-ForceFullRender@CRemoteAppRenderTarget@@MEAAXXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801C2AE0 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006E1AC (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801C2F80 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetWindowBounds(CRemoteAppRenderTarget *this, const struct tagRECT *a2)
{
  LONG top; // edi
  LONG right; // r14d
  LONG bottom; // r15d
  unsigned int v6; // esi
  _DWORD *v7; // r10
  int v8; // r11d
  char v9; // bp
  int *v10; // rdi
  int v11; // ecx
  __int64 v12; // rdx
  int (__fastcall ***v13)(_QWORD); // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  _DWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF

  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v19[0] = a2->left;
  v6 = 0;
  v19[1] = top;
  v19[2] = right;
  v19[3] = bottom;
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo((_DWORD *)this + 66, v19) )
  {
    *v7 = v8;
    v9 = 0;
    v7[1] = top;
    v10 = (int *)((char *)this + 104);
    v7[2] = right;
    v7[3] = bottom;
    v11 = v7[2] - *v7;
    if ( *((_DWORD *)this + 26) != v11 || *((_DWORD *)this + 27) != *((_DWORD *)this + 69) - *((_DWORD *)this + 67) )
    {
      *v10 = v11;
      v9 = 1;
      *((_DWORD *)this + 27) = *((_DWORD *)this + 69) - *((_DWORD *)this + 67);
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6
      && (v12 = *((_QWORD *)this + 21)) != 0
      && (v13 = (int (__fastcall ***)(_QWORD))(v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 12LL)), (**v13)(v13) >= 0)
      && *v10
      && *((_DWORD *)this + 27) )
    {
      if ( v9 )
      {
        v14 = 32LL;
        if ( *((_DWORD *)this + 72) != 2 )
          v14 = 0LL;
        v15 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 21) + 48LL))(
                *((_QWORD *)this + 21),
                (char *)this + 104,
                v14);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x197u);
          return v6;
        }
      }
    }
    else
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
    }
    v17 = *((_QWORD *)this + 12);
    if ( v17 )
      *(_BYTE *)(v17 + 4712) = 1;
    *((_BYTE *)this + 141) = 1;
  }
  return v6;
}
