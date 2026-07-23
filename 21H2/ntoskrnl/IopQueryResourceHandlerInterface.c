/*
 * XREFs of IopQueryResourceHandlerInterface @ 0x14075258C
 * Callers:
 *     IoTranslateBusAddress @ 0x14050CF80 (IoTranslateBusAddress.c)
 *     IopSetupArbiterAndTranslators @ 0x140751FDC (IopSetupArbiterAndTranslators.c)
 *     IopDuplicateDetection @ 0x1407AF274 (IopDuplicateDetection.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopQueryResourceHandlerInterface(int a1, struct _DEVICE_OBJECT *a2, unsigned __int8 a3, _QWORD *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 v6; // r13
  int v9; // ecx
  GUID v10; // xmm0
  unsigned __int16 v11; // bx
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  int v14; // ebx
  int v16; // ecx
  int v17; // edi
  bool v18; // zf
  _QWORD v19[9]; // [rsp+30h] [rbp-39h] BYREF
  GUID v20; // [rsp+78h] [rbp+Fh] BYREF

  DeviceObjectExtension = a2->DeviceObjectExtension;
  v6 = a3;
  v20 = 0LL;
  if ( (struct _DRIVER_OBJECT *)*((_QWORD *)DeviceObjectExtension->DeviceNode + 54) == a2->DriverObject
    || (a2->Flags & 0x1000) == 0 )
  {
    return 3221225659LL;
  }
  v9 = a1 - 1;
  if ( v9 )
  {
    v16 = v9 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return 3221225485LL;
      v10 = GUID_LEGACY_DEVICE_DETECTION_STANDARD;
      v11 = 40;
    }
    else
    {
      v10 = GUID_ARBITER_INTERFACE_STANDARD;
      v11 = 48;
    }
  }
  else
  {
    v10 = GUID_TRANSLATOR_INTERFACE_STANDARD;
    v11 = 52;
  }
  v20 = v10;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x20207050u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v11);
    *(_WORD *)v13 = v11;
    memset(v19, 0, sizeof(v19));
    LOWORD(v19[0]) = 2075;
    LOWORD(v19[2]) = v11;
    v19[1] = &v20;
    *((_WORD *)v13 + 1) = 0;
    WORD1(v19[2]) = 0;
    v19[3] = v13;
    v19[4] = v6;
    v14 = IopSynchronousCall(a2, (__int64)v19, -1073741637, 0LL, 0LL);
    if ( v14 < 0 )
      goto LABEL_7;
    v17 = a1 - 1;
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        v14 = -1073741811;
        goto LABEL_7;
      }
      v18 = v13[4] == 0LL;
    }
    else
    {
      if ( !v13[4] )
      {
LABEL_21:
        v14 = -1073741823;
LABEL_15:
        if ( v14 >= 0 )
        {
          *a4 = v13;
          return (unsigned int)v14;
        }
LABEL_7:
        ExFreePoolWithTag(v13, 0);
        return (unsigned int)v14;
      }
      v18 = v13[5] == 0LL;
    }
    if ( !v18 )
      goto LABEL_15;
    goto LABEL_21;
  }
  return 3221225626LL;
}
