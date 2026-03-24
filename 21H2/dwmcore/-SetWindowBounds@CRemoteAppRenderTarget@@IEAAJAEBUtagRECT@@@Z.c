/*
 * XREFs of ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801870C0
 * Callers:
 *     ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x18016FF30 (-ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDER.c)
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x180186694 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x180186818 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18003C6F4 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x180186D00 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SetWindowBounds(CRemoteAppRenderTarget *this, const struct tagRECT *a2)
{
  LONG top; // esi
  LONG right; // r14d
  LONG bottom; // r15d
  unsigned int v6; // edi
  _DWORD *v7; // r10
  int v8; // r11d
  char v9; // bp
  int *v10; // rsi
  int v11; // ecx
  __int64 v12; // rdx
  int (__fastcall ***v13)(_QWORD); // rcx
  int v14; // eax
  __int64 v15; // rcx
  _DWORD v17[14]; // [rsp+30h] [rbp-38h] BYREF

  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  v6 = 0;
  v17[0] = a2->left;
  v17[1] = top;
  v17[2] = right;
  v17[3] = bottom;
  if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEquivalentTo((_DWORD *)this + 66, v17) )
  {
    *v7 = v8;
    v9 = 0;
    v7[1] = top;
    v10 = (int *)((char *)this + 80);
    v7[2] = right;
    v7[3] = bottom;
    v11 = v7[2] - *v7;
    if ( *((_DWORD *)this + 20) != v11 || *((_DWORD *)this + 21) != *((_DWORD *)this + 69) - *((_DWORD *)this + 67) )
    {
      *v10 = v11;
      v9 = 1;
      *((_DWORD *)this + 21) = *((_DWORD *)this + 69) - *((_DWORD *)this + 67);
      *((_BYTE *)this + 129) = 1;
    }
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 952LL) == 6
      && (v12 = *((_QWORD *)this + 20)) != 0
      && (v13 = (int (__fastcall ***)(_QWORD))(v12 + 8 + *(int *)(*(_QWORD *)(v12 + 8) + 12LL)), (**v13)(v13) >= 0)
      && *v10
      && *((_DWORD *)this + 21) )
    {
      if ( v9 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 20) + 48LL))(
                *((_QWORD *)this + 20),
                (char *)this + 80);
        v6 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x17Au, 0LL);
          return v6;
        }
      }
    }
    else
    {
      CRemoteAppRenderTarget::ReleaseSwapChain(this);
    }
    *((_BYTE *)this + 129) = 1;
  }
  return v6;
}
