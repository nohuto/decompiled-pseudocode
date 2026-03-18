/*
 * XREFs of ?ResolveHandle@DxgkCompositionObject@@SAJPEAXKDW4DxgkCompositionObjectType@@PEAPEAV1@@Z @ 0x1C0005B0C
 * Callers:
 *     NtQueryCompositionSurfaceFrameRate @ 0x1C0002340 (NtQueryCompositionSurfaceFrameRate.c)
 *     ?DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z @ 0x1C0005290 (-DxgkReferenceCompositionObject@@YAJPEAXKW4DxgkCompositionObjectType@@DPEAPEAX@Z.c)
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0005868 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C00059B8 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00770AC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077458 (-NotifyPendingFlipManagerPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C007C0E8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z @ 0x1C03519B4 (-ResolveHandle@DXGVAILOBJECT@@SAJPEAXKDPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkCompositionObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID Object)
{
  _QWORD *v5; // rsi
  struct _OBJECT_TYPE *v8; // r8
  NTSTATUS v9; // edi
  PVOID v10; // rbx

  v5 = Object;
  v8 = g_pDxgkCompositionObjectType;
  *(_QWORD *)Object = 0LL;
  Object = 0LL;
  v9 = ObReferenceObjectByHandle(a1, a2, v8, a3, &Object, 0LL);
  if ( v9 >= 0 )
  {
    v10 = Object;
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == a4 )
    {
      *v5 = v10;
    }
    else
    {
      ObfDereferenceObject(v10);
      return (unsigned int)-1073741788;
    }
  }
  return (unsigned int)v9;
}
