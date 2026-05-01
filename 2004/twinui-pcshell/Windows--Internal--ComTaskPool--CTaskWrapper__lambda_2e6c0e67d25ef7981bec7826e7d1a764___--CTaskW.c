/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764_____lambda_2e6c0e67d25ef7981bec7826e7d1a764___ @ 0x18009251C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___ @ 0x180092A80 (Windows--Internal--ComTaskPool--QueueTask__lambda_2e6c0e67d25ef7981bec7826e7d1a764___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764_____lambda_2e6c0e67d25ef7981bec7826e7d1a764___(
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
  *a1 = off_1804916C8;
  return a1;
}
