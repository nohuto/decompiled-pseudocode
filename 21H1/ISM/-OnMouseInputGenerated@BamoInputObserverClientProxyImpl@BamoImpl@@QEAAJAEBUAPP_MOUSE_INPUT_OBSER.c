/*
 * XREFs of ?OnMouseInputGenerated@BamoInputObserverClientProxyImpl@BamoImpl@@QEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1800F3F0C
 * Callers:
 *     ?OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x1800F3EB0 (-OnMouseInputGenerated@BamoInputObserverClientProxy@@UEAAJAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038F40 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoInputObserverClientProxyImpl::OnMouseInputGenerated(
        BamoImpl::BamoInputObserverClientProxyImpl *this,
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a2)
{
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v13[2]; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v14[6]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  unsigned int v16; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v17; // [rsp+D0h] [rbp+77h] BYREF
  struct IMessageCallSendHost *v18; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v18, &v16, &v17);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v18;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v18 - 16;
        if ( !v18 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9 = *(_OWORD *)a2;
      v10 = *((_OWORD *)a2 + 1);
      v13[0] = v16;
      v13[1] = v17;
      v14[0] = v9;
      v11 = *((_OWORD *)a2 + 2);
      v14[1] = v10;
      v12 = *((_OWORD *)a2 + 3);
      v14[2] = v11;
      v14[3] = v12;
      return CoreUICallSend(v7, v13, 2LL, 39LL, 0, &unk_1801C022C, (unsigned int)v14);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E21,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E1A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
