/*
 * XREFs of ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01778FC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C0177974 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0186C20 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
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
    v5 = *(_DWORD *)(v3 + 2572);
    if ( v5 > *((_DWORD *)this + 76121) )
    {
      Global = DXGGLOBAL::GetGlobal(v4, v3);
      DXGGLOBAL::RecordFeatureUsage(Global, 11LL, v5);
      *((_DWORD *)this + 76121) = v5;
    }
    if ( v5 < *((_DWORD *)this + 76120) )
    {
      v7 = DXGGLOBAL::GetGlobal(v4, v3);
      DXGGLOBAL::RecordFeatureUsage(v7, 10LL, v5);
      *((_DWORD *)this + 76120) = v5;
    }
  }
}
