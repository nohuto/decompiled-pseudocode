/*
 * XREFs of IopCaptureObjectName @ 0x140992FB8
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x140992920 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ObQueryNameString @ 0x1405D9580 (ObQueryNameString.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopCaptureObjectName(void *a1)
{
  _WORD *v1; // rbx
  _WORD *PoolWithTag; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-228h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-218h] BYREF

  ReturnLength[0] = 0;
  v1 = 0LL;
  if ( ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength) >= 0 )
  {
    if ( ObjectNameInfo.Name.Buffer )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, ObjectNameInfo.Name.Length + 2LL, 0x72775044u);
      v1 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, ObjectNameInfo.Name.Buffer, ObjectNameInfo.Name.Length);
        v1[(unsigned __int64)ObjectNameInfo.Name.Length >> 1] = 0;
      }
    }
  }
  return v1;
}
