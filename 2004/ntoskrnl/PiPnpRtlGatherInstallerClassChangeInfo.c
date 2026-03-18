/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x140733A90
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1405D750C (_PnpStringFromGuid.c)
 *     PiDmGetObject @ 0x1405DA3BC (PiDmGetObject.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140733C28 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmAddCacheReferenceForObject @ 0x1407357C4 (PiDmAddCacheReferenceForObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 *PoolWithTag; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v10; // [rsp+60h] [rbp-98h] BYREF
  int v11; // [rsp+64h] [rbp-94h] BYREF
  int v12[6]; // [rsp+68h] [rbp-90h] BYREF
  wchar_t v13[40]; // [rsp+80h] [rbp-78h] BYREF

  v11 = 0;
  v10 = 0;
  *(_OWORD *)v12 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x47706E50u);
  *a3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
    goto LABEL_10;
  }
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0LL;
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2LL, a2, *a3 + 2);
    if ( Object < 0 )
      goto LABEL_10;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_10;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)&v11,
                     (__int64)v12,
                     16,
                     (__int64)&v10,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
  {
    Object = 0;
  }
  else
  {
    if ( ObjectProperty < 0 )
      goto LABEL_10;
    Object = PnpStringFromGuid(v12, v13);
    if ( Object < 0 )
      goto LABEL_10;
    Object = PiDmGetObject(2LL, (__int64)v13, *a3 + 1);
    if ( Object == -1073741772 )
      return 0;
  }
  if ( Object < 0 )
  {
LABEL_10:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
  }
  return (unsigned int)Object;
}
