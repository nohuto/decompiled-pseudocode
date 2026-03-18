/*
 * XREFs of ?Initialize@CHolographicFrameProcessor@@AEAAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@II@Z @ 0x180259F30
 * Callers:
 *     ?Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z @ 0x180259D1C (-Create@CHolographicFrameProcessor@@SAJPEAVCComposition@@IPEAXW4DXGI_FORMAT@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB34 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z @ 0x180250324 (-AddWin32kInteropTexture@CHolographicManager@@QEAA_NPEAUIHolographicWin32kInteropTexture@@PEAX@Z.c)
 */

__int64 __fastcall CHolographicFrameProcessor::Initialize(
        CHolographicFrameProcessor *this,
        struct CComposition *a2,
        void *a3,
        void *a4,
        enum DXGI_FORMAT a5,
        unsigned int a6,
        unsigned int a7)
{
  signed int v8; // esi
  __int64 v10; // rax
  RTL_SRWLOCK *v11; // rcx
  RTL_SRWLOCK *v12; // rdx
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  signed int LastError; // eax
  __int64 v16; // rcx

  *((_DWORD *)this + 17) = a6;
  v8 = 0;
  *((_DWORD *)this + 18) = a7;
  *((_DWORD *)this + 16) = 87;
  *((_DWORD *)this + 28) = (_DWORD)a3;
  v10 = *((_QWORD *)a2 + 17);
  v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v11 != (RTL_SRWLOCK *)v10 )
  {
    v12 = v11;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 16));
      v12 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
    }
    *((_QWORD *)this + 6) = v10;
    v11 = (RTL_SRWLOCK *)v10;
    if ( v12 )
    {
      CDrawListEntry::Release((CDrawListEntry *)&v12[1]);
      v11 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
    }
  }
  if ( v11 )
  {
    CHolographicManager::AddWin32kInteropTexture(v11, (struct IUnknown *)this + 5, a3);
    SetLastError(0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 15,
      0LL);
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( !DuplicateHandle(v14, a4, CurrentProcess, (LPHANDLE)this + 15, 0, 0, 2u) )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( v8 >= 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v8, 0x44u, 0LL);
    }
  }
  else
  {
    v8 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147418113, 0x39u, 0LL);
  }
  return (unsigned int)v8;
}
