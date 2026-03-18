/*
 * XREFs of ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4
 * Callers:
 *     ?AdvanceFrame@CDeviceManager@@IEAAXXZ @ 0x18007F334 (-AdvanceFrame@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180012218 (--$-4U-$default_delete@VCCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCCheckMPOCache@@U-$default_dele.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800218AC (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z @ 0x18007F718 (-ProcessPendingUnpin@CD3DDevice@@AEAAJ_N@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18007F844 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?CheckForDeviceLost@CD3DDevice@@AEAAJXZ @ 0x1800808A0 (-CheckForDeviceLost@CD3DDevice@@AEAAJXZ.c)
 *     ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1800808F0 (-CompactAtlases@CAtlasManager@@QEAAXXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800EC9E8 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F3678 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800FEE74 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::AdvanceFrame(CD3DDevice *this)
{
  __int64 v2; // rsi
  char v3; // r13
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 *v7; // r10
  __int64 *i; // rdx
  CCheckMPOCache **v9; // rbp
  CCheckMPOCache **v10; // rbx
  CCheckMPOCache **v11; // rdx
  PSLIST_ENTRY v12; // r14
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 CurrentFrameId; // rax
  CCheckMPOCache **k; // r14
  unsigned int j; // eax
  __int64 v18; // r9
  struct _SLIST_ENTRY *v19; // rbx
  char *v20; // rcx

  v2 = 0LL;
  if ( g_pComposition )
    v2 = *((_QWORD *)g_pComposition + 62);
  v3 = *((_BYTE *)this + 1507);
  if ( v2 != *((_QWORD *)this + 185) )
  {
    *((_BYTE *)this + 1507) = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 28) + 152LL))(
           *((_QWORD *)this + 28),
           *((_QWORD *)this + 72),
           v2);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, v4, 0x9Eu);
    CD3DDevice::TranslateDXGIorD3DErrorInContext(this, v6, 15LL);
    *((_QWORD *)this + 185) = v2;
    *((_BYTE *)this + 1507) = 0;
  }
  if ( *((_QWORD *)this + 184) != v2 )
  {
    *((_QWORD *)this + 184) = v2;
    CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CD3DDevice *)((char *)this + 464));
    v7 = (__int64 *)*((_QWORD *)this + 65);
    for ( i = (__int64 *)*((_QWORD *)this + 64); i != v7; ++i )
    {
      v14 = *i;
      if ( *(_DWORD *)(*i + 32) )
      {
        for ( j = 0; j < *(_DWORD *)(v14 + 24); ++j )
        {
          v18 = *(_QWORD *)(v14 + 16);
          if ( *(_QWORD *)(v18 + 8LL * j) == -1LL )
            *(_QWORD *)(v18 + 8LL * j) = 0LL;
        }
        *(_DWORD *)(v14 + 28) += *(_DWORD *)(v14 + 32);
        *(_DWORD *)(v14 + 32) = 0;
      }
    }
    v9 = (CCheckMPOCache **)*((_QWORD *)this + 182);
    v10 = (CCheckMPOCache **)*((_QWORD *)this + 181);
    if ( v10 != v9 )
    {
      CurrentFrameId = GetCurrentFrameId();
      do
      {
        if ( CurrentFrameId - *((_QWORD *)*v10 + 111) > 0x1E )
          break;
        ++v10;
      }
      while ( v10 != v9 );
      if ( v10 != v9 )
      {
        for ( k = v10 + 1; k != v9; ++k )
        {
          if ( GetCurrentFrameId() - *((_QWORD *)*k + 111) <= 0x1E )
            std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(v10++, k);
        }
      }
    }
    v11 = (CCheckMPOCache **)*((_QWORD *)this + 182);
    if ( v10 != v11 )
    {
      std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>(v10, v11);
      *((_QWORD *)this + 182) = v10;
    }
    CD3DDevice::ProcessPendingUnpin(this, 0);
    while ( 1 )
    {
      v12 = InterlockedFlushSList((PSLIST_HEADER)this + 70);
      if ( !v12 )
        break;
      do
      {
        v19 = v12 - 3;
        v12 = v12->Next;
        CD3DResourceManager::DestroyResource((CD3DDevice *)((char *)this + 1104), (struct CD3DResource *)v19);
        v20 = (char *)&v19->Next + *(int *)(*((_QWORD *)&v19->Next + 1) + 4LL) + 8;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v20 + 16LL))(v20);
      }
      while ( v12 );
    }
    if ( *((_QWORD *)this + 186) != v2 )
    {
      CAtlasManager::CompactAtlases((CD3DDevice *)((char *)this + 512));
      v3 = 1;
    }
  }
  if ( *((_BYTE *)this + 1507) )
  {
    CD3DDevice::Flush(this);
  }
  else if ( !v3 )
  {
    goto LABEL_20;
  }
  CD3DDevice::CheckForDeviceLost(this);
LABEL_20:
  result = *((unsigned int *)this + 272);
  if ( (int)result >= 0 )
  {
    if ( *((_BYTE *)this + 1508) )
    {
      CD3DDevice::Trim(this);
      return *((unsigned int *)this + 272);
    }
  }
  return result;
}
