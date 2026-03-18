/*
 * XREFs of ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C017C020
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017B218 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C017C098 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0196DF0 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

void __fastcall DXGGLOBAL::RecordFeatureUsageWddmVersion(DXGGLOBAL *this, struct DXGADAPTER *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v7; // rax

  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage(this, a2) )
  {
    v5 = *(_DWORD *)(v3 + 2596);
    if ( v5 > *((_DWORD *)this + 76151) )
    {
      Global = DXGGLOBAL::GetGlobal(v4, v3);
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v5);
      *((_DWORD *)this + 76151) = v5;
    }
    if ( v5 < *((_DWORD *)this + 76150) )
    {
      v7 = DXGGLOBAL::GetGlobal(v4, v3);
      DXGGLOBAL::RecordFeatureUsage(v7, 10LL, v5);
      *((_DWORD *)this + 76150) = v5;
    }
  }
}
