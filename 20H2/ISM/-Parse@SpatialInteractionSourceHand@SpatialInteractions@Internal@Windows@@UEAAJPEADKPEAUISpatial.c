/*
 * XREFs of ?Parse@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@34@_JAEBUMatrix4x4@Numerics@Foundation@4@3PEA_NPEAW4MPCAugmentedInputGestureType@@44@Z @ 0x1800E0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D0150 (-IsEnabled@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D415C (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 *     ?AddDefaultHandReport_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@@_JH@Z @ 0x1800DE6BC (-AddDefaultHandReport_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXU_GUID@.c)
 *     ?AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpatialGraphNodeReference@Holographic@34@AEBUMatrix4x4@Numerics@Foundation@4@2_NW4HandState@1234@@Z @ 0x1800DE7CC (-AddReport@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAAJ_J0PEAUISpati.c)
 *     ?ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ @ 0x1800E0FE0 (-ReadNextState@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@IEAA_NXZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::Parse(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        char *a2,
        __int64 a3,
        struct Windows::Internal::Holographic::ISpatialGraphNodeReference *a4,
        __int64 a5,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a6,
        __m128 *a7,
        bool *a8,
        enum MPCAugmentedInputGestureType *a9,
        bool *a10,
        bool *a11)
{
  char v13; // al
  int v14; // ebp
  bool v15; // di
  int v16; // edi
  char v17; // al
  __int64 v18; // rdx
  __int64 v20; // rdx
  __int64 v21; // rsi
  struct _GUID *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  SpatialInteractionDevices::SpatialInteractionTraceContinuous *v25; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-78h] BYREF
  struct _GUID v27; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v28[16]; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *a10 = 0;
  v13 = *((_BYTE *)this + 105);
  *((_BYTE *)this + 105) = 0;
  *a11 = v13 != 0;
  *(_DWORD *)a9 = 0;
  if ( *((_QWORD *)this + 11) && a4 )
  {
    v14 = *((_DWORD *)this + 64);
    v15 = *((_BYTE *)this + 272) != 0;
    if ( Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this) )
    {
      while ( 1 )
      {
        v16 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
                (__int64)this,
                *((_QWORD *)this + 30),
                a5,
                (__int64)a4,
                a6,
                a7,
                v15,
                v14);
        if ( v16 < 0 )
          break;
        v17 = *((_BYTE *)this + 272);
        v14 = *((_DWORD *)this + 64);
        *a10 = 1;
        v15 = v17 != 0;
        if ( !Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::ReadNextState(this) )
          goto LABEL_14;
      }
      v18 = 324LL;
      goto LABEL_8;
    }
    QueryPerformanceCounter(&PerformanceCount);
    v20 = 30 * qword_1802082F0 / 1000;
    v21 = PerformanceCount.QuadPart - v20;
    if ( *((_QWORD *)this + 31) < PerformanceCount.QuadPart - v20 )
    {
      v16 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::AddReport(
              (__int64)this,
              PerformanceCount.QuadPart - v20,
              a5,
              (__int64)a4,
              a6,
              a7,
              v15,
              v14);
      if ( v16 < 0 )
      {
        v18 = 345LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
          (const char *)(unsigned int)v16);
        return (unsigned int)v16;
      }
      v22 = (struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                              *((_QWORD *)this + 15),
                              v28);
      if ( SpatialInteractionDevices::SpatialInteractionTraceContinuous::IsEnabled(v23) )
      {
        v27 = *v22;
        wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
          v24,
          _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
        SpatialInteractionDevices::SpatialInteractionTraceContinuous::AddDefaultHandReport_(v25, &v27, v21, v14);
      }
    }
  }
LABEL_14:
  *a8 = *((_DWORD *)this + 64) == 3;
  return 0LL;
}
