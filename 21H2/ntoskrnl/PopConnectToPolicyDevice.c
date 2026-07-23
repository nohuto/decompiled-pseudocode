/*
 * XREFs of PopConnectToPolicyDevice @ 0x1407C4888
 * Callers:
 *     PopNotifyPolicyDevice @ 0x1407C4800 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x1408F1730 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402F76C0 (IoAllocateIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     RtlCompareUnicodeString @ 0x1406DDA80 (RtlCompareUnicodeString.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4A14 (PopGetPolicyDeviceObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  const UNICODE_STRING **v5; // rdi
  const UNICODE_STRING *i; // rbx
  SIZE_T v7; // rbx
  PVOID *PoolWithTag; // rax
  PVOID *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v11; // rbx
  PIRP Irp; // rax
  PVOID v13; // r14
  IRP *v14; // rbp
  PVOID *v15; // rax
  PVOID **v16; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&PopPolicyDeviceParameters + 32 * a1);
  v5 = (const UNICODE_STRING **)*((_QWORD *)v4 + 1);
  for ( i = *v5; i != (const UNICODE_STRING *)v5; i = *(const UNICODE_STRING **)&i->Length )
  {
    if ( !RtlCompareUnicodeString(i + 2, a2, 1u) )
      return;
  }
  v7 = *v4 + a2->Length;
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, v7, v4[1]);
  Context = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v7);
    Context[5] = (char *)Context + *v4;
    *((_WORD *)Context + 17) = a2->Length;
    RtlCopyUnicodeString((PUNICODE_STRING)Context + 2, a2);
    *((_DWORD *)Context + 4) = a1;
    PolicyDeviceObject = PopGetPolicyDeviceObject(Context + 4, &EventCategoryData);
    v11 = (PDRIVER_OBJECT *)PolicyDeviceObject;
    if ( PolicyDeviceObject )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
      v13 = EventCategoryData;
      v14 = Irp;
      if ( Irp )
      {
        if ( IoRegisterPlugPlayNotification(
               EventCategoryTargetDeviceChange,
               0,
               EventCategoryData,
               v11[1],
               PopPolicyDeviceTargetChange,
               Context,
               Context + 3) >= 0 )
        {
          Context[6] = v11;
          Context[7] = v14;
          (*((void (__fastcall **)(PVOID *))v4 + 2))(Context);
          v15 = (PVOID *)*((_QWORD *)v4 + 1);
          v16 = (PVOID **)v15[1];
          if ( *v16 != v15 )
            __fastfail(3u);
          *Context = v15;
          v14 = 0LL;
          Context[1] = v16;
          v11 = 0LL;
          *v16 = Context;
          v15[1] = Context;
          Context = 0LL;
        }
        if ( v14 )
          IoFreeIrp(v14);
      }
      if ( v11 )
        ObfDereferenceObjectWithTag(v11, 0x64506F50u);
      if ( v13 )
        ObfDereferenceObjectWithTag(v13, 0x64506F50u);
    }
    if ( Context )
      ExFreePoolWithTag(Context, v4[1]);
  }
}
