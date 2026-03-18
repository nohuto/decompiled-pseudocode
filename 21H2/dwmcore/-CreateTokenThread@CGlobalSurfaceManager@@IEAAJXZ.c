/*
 * XREFs of ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x18002DA98
 * Callers:
 *     ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x18002D910 (-Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003DB7C (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::CreateTokenThread(CGlobalSurfaceManager *this)
{
  HANDLE *v1; // rbx
  HANDLE Thread; // rax
  HANDLE v3; // rcx
  unsigned int v4; // ebx

  if ( *((_BYTE *)this + 496) )
  {
    v4 = -2147467260;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147467260, 0x143u, 0LL);
  }
  else
  {
    v1 = (HANDLE *)((char *)this + 440);
    Thread = CreateThread(0LL, 0LL, CGlobalSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      Thread);
    v3 = *v1;
    if ( (((unsigned __int64)*v1 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      SetThreadDescription(v3, L"DWM Token Thread");
      SetThreadPriority(*v1, 15);
      ResumeThread(*v1);
      return 0;
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v3, 0LL, 0, -2147024882, 0x14Eu, 0LL);
    }
  }
  return v4;
}
