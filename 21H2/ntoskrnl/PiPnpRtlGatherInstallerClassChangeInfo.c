/*
 * XREFs of PiPnpRtlGatherInstallerClassChangeInfo @ 0x140768D10
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x140768E44 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiDmAddCacheReferenceForObject @ 0x14076A3C4 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     PiDmGetObject @ 0x14077B0A4 (PiDmGetObject.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlGatherInstallerClassChangeInfo(__int64 a1, __int64 a2, PVOID *a3)
{
  __int64 Pool2; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v10; // eax
  int v11; // [rsp+60h] [rbp-98h] BYREF
  int v12; // [rsp+64h] [rbp-94h] BYREF
  __int128 v13; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v14[80]; // [rsp+80h] [rbp-78h] BYREF

  v12 = 0;
  v11 = 0;
  v13 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1198550608LL);
  *a3 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    Object = -1073741670;
LABEL_16:
    PiPnpRtlFreeInstallerClassChangeInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  if ( a2 )
  {
    Object = PiDmAddCacheReferenceForObject(2LL, a2, Pool2 + 16);
    if ( Object < 0 )
      goto LABEL_16;
  }
  Object = PiDmGetObject(1LL, a1, *a3);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_16;
  ObjectProperty = PnpGetObjectProperty(
                     PiPnpRtlCtx,
                     a1,
                     1,
                     0,
                     0LL,
                     (__int64)&DEVPKEY_Device_ClassGuid,
                     (__int64)&v12,
                     (__int64)&v13,
                     16,
                     (__int64)&v11,
                     0);
  Object = ObjectProperty;
  if ( ObjectProperty == -1073741275 || ObjectProperty == -1073741772 )
    return 0;
  if ( ObjectProperty < 0 )
    goto LABEL_16;
  Object = PnpStringFromGuid(&v13, v14);
  if ( Object < 0 )
    goto LABEL_16;
  v10 = PiDmGetObject(2LL, v14, (char *)*a3 + 8);
  Object = v10;
  if ( v10 == -1073741772 )
  {
    return 0;
  }
  else if ( v10 < 0 )
  {
    goto LABEL_16;
  }
  return (unsigned int)Object;
}
