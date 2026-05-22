/*
 * XREFs of ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x18009E698
 * Callers:
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009BE60 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002E330 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A9C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x18003C868 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003C8D0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800894A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180090D60 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFFC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ??$make_unique@$$BY0A@G$0A@@std@@YA?AV?$unique_ptr@$$BY0A@GU?$default_delete@$$BY0A@G@std@@@0@_K@Z @ 0x18009E15C (--$make_unique@$$BY0A@G$0A@@std@@YA-AV-$unique_ptr@$$BY0A@GU-$default_delete@$$BY0A@G@std@@@0@_K.c)
 *     ??$make_unique@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@U?$default_delete@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@@std@@@0@_K@Z @ 0x18009E1C4 (--$make_unique@$$BY0A@U_HIDP_LINK_COLLECTION_NODE@@$0A@@std@@YA-AV-$unique_ptr@$$BY0A@U_HIDP_LIN.c)
 *     ??$make_unique@$$BY0A@U_HIDP_VALUE_CAPS@@$0A@@std@@YA?AV?$unique_ptr@$$BY0A@U_HIDP_VALUE_CAPS@@U?$default_delete@$$BY0A@U_HIDP_VALUE_CAPS@@@std@@@0@_K@Z @ 0x18009E22C (--$make_unique@$$BY0A@U_HIDP_VALUE_CAPS@@$0A@@std@@YA-AV-$unique_ptr@$$BY0A@U_HIDP_VALUE_CAPS@@U.c)
 */

