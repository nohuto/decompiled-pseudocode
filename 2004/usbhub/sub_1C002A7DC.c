/*
 * XREFs of sub_1C002A7DC @ 0x1C002A7DC
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0016CA0 @ 0x1C0016CA0 (sub_1C0016CA0.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 *     sub_1C002E8F0 @ 0x1C002E8F0 (sub_1C002E8F0.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0053050 @ 0x1C0053050 (sub_1C0053050.c)
 */

NTSTATUS __fastcall sub_1C002A7DC(PDEVICE_OBJECT DeviceObject, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  PDEVICE_OBJECT *v6; // r13
  _DWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdi
  PIO_SECURITY_CONTEXT SecurityContext; // rbp
  unsigned __int8 *SecurityQos; // r14
  int v12; // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rax
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v20 = 0;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E62C(::DeviceObject->DeviceExtension, 0, 1, 17, (__int64)&unk_1C0062088, BugCheckParameter3);
  v6 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
  v7 = sub_1C0011220(BugCheckParameter3);
  v8 = sub_1C0016CA0((__int64)DeviceObject, *((_WORD *)v7 + 714));
  v9 = v8;
  if ( !v8 )
  {
    v14 = -1073741811;
LABEL_21:
    BugCheckParameter4->IoStatus.Status = v14;
    IofCompleteRequest(BugCheckParameter4, 0);
    sub_1C0014E84(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v14;
  }
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (unsigned __int8 *)SecurityContext[1].SecurityQos;
  if ( SecurityQos )
  {
    if ( !(unsigned __int8)sub_1C0053050(
                             SecurityContext[1].SecurityQos,
                             *((unsigned __int16 *)SecurityQos + 1),
                             &v20,
                             0LL) )
    {
      v12 = v20;
      v13 = 9;
      HIDWORD(SecurityContext->SecurityQos) = v20;
      if ( *SecurityQos < 9u )
        v13 = *SecurityQos;
      v14 = -1073741811;
      sub_1C004A608(
        (_DWORD)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        33,
        (_DWORD)SecurityQos,
        v13,
        -1073741811,
        v12,
        (__int64)aHubC,
        2550,
        0);
      goto LABEL_21;
    }
    v15 = 2 * SecurityQos[8];
    *(_DWORD *)(v9 + 432) = v15;
    v16 = v15;
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    {
      sub_1C002E8F0(
        ::DeviceObject->DeviceExtension,
        (_DWORD)::DeviceObject,
        0,
        18,
        (__int64)&unk_1C0062088,
        BugCheckParameter3,
        v15);
      v16 = *(_DWORD *)(v9 + 432);
    }
    if ( v16 > *((_DWORD *)v6 + 758) )
    {
      HIDWORD(SecurityContext->SecurityQos) = -1073737728;
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 5);
      v14 = -1073741670;
      sub_1C004A608(
        (_DWORD)DeviceObject,
        *((unsigned __int16 *)v7 + 714),
        35,
        (_DWORD)SecurityQos,
        9,
        -1073741670,
        HIDWORD(SecurityContext->SecurityQos),
        (__int64)aHubC,
        2573,
        0);
      goto LABEL_21;
    }
  }
  else
  {
    *(_DWORD *)(v8 + 432) = 0;
  }
  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( IoSetCompletionRoutineEx(DeviceObject, BugCheckParameter4, sub_1C002D410, (PVOID)BugCheckParameter3, 1u, 1u, 1u) < 0 )
  {
    v18 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = sub_1C002D410;
    v18[-1].Context = (PVOID)BugCheckParameter3;
    v18[-1].Control = -32;
  }
  return IofCallDriver(v6[152], BugCheckParameter4);
}
