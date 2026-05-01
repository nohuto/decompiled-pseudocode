/*
 * XREFs of ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180013020
 * Callers:
 *     _lambda_ee5780e38ff7caddf53f6e29b0c55e5d_::operator() @ 0x180012CC8 (_lambda_ee5780e38ff7caddf53f6e29b0c55e5d_--operator().c)
 *     _lambda_af94cea4af3172141190cb0b728b3d6f_::operator() @ 0x180012E98 (_lambda_af94cea4af3172141190cb0b728b3d6f_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsCreateStorageItemFromPath_FullTrustCallerPresent @ 0x180045830 (IsCreateStorageItemFromPath_FullTrustCallerPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  HSTRING v6; // rcx
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 80);
  if ( !*(_QWORD *)(a1 + 80) )
  {
    if ( !(unsigned __int8)IsCreateStorageItemFromPath_FullTrustCallerPresent() )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)0x80004001LL);
      return 2147500033LL;
    }
    v6 = *(HSTRING *)(a1 + 72);
    v17 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
    v8 = CreateStorageItemFromPath_FullTrustCaller(
           StringRawBuffer,
           0LL,
           &GUID_fa3f6186_4214_428c_a64c_14c9ac7315ea,
           &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 308LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
        (const char *)(unsigned int)v8);
      v12 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
      }
      return v9;
    }
    v11 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v8 = (**v17)(v17, &GUID_86664478_8029_46fe_a789_1c2f3e2ffb5c, v2);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 310LL;
      goto LABEL_10;
    }
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
    }
  }
  v14 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *v2;
  if ( *v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v15 = *v2;
  }
  *a2 = v15;
  return 0LL;
}
