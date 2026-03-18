/*
 * XREFs of ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01FFDE0
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C01FFE58 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0203160 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

void __fastcall DXGGLOBAL::RecordFeatureUsageWddmVersion(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax

  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(this, a2) )
  {
    v4 = *(_DWORD *)(v3 + 2692);
    if ( v4 > *((_DWORD *)this + 76213) )
    {
      Global = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v4);
      *((_DWORD *)this + 76213) = v4;
    }
    if ( v4 < *((_DWORD *)this + 76212) )
    {
      v6 = DXGGLOBAL_GetGlobal();
      DXGGLOBAL::RecordFeatureUsage(v6, 10LL, v4);
      *((_DWORD *)this + 76212) = v4;
    }
  }
}
