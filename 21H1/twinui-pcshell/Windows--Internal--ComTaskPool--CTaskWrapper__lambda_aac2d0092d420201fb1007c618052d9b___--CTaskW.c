/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___ @ 0x1802A6A7C
 * Callers:
 *     ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x1802A7438 (-NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b___::CTaskWrapper__lambda_aac2d0092d420201fb1007c618052d9b_____lambda_aac2d0092d420201fb1007c618052d9b___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_18048DFF8;
  return a1;
}
