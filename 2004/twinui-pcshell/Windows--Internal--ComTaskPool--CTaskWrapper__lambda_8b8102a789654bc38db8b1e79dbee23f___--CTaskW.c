/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f_____lambda_8b8102a789654bc38db8b1e79dbee23f___ @ 0x18029DCE8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___ @ 0x18029F21C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_8b8102a789654bc38db8b1e79dbee23f___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f___::CTaskWrapper__lambda_8b8102a789654bc38db8b1e79dbee23f_____lambda_8b8102a789654bc38db8b1e79dbee23f___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  *a1 = off_1804B1AE0;
  return a1;
}
