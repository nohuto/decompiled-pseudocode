/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85_____lambda_0b319f3d3637979846fb79d489373d85___ @ 0x18040E7DC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_0b319f3d3637979846fb79d489373d85___ @ 0x18040EE44 (Windows--Internal--ComTaskPool--QueueTask__lambda_0b319f3d3637979846fb79d489373d85___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85___::CTaskWrapper__lambda_0b319f3d3637979846fb79d489373d85_____lambda_0b319f3d3637979846fb79d489373d85___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

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
  v5 = a2 + 3;
  a2[2] = 0LL;
  a1[5] = 0LL;
  if ( a1 + 5 != a2 + 3 )
  {
    a1[5] = *v5;
    *v5 = 0LL;
  }
  *a1 = off_1804A67B8;
  return a1;
}
