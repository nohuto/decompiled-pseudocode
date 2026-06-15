/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a_____lambda_87f555b56693a8b4c492a05e321e535a___ @ 0x180072F14
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_87f555b56693a8b4c492a05e321e535a___ @ 0x180073180 (Windows--Internal--ComTaskPool--QueueTask__lambda_87f555b56693a8b4c492a05e321e535a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180036A78 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a_____lambda_87f555b56693a8b4c492a05e321e535a___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  v4 = *a2;
  *a2 = 0LL;
  a1[2] = v4;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[3] = a2[1];
  a1[4] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  *a1 = &off_18014C268;
  return a1;
}
