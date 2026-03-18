/*
 * XREFs of ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001DB4
 * Callers:
 *     ?DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01586A0 (-DxgkpDelayPresentCddPrimary@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0158B10 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 *     DxgkRender @ 0x1C01592B0 (DxgkRender.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     DxgkPresent @ 0x1C0181EB0 (DxgkPresent.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C018ED80 (DxgkPresentMultiPlaneOverlay3.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkGetSharedPrimaryHandle @ 0x1C02D1520 (DxgkGetSharedPrimaryHandle.c)
 *     ?DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z @ 0x1C02DC4C0 (-DxgkCddPresent@@YAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAD@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C030F8B4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     DxgkSubmitPresentToHwQueue @ 0x1C0313260 (DxgkSubmitPresentToHwQueue.c)
 *     DxgkPresentMultiPlaneOverlay @ 0x1C031A190 (DxgkPresentMultiPlaneOverlay.c)
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C031AAA0 (DxgkPresentMultiPlaneOverlay2.c)
 *     OutputDuplPresent @ 0x1C0325430 (OutputDuplPresent.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        char a5)
{
  void *v8; // rcx
  unsigned int v9; // r9d
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  if ( a3 <= 4 )
  {
    v8 = (void *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    if ( a3 )
      memset(v8, 0, 8LL * a3);
    goto LABEL_4;
  }
  v10 = 0LL;
  v9 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / a3 >= 8 )
  {
    *(_QWORD *)a1 = ExAllocatePool2(256LL, 8LL * a3, 1265072196LL, 0LL);
LABEL_4:
    *(_DWORD *)(a1 + 40) = a3;
    v9 = a3;
    v10 = *(void **)a1;
  }
  *(_WORD *)(a1 + 48) = 1;
  if ( v10 )
  {
    memmove(v10, a2, 8LL * v9);
    qsort(*(void **)a1, *(unsigned int *)(a1 + 40), 8uLL, DxgkComparePointers);
    v11 = 1LL;
    v12 = *(unsigned int *)(a1 + 40);
    while ( v11 < v12 )
    {
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8 * v11) == *(_QWORD *)(*(_QWORD *)a1 + 8 * v11 - 8) )
        return a1;
      ++v11;
    }
    if ( a5 )
    {
      v13 = 0LL;
      if ( (_DWORD)v12 )
      {
        do
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)a1 + 8 * v13++) + 448LL));
        while ( v13 < *(unsigned int *)(a1 + 40) );
      }
      *(_BYTE *)(a1 + 49) = 1;
    }
    *(_BYTE *)(a1 + 48) = 0;
  }
  return a1;
}
