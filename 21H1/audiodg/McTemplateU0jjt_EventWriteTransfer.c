/*
 * XREFs of McTemplateU0jjt_EventWriteTransfer @ 0x140048E50
 * Callers:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140009B30 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x140046A04 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0jjt_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+30h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-1h] BYREF
  __int64 v7; // [rsp+50h] [rbp+Fh]
  __int64 v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  __int64 v10; // [rsp+68h] [rbp+27h]
  int *v11; // [rsp+70h] [rbp+2Fh]
  __int64 v12; // [rsp+78h] [rbp+37h]

  v9 = a4;
  v5 = 0;
  v11 = &v5;
  v7 = a3;
  v8 = 16LL;
  v12 = 4LL;
  v10 = 16LL;
  return McGenEventWrite_EventWriteTransfer(0LL, &EVT_SYSTEM_EFFECT_APO_INITIALIZED, a3, 4u, &v6);
}
