/*
 * XREFs of PiDevCfgCopyObjectProperties @ 0x140768038
 * Callers:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1407676E0 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x1408A5B98 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A6BF8 (PiDevCfgInitDriverDatabaseCallback.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     _PnpOpenObjectRegKey @ 0x14062C674 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpGetGenericStoreProperty @ 0x14062CFEC (_PnpGetGenericStoreProperty.c)
 *     PiDevCfgSetObjectProperty @ 0x1407454AC (PiDevCfgSetObjectProperty.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x140976B08 (_PnpGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        SIZE_T NumberOfBytes,
        __int64 a6,
        unsigned int a7,
        void *a8,
        unsigned __int8 (__fastcall *a9)(char *, __int64),
        __int64 a10,
        int a11)
{
  __int64 v11; // rax
  int v14; // r14d
  int ObjectPropertyKeys; // eax
  int ObjectProperty; // ebx
  int v19; // r9d
  char *PoolWithTag; // r13
  int v21; // r9d
  int GenericStorePropertyKeys; // eax
  PVOID v23; // rdi
  int v24; // r14d
  __int64 v25; // r9
  unsigned int v26; // r12d
  HANDLE v27; // rcx
  int v28; // [rsp+28h] [rbp-69h]
  int v29; // [rsp+28h] [rbp-69h]
  int v30; // [rsp+30h] [rbp-61h]
  int v31; // [rsp+68h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-21h] BYREF
  __int64 v33; // [rsp+78h] [rbp-19h]
  HANDLE v34; // [rsp+80h] [rbp-11h] BYREF
  char *v35; // [rsp+88h] [rbp-9h]
  __int64 v36; // [rsp+90h] [rbp-1h]
  unsigned int v39; // [rsp+F0h] [rbp+5Fh] BYREF

  v11 = *(_QWORD *)&PiPnpRtlCtx;
  v36 = *(_QWORD *)&PiPnpRtlCtx;
  Handle = 0LL;
  v34 = 0LL;
  v14 = a2;
  v39 = 0;
  v31 = 1;
  LODWORD(NumberOfBytes) = 0;
  if ( !a4 )
  {
    ObjectProperty = PnpOpenObjectRegKey(a1, a2, a3, 33554433, 0, (__int64)&Handle);
    if ( ObjectProperty < 0 )
      goto LABEL_8;
    v11 = v36;
  }
  if ( a8 || (ObjectProperty = PnpOpenObjectRegKey(v11, a6, a7, 33554433, 0, (__int64)&v34), ObjectProperty >= 0) )
  {
    if ( a3 )
    {
      v19 = (int)Handle;
      if ( a4 )
        v19 = a4;
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(a1, v14, a3, v19, v28, 0, 0LL, 0, (__int64)&v39);
    }
    else
    {
      v29 = 0;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
    }
    ObjectProperty = ObjectPropertyKeys;
    if ( (int)(ObjectPropertyKeys + 0x80000000) < 0 || ObjectPropertyKeys == -1073741789 )
    {
      if ( !v39 )
      {
        ObjectProperty = 0;
        goto LABEL_8;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 20LL * v39, 0x63647050u);
      if ( !PoolWithTag )
      {
        ObjectProperty = -1073741670;
        goto LABEL_8;
      }
      if ( a3 )
      {
        v21 = (int)Handle;
        if ( a4 )
          v21 = a4;
        GenericStorePropertyKeys = PnpGetObjectPropertyKeys(
                                     a1,
                                     v14,
                                     a3,
                                     v21,
                                     v29,
                                     0,
                                     (__int64)PoolWithTag,
                                     v39,
                                     (__int64)&v39);
      }
      else
      {
        GenericStorePropertyKeys = PnpGetGenericStorePropertyKeys(a1, a4, 0LL, 0LL);
      }
      ObjectProperty = GenericStorePropertyKeys;
      if ( GenericStorePropertyKeys < 0 )
        goto LABEL_57;
      v33 = 256LL;
      v23 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x63647050u);
      if ( !v23 )
      {
        ObjectProperty = -1073741670;
LABEL_57:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_8;
      }
      v24 = 0;
      if ( !v39 )
      {
LABEL_55:
        if ( v23 )
          ExFreePoolWithTag(v23, 0);
        goto LABEL_57;
      }
      while ( 1 )
      {
        if ( a9 && !a9(&PoolWithTag[20 * v24], a10) )
          goto LABEL_51;
        if ( a3 )
        {
          v25 = (__int64)Handle;
          v26 = v33;
          if ( a4 )
            v25 = a4;
          v35 = &PoolWithTag[20 * v24];
          ObjectProperty = PnpGetObjectProperty(
                             a1,
                             a2,
                             a3,
                             v25,
                             0LL,
                             (__int64)v35,
                             (__int64)&v31,
                             (__int64)v23,
                             v33,
                             (__int64)&NumberOfBytes,
                             a11);
          if ( ObjectProperty == -1073741822 )
          {
            ObjectProperty = 0;
            goto LABEL_51;
          }
        }
        else
        {
          v26 = v33;
          v35 = &PoolWithTag[20 * v24];
          ObjectProperty = PnpGetGenericStoreProperty(
                             a1,
                             a4,
                             0LL,
                             (__int64)v35,
                             &v31,
                             (__int64)v23,
                             v33,
                             &NumberOfBytes);
        }
        if ( ObjectProperty == -1073741789 )
        {
          if ( (unsigned int)NumberOfBytes <= v26 )
          {
            ObjectProperty = -1073741595;
            goto LABEL_55;
          }
          ExFreePoolWithTag(v23, 0);
          v33 = (unsigned int)NumberOfBytes;
          v23 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x63647050u);
          if ( !v23 )
          {
            ObjectProperty = -1073741670;
            goto LABEL_55;
          }
          ObjectProperty = 0;
          --v24;
        }
        else
        {
          if ( ObjectProperty < 0 )
            goto LABEL_55;
          v27 = v34;
          if ( a8 )
            v27 = a8;
          ObjectProperty = PiDevCfgSetObjectProperty(
                             v36,
                             0LL,
                             a6,
                             a7,
                             (__int64)v27,
                             v30,
                             (__int64)v35,
                             v31,
                             (__int64)v23,
                             NumberOfBytes,
                             a11);
          if ( ObjectProperty == -1073741790 )
            ObjectProperty = 0;
          if ( ObjectProperty < 0 )
            goto LABEL_55;
        }
LABEL_51:
        if ( ++v24 >= v39 )
          goto LABEL_55;
      }
    }
  }
LABEL_8:
  if ( Handle )
    ZwClose(Handle);
  if ( v34 )
    ZwClose(v34);
  return (unsigned int)ObjectProperty;
}
