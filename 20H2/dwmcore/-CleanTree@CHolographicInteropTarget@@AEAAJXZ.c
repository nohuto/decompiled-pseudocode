/*
 * XREFs of ?CleanTree@CHolographicInteropTarget@@AEAAJXZ @ 0x180254E38
 * Callers:
 *     ?PreRender@CHolographicInteropTarget@@UEAAJXZ @ 0x1802551E0 (-PreRender@CHolographicInteropTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x180250EF0 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::CleanTree(CHolographicInteropTarget *this)
{
  int v2; // ebx
  RTL_SRWLOCK *v3; // rcx
  unsigned int v4; // edi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  __int64 v6; // rcx
  int v7; // eax

  v2 = 0;
  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 19);
  v4 = 0;
  if ( (unsigned int)(((char *)v3[19].Ptr - (char *)v3[18].Ptr) >> 3) )
  {
    while ( 1 )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex(v3, v4);
      if ( TextureAtIndex )
      {
        v6 = *((_QWORD *)TextureAtIndex + 11);
        v2 = 0;
        if ( v6 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6);
          v2 = v7;
          if ( v7 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v7, 0x2A0u, 0LL);
        }
        if ( v2 < 0 )
          break;
      }
      v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 19);
      if ( ++v4 >= (unsigned int)(((char *)v3[19].Ptr - (char *)v3[18].Ptr) >> 3) )
        return (unsigned int)v2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v2, 0x70u, 0LL);
  }
  return (unsigned int)v2;
}
