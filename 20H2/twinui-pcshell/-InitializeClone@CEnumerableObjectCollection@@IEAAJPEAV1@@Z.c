/*
 * XREFs of ?InitializeClone@CEnumerableObjectCollection@@IEAAJPEAV1@@Z @ 0x18014D448
 * Callers:
 *     ?Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014909C (-Clone@CEnumerableObjectCollection@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CEnumerableObjectCollection::InitializeClone(
        CEnumerableObjectCollection *this,
        struct CEnumerableObjectCollection *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  int v4; // eax
  int v7; // ebx
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  v2 = *((int *)this + 12);
  v3 = (_QWORD *)((char *)a2 + 40);
  v4 = *((_DWORD *)this + 7);
  if ( v4 <= (int)v2 )
    v4 = *((_DWORD *)this + 12);
  v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
         (char *)a2 + 40,
         v4);
  if ( v7 >= 0 )
  {
    v8 = v2;
    v9 = 0LL;
    do
    {
      if ( v9 >= v8 )
        break;
      v10 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
      if ( v10 )
      {
        v11 = v3[1];
        v7 = 0;
        if ( v11 != v3[3]
          || (v7 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                     v3,
                     v11 + 1),
              v7 >= 0) )
        {
          v12 = (_QWORD *)(*v3 + 8 * v3[1]++);
          if ( v12 )
            *v12 = v10;
        }
        if ( v7 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
          *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
          *((_DWORD *)a2 + 8) = *((_DWORD *)this + 8);
        }
      }
      else
      {
        v7 = -2147418113;
      }
      ++v9;
    }
    while ( v7 >= 0 );
  }
  return (unsigned int)v7;
}
