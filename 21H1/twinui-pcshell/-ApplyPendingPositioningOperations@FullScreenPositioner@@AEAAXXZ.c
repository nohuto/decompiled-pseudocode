/*
 * XREFs of ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x180181388
 * Callers:
 *     ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x180182E40 (-OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18011C540 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??1positioningOperationInfo@@QEAA@XZ @ 0x180180FC4 (--1positioningOperationInfo@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x180184384 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall FullScreenPositioner::ApplyPendingPositioningOperations(FullScreenPositioner *this, volatile int *a2)
{
  _QWORD *v3; // rax
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  _QWORD *v7; // rax
  const void *v8; // rbx
  int v9; // eax
  __int64 v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int64 *v13; // [rsp+30h] [rbp+8h] BYREF
  const void *v14; // [rsp+38h] [rbp+10h] BYREF

  while ( *((_QWORD *)this + 42) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v3 )
      v3 = (_QWORD *)*v3;
    v4 = *(volatile signed __int64 **)(*(_QWORD *)(v3[1] + 8 * (*((_QWORD *)this + 41) & (v3[2] - 1LL))) + 8LL);
    v13 = v4;
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 8);
      while ( v5 >= 0 )
      {
        if ( (_DWORD)v5 != 0x7FFFFFFF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64(v4 + 8, v5 + 1, v5);
          if ( v6 != v5 )
            continue;
        }
        goto LABEL_11;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v5 + 16), a2);
LABEL_11:
      v4 = v13;
    }
    v7 = (_QWORD *)*((_QWORD *)this + 38);
    if ( v7 )
      v7 = (_QWORD *)*v7;
    v14 = **(const void ***)(v7[1] + 8 * (*((_QWORD *)this + 41) & (v7[2] - 1LL)));
    v8 = v14;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    FullScreenPositionerLogging::TraceLoggingInfo(
      "FullScreenPositioner - Applying pending positioning operation: %p for view: %p",
      (const void *)v4,
      v8);
    v9 = (*(__int64 (__fastcall **)(const void *, volatile signed __int64 *))(*(_QWORD *)v8 + 320LL))(v8, v4);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B9,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v9);
    positioningOperationInfo::~positioningOperationInfo(*(positioningOperationInfo **)(*((_QWORD *)this + 39)
                                                                                     + 8
                                                                                     * (*((_QWORD *)this + 41) & (*((_QWORD *)this + 40) - 1LL))));
    if ( (*((_QWORD *)this + 42))-- == 1LL )
      v11 = 0LL;
    else
      v11 = *((_QWORD *)this + 41) + 1LL;
    *((_QWORD *)this + 41) = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v13);
  }
}
