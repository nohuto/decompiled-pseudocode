/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800443F0
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001FC90 (Windows--Internal--COperationLambdaVar_0__lambda_5419d15aea592e4e2e8a2c756ed1e634___ea_18001FC90.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_ad7bd321257e919ed278c75d322da1b6__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::_scalar_deleting_destructor_ @ 0x18001FD20 (Windows--Internal--COperationLambdaVar_0__lambda_ad7bd321257e919ed278c75d322da1b6___ea_18001FD20.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_95a85cc3153b2a32da5e8f8bf20a59f3__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::_scalar_deleting_destructor_ @ 0x18001FDD0 (Windows--Internal--COperationLambdaVar_0__lambda_95a85cc3153b2a32da5e8f8bf20a59f3___ea_18001FDD0.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x18002634C (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800264D0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a3795b8e063e319a63f5a3b15bc55068__Windows::Internal::CBasicResult_unsigned_char_0___::_scalar_deleting_destructor_ @ 0x180032FD0 (Windows--Internal--COperationLambdaVar_0__lambda_a3795b8e063e319a63f5a3b15bc55068___ea_180032FD0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_acc50cdcc647f1c6139b5dbd513a51e9__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x180033040 (Windows--Internal--COperationLambdaVar_0__lambda_acc50cdcc647f1c6139b5dbd513a51e9___ea_180033040.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_de700cff19afa60d1ddedf7e1b11adba__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x1800330B0 (Windows--Internal--COperationLambdaVar_0__lambda_de700cff19afa60d1ddedf7e1b11adba___ea_1800330B0.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003B770 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3___ea_18003B770.c)
 *     Windows::Internal::COperationLambdaVar_0__lambda_a569043095cd2854b0f9a8a791add160__Windows::Internal::CNoResult_::_scalar_deleting_destructor_ @ 0x18003C3A0 (Windows--Internal--COperationLambdaVar_0__lambda_a569043095cd2854b0f9a8a791add160___ea_18003C3A0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180044464 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
