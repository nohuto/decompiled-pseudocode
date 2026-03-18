/*
 * XREFs of sub_1C00033C0 @ 0x1C00033C0
 * Callers:
 *     sub_1C0005CF0 @ 0x1C0005CF0 (sub_1C0005CF0.c)
 *     sub_1C0006460 @ 0x1C0006460 (sub_1C0006460.c)
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C0038550 @ 0x1C0038550 (sub_1C0038550.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

NTSTATUS __fastcall sub_1C00033C0(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rdx
  __int64 v3; // rcx
  unsigned __int16 *v4; // rdi
  ULONG_PTR v5; // r14
  IRP *v6; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v9; // r8
  PVOID v10; // rdx
  __int64 v11; // rcx
  struct _IO_STACK_LOCATION *v12; // rax

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 18, (__int64)"FKh&");
  if ( (dword_1C006B268 & 4) != 0 )
  {
    if ( !DeviceObject )
      goto LABEL_23;
    DeviceExtension = DeviceObject->DeviceExtension;
    if ( DeviceExtension )
    {
      v3 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v3 = 1047622249;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  if ( !DeviceObject )
    goto LABEL_23;
  v4 = (unsigned __int16 *)DeviceObject->DeviceExtension;
  if ( !v4 )
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  v5 = *((_QWORD *)v4 + 334);
  v6 = (IRP *)*((_QWORD *)v4 + 333);
  if ( !v5 || !v6 )
LABEL_23:
    sub_1C002DC78(DeviceObject, DeviceObject);
  *(_QWORD *)(v5 + 8) = 0LL;
  *(_DWORD *)v5 = 589952;
  *(_QWORD *)(v5 + 24) = *((_QWORD *)v4 + 330);
  *(_DWORD *)(v5 + 32) = 2;
  *(_DWORD *)(v5 + 36) = v4[1316];
  *(_QWORD *)(v5 + 40) = *((_QWORD *)v4 + 335);
  sub_1C001D340(*((_QWORD *)v4 + 335), 0LL, v4[1316]);
  *(_QWORD *)(v5 + 48) = 0LL;
  IoInitializeIrp(v6, 72 * *(char *)(*((_QWORD *)v4 + 151) + 76LL) + 208, *(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL));
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v5;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement((volatile signed __int32 *)v4 + 678) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v6, sub_1C0019BF0, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v12 = v6->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = sub_1C0019BF0;
      v12[-1].Context = DeviceObject;
      v12[-1].Control = -32;
    }
    result = IofCallDriver(*((PDEVICE_OBJECT *)v4 + 151), v6);
    v9 = result;
    if ( (dword_1C006B268 & 4) != 0 )
    {
      v10 = DeviceObject->DeviceExtension;
      if ( v10 )
      {
        result = 1047621993;
        v11 = *((_QWORD *)v10 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
        *(_DWORD *)v11 = 1047621993;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v9;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  else
  {
    sub_1C000FD80((_DWORD)DeviceObject, 4, 1769042750, 0, 0LL);
    _InterlockedDecrement((volatile signed __int32 *)v4 + 678);
    return KeSetEvent((PRKEVENT)v4 + 112, 0, 0);
  }
  return result;
}
