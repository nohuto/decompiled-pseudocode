/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcdff22f78a8ccb3bef514f85cb2b95c___::CTaskWrapper__lambda_fcdff22f78a8ccb3bef514f85cb2b95c_____lambda_fcdff22f78a8ccb3bef514f85cb2b95c___ @ 0x1800AE23C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_fcdff22f78a8ccb3bef514f85cb2b95c___ @ 0x1800AE72C (Windows--Internal--ComTaskPool--QueueTask__lambda_fcdff22f78a8ccb3bef514f85cb2b95c___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fcdff22f78a8ccb3bef514f85cb2b95c___::CTaskWrapper__lambda_fcdff22f78a8ccb3bef514f85cb2b95c_____lambda_fcdff22f78a8ccb3bef514f85cb2b95c___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_180494820;
  return a1;
}
