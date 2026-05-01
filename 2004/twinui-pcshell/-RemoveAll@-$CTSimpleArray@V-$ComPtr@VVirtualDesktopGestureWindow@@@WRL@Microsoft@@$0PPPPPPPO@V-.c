/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VVirtualDesktopGestureWindow@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180444D7C
 * Callers:
 *     ??_GVirtualDesktopGestureContext@@QEAAPEAXI@Z @ 0x180442D5C (--_GVirtualDesktopGestureContext@@QEAAPEAXI@Z.c)
 *     ?Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ @ 0x1804458A0 (-Uninitialize@VirtualDesktopGestureContext@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006B380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<VirtualDesktopGestureWindow>>>::RemoveAll(
        __int64 a1,
        volatile int *a2)
{
  _QWORD *v3; // rcx
  unsigned __int64 i; // rdi
  __int64 v5; // rax

  v3 = *(_QWORD **)a1;
  if ( v3 )
  {
    for ( i = 0LL; i < *(_QWORD *)(a1 + 8); ++i )
    {
      v3 = *(_QWORD **)a1;
      v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      if ( v5 )
      {
        v3[i] = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(
          v5 + 16,
          a2);
        v3 = *(_QWORD **)a1;
      }
    }
    CoTaskMemFree(v3);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