__int64 __fastcall DockDevice::Initialize(DockDevice *this, struct DockDeviceInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  PHIDP_LINK_COLLECTION_NODE v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  int ObjectProperties; // eax
  unsigned int v13; // edx
  char v14; // al
  struct _HIDP_LINK_COLLECTION_NODE *v15; // rcx
  __int64 v16; // rax
  size_t *UserContext; // r8
  struct _HIDP_PREPARSED_DATA *v18; // r14
  int HIDCapabilities; // eax
  unsigned int v20; // ebx
  int v22; // eax
  PHIDP_LINK_COLLECTION_NODE v23; // rsi
  ULONG v24; // eax
  PHIDP_LINK_COLLECTION_NODE v25; // rbx
  NTSTATUS v26; // eax
  const struct std::nothrow_t *v27; // rdx
  int v28; // ecx
  PHIDP_LINK_COLLECTION_NODE v29; // rbx
  NTSTATUS SpecificValueCaps; // eax
  const struct std::nothrow_t *v31; // rdx
  PVOID *p_UserContext; // rcx
  NTSTATUS v33; // eax
  const char *PreparsedData; // [rsp+30h] [rbp-79h]
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-69h] BYREF
  PHIDP_LINK_COLLECTION_NODE LinkCollectionNodes; // [rsp+48h] [rbp-61h] BYREF
  USHORT v37[2]; // [rsp+50h] [rbp-59h] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+54h] [rbp-55h] BYREF
  __int128 v39; // [rsp+58h] [rbp-51h] BYREF
  __int128 v40; // [rsp+68h] [rbp-41h]
  __int64 v41; // [rsp+78h] [rbp-31h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+80h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 2);
  v5 = *((_QWORD *)this + 1);
  v39 = 0LL;
  LODWORD(v39) = 4;
  v40 = 0LL;
  v41 = 0LL;
  v6 = RIMGetDeviceProperties(v5, v4, &v39);
  if ( v6 >= 0 )
  {
    std::make_unique<unsigned short [0],0>(&LinkCollectionNodes, DWORD2(v39));
    v7 = LinkCollectionNodes;
    v8 = *((_QWORD *)this + 2);
    v9 = *((_QWORD *)this + 1);
    *(_QWORD *)&v40 = LinkCollectionNodes;
    v10 = RIMGetDeviceProperties(v9, v8, &v39);
    if ( v10 >= 0 )
    {
      if ( dword_18020A50C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_18020A50C);
        if ( dword_18020A50C == -1 )
        {
          dword_18020A3A8 = 2;
          *(_OWORD *)&xmmword_18020A398 = DEVPKEY_Device_PanelId;
          dword_18020A3AC = 0;
          qword_18020A3B0 = 0LL;
          Init_thread_footer(&dword_18020A50C);
        }
      }
      *(_DWORD *)ValueCapsLength = 0;
      LinkCollectionNodes = 0LL;
      ObjectProperties = DevGetObjectProperties(
                           1LL,
                           v7,
                           0LL,
                           1LL,
                           &xmmword_18020A398,
                           ValueCapsLength,
                           &LinkCollectionNodes);
      if ( ObjectProperties >= 0 )
      {
        v13 = 0;
        v14 = 1;
        if ( *(_DWORD *)ValueCapsLength )
        {
          while ( 1 )
          {
            v15 = &LinkCollectionNodes[2 * v13];
            if ( LODWORD(v15->UserContext) == 2 )
            {
              v16 = *(_QWORD *)&v15->LinkUsage - DEVPKEY_Device_PanelId;
              if ( *(_QWORD *)&v15->LinkUsage == (_QWORD)DEVPKEY_Device_PanelId )
                v16 = *(_QWORD *)&v15->NextSibling - *((_QWORD *)&DEVPKEY_Device_PanelId + 1);
              if ( !v16 && *(_DWORD *)&v15[1].NextSibling == 18 )
              {
                UserContext = (size_t *)v15[1].UserContext;
                if ( UserContext )
                  break;
              }
            }
            if ( ++v13 >= *(_DWORD *)ValueCapsLength )
            {
              v14 = 1;
              goto LABEL_19;
            }
          }
          v22 = StringCchCopyW((unsigned __int16 *)a2 + 774, 0x39uLL, UserContext);
          if ( v22 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              75LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
              (const char *)(unsigned int)v22);
            __debugbreak();
          }
          v14 = 0;
        }
LABEL_19:
        wil::details::in1diag3::Log_HrIfMsg(
          retaddr,
          (void *)0x51,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)0x80004005LL,
          v14,
          (bool)"Failed to populate panel ID.",
          PreparsedData);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          62LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)ObjectProperties);
      }
      v11 = (const struct std::nothrow_t *)LinkCollectionNodes;
      if ( LinkCollectionNodes )
        DevFreeObjectProperties(*(unsigned int *)ValueCapsLength);
    }
    else
    {
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x26,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( v7 )
      operator delete(v7, v11);
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x1E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)v6);
  }
  v18 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 6);
  LinkCollectionNodes = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities(
                      (PHIDP_PREPARSED_DATA *)this,
                      (struct _HIDP_CAPS **)&LinkCollectionNodes);
  v20 = HIDCapabilities;
  if ( HIDCapabilities >= 0 )
  {
    v23 = LinkCollectionNodes;
    v24 = WORD2(LinkCollectionNodes[1].UserContext);
    LinkCollectionNodesLength = v24;
    if ( (_WORD)v24 )
    {
      std::make_unique<_HIDP_LINK_COLLECTION_NODE [0],0>(&LinkCollectionNodes, v24);
      v25 = LinkCollectionNodes;
      v26 = HidP_GetLinkCollectionNodes(LinkCollectionNodes, &LinkCollectionNodesLength, v18);
      if ( v26 >= 0 )
      {
        v27 = (const struct std::nothrow_t *)LinkCollectionNodesLength;
        v28 = 0;
        if ( LinkCollectionNodesLength )
        {
          while ( v25[v28].LinkUsagePage != 1 || v25[v28].LinkUsage != 213 )
          {
            if ( ++v28 >= LinkCollectionNodesLength )
              goto LABEL_38;
          }
          *((_BYTE *)a2 + 1663) = 1;
          *((_WORD *)a2 + 832) = v28;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x64,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)v26);
      }
LABEL_38:
      if ( v25 )
        operator delete(v25, v27);
    }
    if ( *((_BYTE *)a2 + 1663) )
    {
      ValueCapsLength[0] = v23[2].LinkUsage;
      std::make_unique<_HIDP_VALUE_CAPS [0],0>(&LinkCollectionNodes, ValueCapsLength[0]);
      v29 = LinkCollectionNodes;
      SpecificValueCaps = HidP_GetSpecificValueCaps(
                            HidP_Input,
                            1u,
                            *((_WORD *)a2 + 832),
                            0,
                            (PHIDP_VALUE_CAPS)LinkCollectionNodes,
                            ValueCapsLength,
                            v18);
      if ( SpecificValueCaps >= 0 )
      {
        if ( ValueCapsLength[0] )
        {
          p_UserContext = &v29[1].UserContext;
          v31 = (const struct std::nothrow_t *)ValueCapsLength[0];
          do
          {
            if ( *((_WORD *)p_UserContext + 8) == 48 )
            {
              *((_DWORD *)a2 + 417) = *(_DWORD *)p_UserContext;
              *((_DWORD *)a2 + 419) = *((_DWORD *)p_UserContext + 1) + 1;
            }
            else if ( *((_WORD *)p_UserContext + 8) == 49 )
            {
              *((_DWORD *)a2 + 418) = *(_DWORD *)p_UserContext;
              *((_DWORD *)a2 + 420) = *((_DWORD *)p_UserContext + 1) + 1;
            }
            p_UserContext += 9;
            v31 = (const struct std::nothrow_t *)((char *)v31 - 1);
          }
          while ( v31 );
        }
      }
      else
      {
        wil::details::in1diag3::_Log_NtStatus(
          retaddr,
          (void *)0x7F,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
          (const char *)(unsigned int)SpecificValueCaps);
      }
      if ( v29 )
        operator delete(v29, v31);
    }
    memset_0(&ValueCaps, 0, sizeof(ValueCaps));
    v37[0] = 1;
    v33 = HidP_GetSpecificValueCaps(HidP_Input, 1u, 0, 0xD0u, &ValueCaps, v37, v18);
    if ( v33 >= 0 )
    {
      *((_BYTE *)a2 + 1662) = ValueCaps.ReportCount > 1u;
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x9D,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
               (const char *)(unsigned int)v33);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevice.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return v20;
  }
}
