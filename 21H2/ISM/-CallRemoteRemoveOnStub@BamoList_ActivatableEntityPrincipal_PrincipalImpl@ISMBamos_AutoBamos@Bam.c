/*
 * XREFs of ?CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x180002E38
 * Callers:
 *     ?BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180004990 (-BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18003FD88 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteRemoveOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        int a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v4; // rcx
  unsigned int v5; // ebx
  struct IMessageCallSendHost *SendHost; // r10
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+20h] [rbp-38h]
  __int16 v12; // [rsp+20h] [rbp-38h]
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a1 + 5);
  if ( !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 32LL) + 56LL) )
  {
    v5 = -2018375660;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD240,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL,
      v9);
    goto LABEL_8;
  }
  if ( *((_BYTE *)a1 + 32) )
  {
    SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v4);
    v8 = *((_QWORD *)a1 + 3);
    v13[0] = *(unsigned int *)(*((_QWORD *)a1 + 5) + 36LL);
    v13[1] = *(unsigned int *)(v8 + 24);
    v12 = 1;
    v5 = CoreUICallSend(SendHost, v13, 2LL, 71LL, v12, &unk_1801C01AA, a2);
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
    {
LABEL_8:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD1C1,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)v5,
        v10);
      JUMPOUT(0x180002F51LL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x122,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoStub.inl",
      (const char *)0x87B20805LL,
      v9);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD247,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20805LL,
      v11);
  }
  return 0LL;
}
