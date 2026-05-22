/*
 * XREFs of ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x180030E38
 * Callers:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x1800148C0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800167F0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180001E60 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18003056C (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x180031700 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800683B0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
struct ISMBamos_AutoBamos::BamoConnection **__fastcall InputSystemServerConnection::Create(
        struct ISMBamos_AutoBamos::BamoConnection **a1,
        __int64 a2)
{
  const char *v4; // r9
  __int64 (__fastcall *v5)(__int64, PSECURITY_DESCRIPTOR, __int64 *); // rbx
  int v6; // eax
  int v7; // r9d
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  InputSystem *v10; // rax
  InputSystem *v11; // rbx
  struct ISMBamos_AutoBamos::BamoConnection *v12; // rsi
  __int64 v13; // rcx
  int v15; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+20h] [rbp-30h]
  InputSystem *v17; // [rsp+40h] [rbp-10h] BYREF
  int v18; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+80h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      v4);
LABEL_11:
    wil::details::in1diag3::FailFast_Hr(
      v8,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v6,
      v15);
    __debugbreak();
  }
  v20 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64 *))(*(_QWORD *)a2 + 64LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v20);
  v6 = v5(a2, SecurityDescriptor, &v20);
  v8 = retaddr;
  if ( v6 < 0 )
    goto LABEL_11;
  *a1 = 0LL;
  v18 = 1;
  v17 = 0LL;
  v9 = Microsoft::Bamo::BaseBamoConnection::CreateServer<InputSystemServerConnection>(
         a2,
         v20,
         (unsigned int)&v17,
         v7,
         (__int64)a1);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\inputsystemserverconnection.cpp",
      (const char *)(unsigned int)v9,
      v16);
    __debugbreak();
  }
  v17 = (InputSystem *)operator new(0xB0uLL);
  v10 = InputSystem::InputSystem(v17, *a1);
  v11 = v10;
  v12 = *a1;
  if ( *((InputSystem **)*a1 + 23) != v10 )
  {
    v17 = v10;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
    v13 = *((_QWORD *)v12 + 23);
    *((_QWORD *)v12 + 23) = v11;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v20);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return a1;
}
