/*
 * XREFs of ?TailButtonClicked@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x1801347DC
 * Callers:
 *     ?TailButtonClicked@BamoPenEventsClientProxy@@UEAAJ_N@Z @ 0x180134780 (-TailButtonClicked@BamoPenEventsClientProxy@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180038DB0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoPenEventsClientProxyImpl::TailButtonClicked(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        unsigned __int8 a2)
{
  int v2; // esi
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  _QWORD v9[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+88h] [rbp+20h] BYREF

  v2 = a2;
  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v13, &v11, &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v13;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v13 - 16;
        if ( !v13 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v9[0] = v11;
      v9[1] = v12;
      return CoreUICallSend(v7, v9, 2LL, 52LL, 0, &unk_1801C01AD, v2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5A0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB599,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
