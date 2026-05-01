/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507___::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507_____lambda_699ed6b2b7b76f9a4c3ea034ba222507___ @ 0x18039C3EC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___ @ 0x18039C524 (Windows--Internal--ComTaskPool--QueueTask__lambda_699ed6b2b7b76f9a4c3ea034ba222507___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507___::CTaskWrapper__lambda_699ed6b2b7b76f9a4c3ea034ba222507_____lambda_699ed6b2b7b76f9a4c3ea034ba222507___(
        __int64 a1,
        _OWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_OWORD *)(a1 + 16) = *a2;
  v4 = a2 + 1;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_OWORD *)(a1 + 32) != a2 + 1 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  v5 = (_QWORD *)a2 + 3;
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (_OWORD *)(a1 + 40) != (_OWORD *)((char *)a2 + 24) )
  {
    *(_QWORD *)(a1 + 40) = *v5;
    *v5 = 0LL;
  }
  *(_QWORD *)a1 = off_1804BF2C8;
  return a1;
}
