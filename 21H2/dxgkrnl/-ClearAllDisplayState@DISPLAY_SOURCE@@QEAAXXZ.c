/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C8D28
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C7600 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BFA44 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C2744 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C0195D10 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C01C6684 (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01C8E24 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C01C8E88 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C01DBB4C (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C02C1D34 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  struct DXGGLOBAL *Global; // rax

  for ( i = 0; i < *((_DWORD *)this + 940); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1144);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v4 = *(int *)v3;
      if ( (_DWORD)v4 == -1 )
      {
        WdLogSingleEntry1(1LL, 9004LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
          9004LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        WdLogSingleEntry1(1LL, 9005LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
          9005LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      memset((char *)v3 + 80 * v4 + 8, 0, 0x50uLL);
      v5 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)v3 == (_DWORD)v4 )
      {
        if ( v5 == (_DWORD)v4 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v4);
        }
      }
      else if ( v5 == (_DWORD)v4 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v4);
      }
    }
  }
  *((_DWORD *)this + 940) = 0;
  *((_BYTE *)this + 3768) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2824)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2824), *((_DWORD *)this + 706));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL_GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0LL);
}
