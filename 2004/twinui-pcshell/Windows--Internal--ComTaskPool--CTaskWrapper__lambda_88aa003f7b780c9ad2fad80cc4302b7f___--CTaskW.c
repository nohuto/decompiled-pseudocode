/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f_____lambda_88aa003f7b780c9ad2fad80cc4302b7f___ @ 0x180284A5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_88aa003f7b780c9ad2fad80cc4302b7f___ @ 0x180285424 (Windows--Internal--ComTaskPool--QueueTask__lambda_88aa003f7b780c9ad2fad80cc4302b7f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f___::CTaskWrapper__lambda_88aa003f7b780c9ad2fad80cc4302b7f_____lambda_88aa003f7b780c9ad2fad80cc4302b7f___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_1804AE038;
  return a1;
}
