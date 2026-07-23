/*
 * XREFs of PiPnpRtlGatherInterfaceDeleteInfo @ 0x1407330A4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140734B50 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlGatherInterfaceDeleteInfo(__int64 a1, __int64 **a2)
{
  void *v2; // rsi
  __int64 *PoolWithTag; // rax
  int Object; // ebx
  int ObjectProperty; // eax
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+60h] [rbp-49h] BYREF
  __int64 v12; // [rsp+68h] [rbp-41h] BYREF
  __int128 v13; // [rsp+70h] [rbp-39h] BYREF
  wchar_t v14[40]; // [rsp+80h] [rbp-29h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    Object = PiDmGetObject(3LL, a1, *a2);
    if ( (int)(Object + 0x80000000) < 0 || Object == -1073741772 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1,
                         3LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceInterface_ClassGuid,
                         (__int64)&v11 + 4,
                         (__int64)&v13,
                         16,
                         (__int64)&v11,
                         0);
      Object = ObjectProperty;
      if ( ObjectProperty == -1073741772
        || ObjectProperty == -1073741275
        || ObjectProperty >= 0
        && (PnpStringFromGuid((int *)&v13, v14) < 0
         || (Object = PiDmGetObject(4LL, (__int64)v14, *a2 + 1), (int)(Object + 0x80000000) < 0)
         || Object == -1073741772) )
      {
        v8 = PnpGetObjectProperty(
               0x47706E50u,
               0xC8uLL,
               a1,
               3,
               0LL,
               0LL,
               (__int64)&DEVPKEY_Device_InstanceId,
               (__int64)&v11 + 4,
               (PVOID *)&v12,
               &v11,
               0);
        v2 = (void *)v12;
        Object = v8;
        if ( v8 == -1073741772
          || v8 == -1073741275
          || v8 >= 0
          && ((Object = PiDmGetObject(1LL, v12, *a2 + 2), (int)(Object + 0x80000000) < 0) || Object == -1073741772) )
        {
          v9 = PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 a1,
                 3LL,
                 0LL,
                 0LL,
                 (__int64)&DEVPKEY_Device_ContainerId,
                 (__int64)&v11 + 4,
                 (__int64)&v13,
                 16,
                 (__int64)&v11,
                 0);
          Object = v9;
          if ( v9 == -1073741772 || v9 == -1073741275 )
          {
            Object = 0;
            goto LABEL_21;
          }
          if ( v9 >= 0 )
          {
            Object = PnpStringFromGuid((int *)&v13, v14);
            if ( Object >= 0 )
            {
              Object = PiDmGetObject(5LL, (__int64)v14, *a2 + 3);
              if ( Object == -1073741772 )
              {
                Object = 0;
                goto LABEL_18;
              }
LABEL_21:
              if ( Object >= 0 )
                goto LABEL_18;
            }
          }
        }
      }
    }
  }
  else
  {
    Object = -1073741670;
  }
  PiPnpRtlFreeInterfaceDeleteInfo(*a2);
  *a2 = 0LL;
LABEL_18:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x47706E50u);
  return (unsigned int)Object;
}
