/*
 * XREFs of ?RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@W4GestureType@1@@Z @ 0x18017E8F0
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x18017C5EC (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPr.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044758 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180100A60 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18017CFF8 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall MagnifierGestureTarget::RuntimeClassInitialize(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  BamoPenEventsClientProxy *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(a1 + 16), a2);
  v8 = (BamoPenEventsClientProxy *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(a1 + 32) = a4;
  if ( BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired(v8) )
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)(a1 + 24), a3);
  v9 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (**(void (__fastcall ***)(__int64))(v9 + 16))(v9 + 16);
  }
  v10 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
