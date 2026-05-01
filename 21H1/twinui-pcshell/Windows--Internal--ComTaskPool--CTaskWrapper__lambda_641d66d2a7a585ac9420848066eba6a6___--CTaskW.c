/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x180091C20
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___ @ 0x180092214 (Windows--Internal--ComTaskPool--QueueTask__lambda_641d66d2a7a585ac9420848066eba6a6___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6_____lambda_641d66d2a7a585ac9420848066eba6a6___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_18046D6C0;
  return a1;
}
