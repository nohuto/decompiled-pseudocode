/*
 * XREFs of ?AddItem@CDropFeedbackList@@UEAAJPEAUIDropFeedbackItem@@@Z @ 0x180421230
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180155124 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 */

__int64 __fastcall CDropFeedbackList::AddItem(CDropFeedbackList *this, struct IDropFeedbackItem *a2)
{
  void *v4; // r8
  __int64 v5; // rdx
  int v6; // edi
  __int64 *v7; // r8
  struct IDropFeedbackItem *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v5 = *((_QWORD *)this + 3);
  v6 = 0;
  if ( v5 != *((_QWORD *)this + 5)
    || (v6 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)this + 16,
               v5 + 1,
               v4),
        v6 >= 0) )
  {
    v7 = (__int64 *)(*((_QWORD *)this + 2) + 8 * (*((_QWORD *)this + 3))++);
    if ( v7 )
    {
      *v7 = 0LL;
      if ( v7 != (__int64 *)&v9 )
      {
        v9 = 0LL;
        *v7 = (__int64)a2;
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v6;
}
