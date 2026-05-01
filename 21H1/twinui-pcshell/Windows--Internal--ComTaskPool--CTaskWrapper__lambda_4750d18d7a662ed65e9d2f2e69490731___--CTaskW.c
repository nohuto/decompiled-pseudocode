/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731_____lambda_4750d18d7a662ed65e9d2f2e69490731___ @ 0x180091BBC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4750d18d7a662ed65e9d2f2e69490731___ @ 0x180092184 (Windows--Internal--ComTaskPool--QueueTask__lambda_4750d18d7a662ed65e9d2f2e69490731___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731___::CTaskWrapper__lambda_4750d18d7a662ed65e9d2f2e69490731_____lambda_4750d18d7a662ed65e9d2f2e69490731___(
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
  *a1 = off_18046D698;
  return a1;
}
