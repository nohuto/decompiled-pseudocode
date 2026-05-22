/*
 * XREFs of ?SetTimeoutMicroseconds@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJ_J@Z @ 0x18016F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SetTimeoutMicroseconds(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        __int64 a2)
{
  LONGLONG v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  v4 = 1000000 * PerformanceCount.QuadPart / qword_180209328;
  if ( a2 > v4 )
    v5 = a2 - v4;
  else
    v5 = 1LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = *((_QWORD *)this + 10);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 11);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, char *))(*(_QWORD *)v6 + 56LL))(
         v6,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
         10 * v5,
         (char *)this + 88);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v7);
  if ( this != (Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return v8;
}
