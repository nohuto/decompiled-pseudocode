/*
 * XREFs of ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009F064 (-SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::OnTargetWithFocusChanged(
        LampArrayRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int32 v4; // edx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  struct LampArrayEndpoint *v8; // r14
  _DWORD *i; // rax
  struct LampArrayDevice **j; // rbx
  __int64 v12; // rdx
  int active; // eax
  unsigned int v14; // r15d
  ULONG UserDataCount; // [rsp+20h] [rbp-79h]
  __int32 v16; // [rsp+30h] [rbp-69h] BYREF
  __int64 v17; // [rsp+38h] [rbp-61h] BYREF
  __int32 v18; // [rsp+40h] [rbp-59h] BYREF
  _DWORD v19[3]; // [rsp+44h] [rbp-55h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-49h] BYREF
  const char *v21; // [rsp+60h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  void *v23; // [rsp+80h] [rbp-19h]
  int v24; // [rsp+88h] [rbp-11h]
  int v25; // [rsp+8Ch] [rbp-Dh]
  const char *v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  _DWORD *v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]
  __int32 *v30; // [rsp+B0h] [rbp+17h]
  __int64 v31; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0;
  v16 = 0;
  if ( !a3 )
    goto LABEL_7;
  v17 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 269LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v5,
      UserDataCount);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v17);
    return v6;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int32 *))(*(_QWORD *)v17 + 32LL))(v17, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 271LL;
    goto LABEL_16;
  }
  v7 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v4 = v16;
LABEL_7:
  v8 = 0LL;
  for ( i = (_DWORD *)*((_QWORD *)this + 8); i != (_DWORD *)((char *)this + 64); i = *(_DWORD **)i )
  {
    if ( i[6] == v4 )
    {
      v8 = (struct LampArrayEndpoint *)(i + 4);
      break;
    }
  }
  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    v18 = v4;
    v19[0] = *((_DWORD *)this + 8);
    v21 = "FocusChanged";
    v30 = &v18;
    v31 = 4LL;
    v28 = v19;
    v29 = 4LL;
    v26 = "FocusChanged";
    v27 = 13LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_1802053F8;
    UserData.Size = *(unsigned __int16 *)off_1802053F8;
    UserData.Reserved = 2;
    v23 = &unk_1801C9C1F;
    v24 = 91;
    v25 = 1;
    v19[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    v4 = v16;
  }
  _InterlockedExchange((volatile __int32 *)this + 8, v4);
  for ( j = (struct LampArrayDevice **)*((_QWORD *)this + 5); ; j = (struct LampArrayDevice **)*j )
  {
    if ( j == (struct LampArrayDevice **)((char *)this + 40) )
      return 0LL;
    active = LampArrayRawInputProvider::SetActiveViewClient((LampArrayRawInputProvider *)((char *)this - 8), j[2], v8);
    v14 = active;
    if ( active < 0 )
      break;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x122,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
    (const char *)(unsigned int)active,
    UserDataCount);
  return v14;
}
