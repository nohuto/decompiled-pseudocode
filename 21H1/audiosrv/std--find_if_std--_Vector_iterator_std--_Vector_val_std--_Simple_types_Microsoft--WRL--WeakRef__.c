/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800CE26C
 * Callers:
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D042C (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CDF9C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CE008 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v6; // rsi
  bool v8; // r14
  __int64 v9; // rcx
  _QWORD *result; // rax
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF

  v6 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v11 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v6, &v11) < 0 )
        goto LABEL_7;
      if ( v11 )
        break;
LABEL_9:
      v8 = 0;
LABEL_10:
      if ( !v8 && ++v6 != a3 )
        continue;
      goto LABEL_12;
    }
    v12 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v11, &v12) >= 0 )
    {
      v8 = v12 == *a4;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
      Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)&v11);
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
LABEL_7:
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_9;
  }
LABEL_12:
  result = a1;
  *a1 = v6;
  return result;
}
