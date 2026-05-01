/*
 * XREFs of ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___ @ 0x18039334C
 * Callers:
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180395384 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1801552D4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb__&_void___&_ @ 0x18039356C (Microsoft--WRL--Details--Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58b.c)
 *     ?_HasListenerID@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@AEAA_NPEAX@Z @ 0x180395124 (-_HasListenerID@-$ObservableProperty@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Int.c)
 */

__int64 __fastcall ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 *ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb____void; // rax
  void *v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 *v12; // r8
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  v16 = a3;
  if ( a3
    && (unsigned __int8)ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::_HasListenerID(
                          a1,
                          a3) )
  {
    v5 = -2147024809;
    v6 = 75LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ObservableProperty.h",
      (const char *)(unsigned int)v5);
    goto LABEL_16;
  }
  ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb____void = (__int64 *)Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb____void_____(&v17, a2, &v16);
  v5 = 0;
  v9 = *ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb____void;
  *ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb_____lambda_f388ba99653cfb86d5d2a92c071f58bb____void = 0LL;
  v10 = a1[4];
  if ( v10 != a1[6]
    || (v5 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
               (__int64)(a1 + 3),
               v10 + 1,
               v8),
        v11 = v9,
        v5 >= 0) )
  {
    ++a1[4];
    v11 = v9;
    v12 = (__int64 *)(a1[3] + 8 * (a1[4] - 1LL));
    if ( v12 )
    {
      *v12 = 0LL;
      if ( v12 != &v16 )
      {
        *v12 = v9;
        v9 = 0LL;
        v11 = 0LL;
      }
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v5 < 0 )
  {
    v6 = 76LL;
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (unsigned int)v5;
}
