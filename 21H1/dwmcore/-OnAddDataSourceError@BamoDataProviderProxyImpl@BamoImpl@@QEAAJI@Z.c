/*
 * XREFs of ?OnAddDataSourceError@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18018584C
 * Callers:
 *     ?OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z @ 0x180185800 (-OnAddDataSourceError@BamoDataProviderProxy@@UEAAJI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180184B60 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::OnAddDataSourceError(
        BamoImpl::BamoDataProviderProxyImpl *this,
        int a2)
{
  int v5; // eax
  unsigned int v6; // edi
  struct IMessageCallSendHost *v7; // rcx
  char *v8; // rax
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  _QWORD v11[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+18h] BYREF
  struct IMessageCallSendHost *v15; // [rsp+88h] [rbp+20h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL) + 56LL) )
  {
    v5 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(this, &v15, &v13, &v14);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v7 = v15;
      if ( *((_BYTE *)this + 31) )
      {
        v8 = (char *)v15 - 16;
        if ( !v15 )
          v8 = 0LL;
        v8[72] = 1;
      }
      v11[0] = v13;
      v11[1] = v14;
      LOWORD(v9) = 2;
      return CoreUICallSend(v7, v11, 2LL, 0LL, v9, &unk_1802D1365, a2, v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FD9,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD2,
      (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
