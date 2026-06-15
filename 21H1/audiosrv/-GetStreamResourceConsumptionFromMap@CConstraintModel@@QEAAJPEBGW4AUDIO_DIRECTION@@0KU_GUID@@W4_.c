/*
 * XREFs of ?GetStreamResourceConsumptionFromMap@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013AA10
 * Callers:
 *     ?GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013A93C (-GetStreamResourceConsumption@CConstraintModel@@QEAAJPEBGW4AUDIO_DIRECTION@@U_GUID@@W4__MIDL___M.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180139B84 (--0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_.c)
 *     ?GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013A760 (-GetResourceConsumptionFromMap@CConstraintModel@@AEAAJPEAVResourceConsumer@@PEAKPEAPEAU_Resource.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::GetStreamResourceConsumptionFromMap(
        CConstraintModel *a1,
        char *a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        struct _GUID *a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        unsigned int *a8,
        struct _ResourceInfo **a9)
{
  struct _GUID v11; // [rsp+30h] [rbp-3F8h] BYREF
  _BYTE v12[976]; // [rsp+40h] [rbp-3E8h] BYREF

  *a9 = 0LL;
  *a8 = 0;
  v11 = *a6;
  StreamResourceConsumer::StreamResourceConsumer((StreamResourceConsumer *)v12, a2, a4, a5, &v11, a7);
  return CConstraintModel::GetResourceConsumptionFromMap(a1, (struct ResourceConsumer *)v12, a8, a9);
}
