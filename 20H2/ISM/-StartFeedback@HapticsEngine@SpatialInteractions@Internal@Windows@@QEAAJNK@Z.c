/*
 * XREFs of ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x18016F068
 * Callers:
 *     ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x18016EA90 (-SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?AddPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_J0NPEA_J@Z @ 0x18016A590 (-AddPulse@HapticsFilter@SpatialInteractions@Internal@Windows@@QEAAJ_J0NPEA_J@Z.c)
 *     ?UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z @ 0x18016FB20 (-UpdateFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAXN_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback(
        Windows::Internal::SpatialInteractions::HapticsEngine *this,
        double a2,
        unsigned int a3)
{
  __int64 v3; // rsi
  double v4; // xmm6_8
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  v16 = 0LL;
  v17 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 15) + 48LL))(*((_QWORD *)this + 15), &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 553LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\HapticsEngine.h",
      (const char *)(unsigned int)v7);
    goto LABEL_23;
  }
  if ( *((_BYTE *)this + 229) )
  {
    v10 = *((_QWORD *)this + 15);
    if ( (_DWORD)v3 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 64LL))(v10, v16 + 1000 * v3);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 559LL;
        goto LABEL_15;
      }
      *((_BYTE *)this + 231) = 1;
    }
    else
    {
      *((_BYTE *)this + 231) = 1;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 72LL))(v10);
    }
    Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(this, a2, v16);
  }
  else
  {
    v11 = 1000 * v3;
    v7 = Windows::Internal::SpatialInteractions::HapticsFilter::AddPulse(
           *((Windows::Internal::SpatialInteractions::HapticsFilter **)this + 14),
           v16,
           v11,
           a2,
           &v17);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 573LL;
      goto LABEL_15;
    }
    v12 = v17;
    if ( v17 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 64LL))(*((_QWORD *)this + 15), v17);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 576LL;
        goto LABEL_15;
      }
      *((_QWORD *)this + 24) = v12;
      if ( *((_BYTE *)this + 230) )
      {
        v4 = DOUBLE_1_0;
      }
      else if ( v11 )
      {
        v13 = *((_QWORD *)this + 25);
        if ( v11 < v13 )
          v4 = (double)(int)v11 / (double)(int)v13 * a2;
      }
      Windows::Internal::SpatialInteractions::HapticsEngine::UpdateFeedback(this, v4, v16);
      *((_BYTE *)this + 231) = 1;
    }
  }
  v8 = 0;
LABEL_23:
  if ( v6 )
    LeaveCriticalSection(v6);
  return v8;
}
