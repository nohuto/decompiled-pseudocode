/*
 * XREFs of ?OnTransitionStateChanged@FullScreenPositioner@@UEAAJ_K_J@Z @ 0x1801A6900
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180061618 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x1801A39B0 (--$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_54f720c39265b6e0938de84e9800a38e___ @ 0x1801A4318 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_54f720c39265b6e0938de84e9800a38e___.c)
 *     ?ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ @ 0x1801A4E48 (-ApplyPendingPositioningOperations@FullScreenPositioner@@AEAAXXZ.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801A7E44 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

__int64 __fastcall FullScreenPositioner::OnTransitionStateChanged(FullScreenPositioner *this, __int64 a2, __int64 a3)
{
  FullScreenPositioner *v4; // rdi
  volatile int *v5; // rdx
  __int64 *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v19; // [rsp+48h] [rbp+18h] BYREF
  __int64 *v20; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 != 4 || ((a3 - 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 || a3 == 3 )
    return 0LL;
  if ( *((_QWORD *)this + 19) )
  {
    FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Overlay window has finished fading in so apply all pending positioning operations.");
    v4 = (FullScreenPositioner *)((char *)this - 184);
    FullScreenPositioner::ApplyPendingPositioningOperations(v4, v5);
  }
  else
  {
    v4 = (FullScreenPositioner *)((char *)this - 184);
  }
  v19 = 0LL;
  v20 = &v19;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v20);
  v7 = Microsoft::WRL::AsWeak<IDWMStoryboardListener>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v4, v6);
  v10 = v7;
  if ( v7 >= 0 )
  {
    v13 = v19;
    v17[0] = v19;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v17[1] = v4;
    v10 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_54f720c39265b6e0938de84e9800a38e___(
            v13,
            v8,
            v9,
            v17);
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
    if ( v10 < 0 )
    {
      v11 = (unsigned int)v10;
      v12 = 960LL;
      goto LABEL_15;
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return 0LL;
  }
  v11 = (unsigned int)v7;
  v12 = 947LL;
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)v11);
  v14 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v10;
}
