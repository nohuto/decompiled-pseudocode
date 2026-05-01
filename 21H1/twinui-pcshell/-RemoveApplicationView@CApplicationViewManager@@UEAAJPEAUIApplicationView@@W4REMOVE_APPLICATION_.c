/*
 * XREFs of ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180028660 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180141A20 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoT.c)
 *     _lambda_3752109e28d6ea02fd1f915d996064c2_::operator() @ 0x18016A32C (_lambda_3752109e28d6ea02fd1f915d996064c2_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewManager::RemoveApplicationView(RTL_SRWLOCK *a1, __int64 a2, int a3)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 v5; // rdi
  RTL_SRWLOCK *v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *Ptr; // rax
  int v9; // edi
  _QWORD v11[3]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+38h] [rbp-10h]
  __int64 v13; // [rsp+70h] [rbp+28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+30h] BYREF
  int v15; // [rsp+80h] [rbp+38h] BYREF
  RTL_SRWLOCK *v16; // [rsp+88h] [rbp+40h]

  v15 = a3;
  v14 = a2;
  v11[0] = &v15;
  v11[1] = &v14;
  v11[2] = a1 - 17;
  v12 = 1;
  v4 = a1 + 67;
  v16 = a1 + 67;
  AcquireSRWLockExclusive(a1 + 67);
  v5 = v14;
  v13 = v14;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  v6 = a1 + 68;
  v7 = 0LL;
  if ( a1[69].Ptr )
  {
    Ptr = v6->Ptr;
    while ( *Ptr != v5 )
    {
      ++v7;
      ++Ptr;
      if ( (PVOID)v7 >= a1[69].Ptr )
        goto LABEL_5;
    }
    v9 = CTSimpleArray<Microsoft::WRL::ComPtr<IApplicationView>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IApplicationView>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IApplicationView>>>::RemoveAt(
           v6,
           v7);
  }
  else
  {
LABEL_5:
    v9 = -2147319765;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( v9 >= 0 )
  {
    CApplicationViewManager::RaiseApplicationViewChanged((__int64)a1, v14, 1u, 0LL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v9 = 0;
  }
  else if ( v4 )
  {
    ReleaseSRWLockExclusive(v4);
  }
  v12 = 0;
  lambda_3752109e28d6ea02fd1f915d996064c2_::operator()((__int64)v11);
  return (unsigned int)v9;
}
