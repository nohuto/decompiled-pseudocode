/*
 * XREFs of IopDeviceObjectFromSymbolicName @ 0x140748FA4
 * Callers:
 *     IopGetSessionIdFromSymbolicName @ 0x140748F48 (IopGetSessionIdFromSymbolicName.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140779C10 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopDeviceObjectFromSymbolicName(__int64 a1)
{
  __int64 v1; // rdi
  __int64 Pool2; // rax
  WCHAR *v4; // r14
  int ObjectProperty; // ebx
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v8; // [rsp+A0h] [rbp+30h] BYREF
  int v9; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+40h] BYREF

  v1 = 0LL;
  v9 = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      if ( *(_WORD *)a1 )
      {
        if ( (int)PnpUnicodeStringToWstr(&v10, 0LL, a1) >= 0 )
        {
          v8 = 400;
          Pool2 = ExAllocatePool2(256LL, 400LL, 1198550608LL);
          v4 = (WCHAR *)Pool2;
          if ( Pool2 )
          {
            ObjectProperty = PnpGetObjectProperty(
                               PiPnpRtlCtx,
                               v10,
                               3,
                               0,
                               0LL,
                               (__int64)&DEVPKEY_Device_InstanceId,
                               (__int64)&v9,
                               Pool2,
                               v8,
                               (__int64)&v8,
                               0);
            PnpUnicodeStringToWstrFree(v10, a1);
            if ( ObjectProperty >= 0 && v9 == 18 && RtlInitUnicodeStringEx(&DestinationString, v4) >= 0 )
              v1 = PnpDeviceObjectFromDeviceInstanceWithTag(&DestinationString, 1953261124LL);
            ExFreePoolWithTag(v4, 0x47706E50u);
          }
        }
      }
    }
  }
  return v1;
}
