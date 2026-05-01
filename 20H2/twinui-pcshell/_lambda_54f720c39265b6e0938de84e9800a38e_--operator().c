/*
 * XREFs of _lambda_54f720c39265b6e0938de84e9800a38e_::operator() @ 0x1801A4AA4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_54f720c39265b6e0938de84e9800a38e___::Run @ 0x1801A7280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_54f720c39265b6e0938de84e9800a38e___--Run.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003A3E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1801A7E44 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_54f720c39265b6e0938de84e9800a38e_::operator()(Microsoft::WRL::WeakRef *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF
  struct IInspectable *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v2 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v7);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( v7 )
    {
      FullScreenPositionerLogging::TraceLoggingInfo("FullScreenPositioner - Fading out overlay window now that time allowed for view repositioning is up.");
      (*(void (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)a1 + 1) + 296LL) + 40LL))(
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 296LL),
        *(_QWORD *)(*((_QWORD *)a1 + 1) + 344LL),
        &v6);
    }
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B7,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return v3;
}
