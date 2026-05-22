/*
 * XREFs of ?BeginInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?GetTicks@PerfCounter@@YA_JXZ @ 0x18007DDCC (-GetTicks@PerfCounter@@YA_JXZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800C71EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??B_Atomic_llong@std@@QEBA_JXZ @ 0x18016A2B8 (--B_Atomic_llong@std@@QEBA_JXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::BeginInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ebx
  __int16 v14; // dx
  __int16 v15; // cx
  __int16 v16; // ax
  __int64 v17; // rbx
  PerfCounter *v18; // rcx
  char v19; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v21; // [rsp+40h] [rbp+8h] BYREF
  __int16 v22; // [rsp+44h] [rbp+Ch]
  __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 14);
  if ( *((_QWORD *)this + 15) != v2 )
  {
    v23 = *((_QWORD *)this + 14);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v23);
    v23 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = v2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v23);
    v2 = *((_QWORD *)this + 14);
  }
  try
  {
    v3 = (*(__int64 (**)(void))(*(_QWORD *)v2 + 56LL))();
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = *((_QWORD *)this + 14);
      WindowsDeleteString(*((HSTRING *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 40);
      v9 = v8;
      if ( v8 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
        v11 = -1LL;
        do
          ++v11;
        while ( StringRawBuffer[v11] );
        std::wstring::assign((char *)this + 128, StringRawBuffer, v11);
        v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14), &v21);
        v13 = v12;
        if ( v12 >= 0 )
        {
          v14 = HIWORD(v21);
          *((_WORD *)this + 83) = HIWORD(v21);
          v15 = v21;
          *((_WORD *)this + 82) = v21;
          v16 = v22;
          *((_WORD *)this + 84) = v22;
          *((_WORD *)this + 503) = v14;
          *((_WORD *)this + 502) = v15;
          *((_WORD *)this + 504) = v16;
          *((_DWORD *)this + 240) = *((_DWORD *)this + 2);
          *((_BYTE *)this + 1022) = -1;
          v17 = std::_Atomic_llong::operator __int64((__int64)this + 688);
          *((_QWORD *)this + 122) = *(_QWORD *)&PerfCounter::GetTicks(v18) - v17;
          if ( v21 != -16776961 || (v19 = 1, v22 != 2) )
            v19 = 0;
          *((_BYTE *)this + 456) = v19;
          if ( v19 )
            *((_BYTE *)this + 1013) = 1;
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x12D,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
            (const char *)(unsigned int)v12);
          result = v13;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12A,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
          (const char *)(unsigned int)v8);
        result = v9;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x128,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x142,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractions"
                                    "ourcecontroller.cpp",
                           v5);
  }
  return result;
}
