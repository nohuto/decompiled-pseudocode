/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800ECB10
 * Callers:
 *     ?Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800F2710 (-Render@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ @ 0x1801553E4 (-GetStereoscopicContentManager@CComposition@@QEAAPEAUIStereoscopicContentManager@@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1801558F4 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     McTemplateU0xx_EventWriteTransfer @ 0x180155E6C (McTemplateU0xx_EventWriteTransfer.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F331C (McTemplateU0xxx_EventWriteTransfer.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x18023C4A0 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180250EF0 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z @ 0x180251318 (-PostInteropTextureUpdate@CHolographicManager@@QEAAXIPEAX0@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180255464 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 *     McTemplateU0xxxx_EventWriteTransfer @ 0x180255730 (McTemplateU0xxxx_EventWriteTransfer.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x180255FB4 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(
        CHolographicInteropTarget *this,
        struct CDrawingContext *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rax
  DWORD v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int i; // esi
  struct CHolographicInteropTexture *v15; // rax
  struct CHolographicInteropTexture *v16; // rbp
  unsigned int v17; // r9d
  unsigned int v18; // r15d
  unsigned int j; // r14d
  void *v20; // r9
  void *v21; // r8
  CHolographicManager *v22; // rcx
  __int64 v23; // r8
  CD3DDevice *v24; // rcx
  unsigned int v25; // esi
  CHolographicInteropTexture *TextureAtIndex; // rax
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+30h] [rbp-58h] BYREF

  LODWORD(v4) = 0;
  v5 = qword_1803444D0 + 1;
  *a4 = 0;
  qword_1803444D0 = v5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    McTemplateU0xx_EventWriteTransfer(this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v5, qword_1803444C8);
  v9 = (_QWORD *)*((_QWORD *)this - 14);
  if ( (unsigned int)((__int64)(v9[19] - v9[18]) >> 3) )
  {
    v10 = v9[5];
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 216) )
      {
        v11 = WaitForSingleObject(*((HANDLE *)this - 7), 0xAu);
        v13 = *((_QWORD *)this - 14);
        if ( v11 )
        {
          v25 = 0;
          for ( LODWORD(v4) = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3; v25 < (unsigned int)v4; ++v25 )
          {
            TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((CHolographicManager **)this - 14), v25);
            if ( TextureAtIndex )
              CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
            McTemplateU0xxx_EventWriteTransfer(
              v13,
              (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
              qword_1803444D0,
              qword_1803444C8,
              0);
          CComposition::ScheduleCompositionPass(*((_QWORD *)this - 31), 0LL, 0x8000LL);
        }
        else
        {
          v4 = (__int64)(*(_QWORD *)(v13 + 152) - *(_QWORD *)(v13 + 144)) >> 3;
          *a4 = (_DWORD)v4 != 0;
          for ( i = 0; i < (unsigned int)v4; ++i )
          {
            v15 = CHolographicManager::GetTextureAtIndex(*((CHolographicManager **)this - 14), i);
            v16 = v15;
            if ( v15 && *((_BYTE *)v15 + 216) )
            {
              v18 = 1;
              if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this - 31)) )
                v18 = 2;
              for ( j = 0; j < v18; ++j )
                CHolographicInteropTarget::RenderTexture(
                  (CHolographicInteropTarget *)((char *)this - 264),
                  a2,
                  v16,
                  v17,
                  j);
            }
          }
          v20 = (void *)*((_QWORD *)this - 7);
          v21 = (void *)*((_QWORD *)this - 8);
          v22 = (CHolographicManager *)*((_QWORD *)this - 14);
          ++qword_1803444C8;
          CHolographicManager::PostInteropTextureUpdate(v22, v12, v21, v20);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
            McGenEventWrite_EventWriteTransfer(
              Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED,
              v23,
              1u,
              &v28);
          v24 = (CD3DDevice *)*((_QWORD *)this - 12);
          if ( v24 )
            CD3DDevice::EnqueueSetEvent(v24, *((void **)this - 8));
        }
      }
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
    McTemplateU0xxxx_EventWriteTransfer(
      v4,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_1803444D0,
      qword_1803444C8,
      qword_1803444D0 - qword_1803444C8,
      v4);
  return 0LL;
}
