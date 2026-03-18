/*
 * XREFs of ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x18020D314
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199DFC (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UMipLevelSurface@CCompositionMipmapSurface@@V?$allocator@UMipLevelSurface@CCompositionMipmapSurface@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18020CD2C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UMipLevelSurface@CCompositionMipmapSurface.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetCreationParams(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS *a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned __int64 v6; // rdx
  _OWORD *v7; // rcx
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax

  v4 = *((_DWORD *)a3 + 2);
  if ( *((_QWORD *)this + 16) != __PAIR64__(v4, *((_DWORD *)a3 + 3)) || *((_DWORD *)this + 34) != *((_DWORD *)a3 + 4) )
  {
    *((_DWORD *)this + 33) = v4;
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 3);
    v5 = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 34) = v5;
    v6 = v5;
    *((_DWORD *)this + 35) = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 36) = *((_DWORD *)a3 + 5);
    v7 = (_OWORD *)*((_QWORD *)this + 13);
    v8 = ((__int64)v7 - *((_QWORD *)this + 12)) >> 5;
    if ( v6 >= v8 )
    {
      if ( v6 > v8 )
      {
        if ( v6 <= (__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) >> 5 )
        {
          v9 = v6 - v8;
          if ( v9 )
          {
            v10 = v7 + 1;
            do
            {
              *v7 = 0LL;
              v7[1] = 0LL;
              v7 += 2;
              *(v10 - 1) = 0LL;
              *v10 = 0LL;
              v10 += 4;
              --v9;
            }
            while ( v9 );
          }
          *((_QWORD *)this + 13) = v7;
        }
        else
        {
          std::vector<CCompositionMipmapSurface::MipLevelSurface>::_Resize_reallocate<std::_Value_init_tag>(
            (_QWORD *)this + 12,
            v6);
        }
      }
    }
    else
    {
      *((_QWORD *)this + 13) = *((_QWORD *)this + 12) + 32 * v6;
    }
    CSceneResourceManager::RegisterSceneListener(
      *(CSceneResourceManager **)(*((_QWORD *)this + 2) + 288LL),
      (CCompositionMipmapSurface *)((char *)this + 88));
  }
  return 0LL;
}
