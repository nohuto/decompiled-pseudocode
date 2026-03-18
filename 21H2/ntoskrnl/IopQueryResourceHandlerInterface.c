/*
 * XREFs of IopQueryResourceHandlerInterface @ 0x140821918
 * Callers:
 *     IoTranslateBusAddress @ 0x1405604A0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x14081F788 (IopDuplicateDetection.c)
 *     IopSetupArbiterAndTranslators @ 0x140821364 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IopSynchronousCall @ 0x14074CA9C (IopSynchronousCall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopQueryResourceHandlerInterface(int a1, struct _DEVICE_OBJECT *a2, unsigned __int8 a3, _QWORD *a4)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 v6; // r12
  int v9; // ecx
  GUID v10; // xmm0
  unsigned __int16 v11; // bx
  _WORD *Pool2; // rax
  _WORD *v13; // rsi
  int v14; // ebx
  int v16; // ecx
  int v17; // edi
  _QWORD v18[9]; // [rsp+30h] [rbp-39h] BYREF
  GUID v19; // [rsp+78h] [rbp+Fh] BYREF

  DeviceObjectExtension = a2->DeviceObjectExtension;
  v6 = a3;
  v19 = 0LL;
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
  v19 = v10;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, v11, 538996816LL);
  v13 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v11;
    memset(v18, 0, sizeof(v18));
    LOWORD(v18[0]) = 2075;
    v18[1] = &v19;
    LOWORD(v18[2]) = v11;
    v13[1] = 0;
    WORD1(v18[2]) = 0;
    v18[3] = v13;
    v18[4] = v6;
    v14 = IopSynchronousCall(a2, (__int64)v18, -1073741637, 0LL, 0LL);
    if ( v14 < 0 )
    {
LABEL_7:
      ExFreePoolWithTag(v13, 0);
      return (unsigned int)v14;
    }
    v17 = a1 - 1;
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        v14 = -1073741811;
        goto LABEL_7;
      }
      if ( !*((_QWORD *)v13 + 4) )
      {
        v14 = -1073741823;
        goto LABEL_7;
      }
    }
    else if ( !*((_QWORD *)v13 + 4) || !*((_QWORD *)v13 + 5) )
    {
      v14 = -1073741823;
      goto LABEL_7;
    }
    *a4 = v13;
    return (unsigned int)v14;
  }
  return 3221225626LL;
}
