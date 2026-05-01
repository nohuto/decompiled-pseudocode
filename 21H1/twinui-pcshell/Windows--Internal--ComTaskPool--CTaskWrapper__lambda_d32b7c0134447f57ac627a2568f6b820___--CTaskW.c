/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820_____lambda_d32b7c0134447f57ac627a2568f6b820___ @ 0x1800A92F8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d32b7c0134447f57ac627a2568f6b820___ @ 0x1800A9408 (Windows--Internal--ComTaskPool--QueueTask__lambda_d32b7c0134447f57ac627a2568f6b820___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820_____lambda_d32b7c0134447f57ac627a2568f6b820___(
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
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1804718B0;
  return a1;
}
