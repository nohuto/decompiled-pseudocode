/*
 * XREFs of McTemplateU0jjt_EventWriteTransfer @ 0x180132DF0
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180132ADC (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180132D8C (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0jjt_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+40h] [rbp-48h]
  __int64 v8; // [rsp+48h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-38h]
  __int64 v10; // [rsp+58h] [rbp-30h]
  __int64 *v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]

  v9 = a4;
  v11 = &a5;
  v7 = a3;
  v8 = 16LL;
  v10 = 16LL;
  v12 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, a3, 4u, &v6);
}
