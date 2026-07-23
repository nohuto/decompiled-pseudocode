/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x14076FE3C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     PiDmAddCacheReferenceForObject @ 0x140748B68 (PiDmAddCacheReferenceForObject.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140771FEC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, wchar_t *a2, __int64 **a3)
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
    Object = PiDmAddCacheReferenceForObject(2u, a2, (volatile signed __int32 **)*a3 + 2);
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
