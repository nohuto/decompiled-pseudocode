/*
 * XREFs of ?OnMitMessageReceived@CursorNotificationProcessor@@CAJPEAXPEBXH@Z @ 0x18001AD60
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018FE0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x18001AE84 (--$_Destroy_range@V-$allocator@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Int.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180034F58 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180039FF0 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 *     ?ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z @ 0x18003A458 (-ProcessPositionChangedNotification@CursorNotificationProcessor@@AEAAJAEBUtagPOINT@@@Z.c)
 *     ?ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z @ 0x18003AC5C (-ReceiveCursorPos@ISM@InputTraceLogging@@SAX_KAEBUtagPOINT@@@Z.c)
 *     ?IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z @ 0x18003AEC0 (-IsTimestampNewest@CursorNotificationProcessor@@QEAA_N_J@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800B496C (--1-$vector@V-$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL.c)
 *     ?ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z @ 0x1800B4A60 (-ProcessOrientationChangeNotification@CursorNotificationProcessor@@AEAAJN@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorNotificationProcessor::OnMitMessageReceived(
        CursorNotificationProcessor *this,
        char *a2,
        unsigned int a3,
        const char *a4)
{
  LPVOID v6; // rax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // r8
  _QWORD *v10; // rbx
  _QWORD *v11; // rsi
  int v12; // eax
  int v14; // r10d
  const char *v15; // rax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-38h]
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-20h]
  __int64 v20; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 < 0x20 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x48,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursorno"
                    "tificationprocessor.cpp",
      a4);
    __debugbreak();
  }
  v6 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v6 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v6 + 1), 8LL) )
  {
    if ( *(_DWORD *)a2 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 1:
          v15 = "Position";
          break;
        case 2:
          v15 = "AppClip";
          break;
        case 3:
          v15 = "ShellClip";
          break;
        case 4:
          v15 = "SuppressCursor";
          break;
        case 5:
          v15 = "Orientation";
          break;
        default:
          v15 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v15 = "Visibility";
    }
    v22 = (__int64)v15;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v14,
      (__int64)&v22);
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( CursorNotificationProcessor::IsTimestampNewest(this, *((_QWORD *)a2 + 2)) )
      {
        InputTraceLogging::ISM::ReceiveCursorPos(*((_QWORD *)a2 + 2), (const struct tagPOINT *)a2 + 1);
        CursorNotificationProcessor::ProcessPositionChangedNotification(this, (const struct tagPOINT *)a2 + 1);
      }
    }
    else if ( *(_DWORD *)a2 == 2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, &v18);
      v10 = v18;
      v11 = v19;
      if ( v18 == v19 )
      {
LABEL_10:
        if ( v10 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>>(
            v10,
            v11,
            v9);
          std::_Deallocate<16,0>(v10, (const struct std::nothrow_t *)((v20 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF8uLL));
        }
      }
      else
      {
        while ( 1 )
        {
          v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v10 + 88LL))(*v10, a2 + 8);
          if ( v12 < 0 )
            break;
          if ( ++v10 == v11 )
          {
            v11 = v19;
            v10 = v18;
            goto LABEL_10;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v12,
          v17);
        std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>(&v18);
      }
    }
    else if ( *(_DWORD *)a2 != 3 )
    {
      if ( *(_DWORD *)a2 == 4 )
      {
        LOBYTE(v7) = *((_DWORD *)a2 + 2) != 0;
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 64LL))(*(_QWORD *)this, v7);
        if ( v16 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8A,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            (const char *)(unsigned int)v16,
            v17);
      }
      else
      {
        if ( *(_DWORD *)a2 != 5 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cu"
                          "rsornotificationprocessor.cpp",
            v8);
          __debugbreak();
        }
        CursorNotificationProcessor::ProcessOrientationChangeNotification(this, *((double *)a2 + 1));
      }
    }
  }
  else
  {
    CursorNotificationProcessor::ProcessVisibilityChangedNotification(this, *((_DWORD *)a2 + 2) != 0);
  }
  return 0LL;
}
