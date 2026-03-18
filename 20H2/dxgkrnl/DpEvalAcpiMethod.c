/*
 * XREFs of DpEvalAcpiMethod @ 0x1C0161D80
 * Callers:
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 * Callees:
 *     DpiFdoGetChildDescriptor @ 0x1C0019910 (DpiFdoGetChildDescriptor.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C016200C (DpiAcpiEvalAcpiMethodEx.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0185084 (DpiAcpiGetAcpiChildName.c)
 */

__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        __int64 a2,
        int *a3,
        ULONG a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v7; // rcx
  int *v8; // rdi
  int v9; // r12d
  __int64 v10; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  __int64 v12; // rsi
  int v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  IRP *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rax
  struct _KMUTANT *v24; // r15
  _QWORD *ChildDescriptor; // rax
  char v26; // si
  int v27; // r9d
  __int64 v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rax
  struct _STRING DestinationString; // [rsp+58h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp-50h] BYREF
  char v41; // [rsp+D0h] [rbp+8h]

  v7 = 0LL;
  v8 = a3;
  v41 = 0;
  v9 = a2;
  LODWORD(v10) = 0;
  AttachedDeviceReference = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
    goto LABEL_31;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 || *(_DWORD *)(v12 + 16) != 1953656900 || *(_DWORD *)(v12 + 20) != 2 )
  {
    v21 = -1073741811LL;
    goto LABEL_49;
  }
  if ( KeGetCurrentIrql() )
  {
    v28 = -1073741811LL;
    LODWORD(v10) = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(v12 + 40) + 28LL) >= 0x2003u )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL, a2);
      v29[3] = 275LL;
      v29[4] = 21LL;
      v29[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v29);
    }
    goto LABEL_34;
  }
  if ( !*(_BYTE *)(v12 + 1156) )
  {
    LODWORD(v10) = -1073741637;
    v31 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v31 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v31);
    return (unsigned int)v10;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
    goto LABEL_31;
  v13 = *a3;
  if ( *a3 != 1634885968 )
  {
    if ( v13 == 543451477 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      *a3 = 1130980673;
      AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v32);
      if ( !AcpiChildName )
      {
LABEL_32:
        v28 = -1073741810LL;
        goto LABEL_33;
      }
      RtlInitAnsiString(&DestinationString, AcpiChildName);
      LODWORD(a3) = (_DWORD)v8;
      p_DestinationString = &DestinationString;
LABEL_41:
      LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                       a1,
                       (int)p_DestinationString,
                       (int)a3,
                       a4,
                       OutputBuffer,
                       OutputBufferLength,
                       1);
      return (unsigned int)v10;
    }
    if ( v13 != 2017818181 )
      goto LABEL_14;
    if ( (_DWORD)a2 == -1 )
    {
      *a3 = 1130980673;
      LODWORD(p_DestinationString) = 0;
      goto LABEL_41;
    }
LABEL_31:
    v28 = -1073741811LL;
LABEL_33:
    LODWORD(v10) = v28;
LABEL_34:
    v30 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v30 + 24) = v28;
    WdLogEvent5_WdError(v30);
    return (unsigned int)v10;
  }
  v41 = 1;
  *a3 = 1130980673;
LABEL_14:
  if ( (_DWORD)a2 == -1 )
  {
    v14 = *(struct _DEVICE_OBJECT **)(v12 + 24);
    IoStatusBlock = 0LL;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v14);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = IoBuildDeviceIoControlRequest(
            0x32C004u,
            AttachedDeviceReference,
            v8,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( !v15 )
    {
      LODWORD(v10) = -1073741670;
      v35 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      *(_QWORD *)(v35 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v35);
      goto LABEL_23;
    }
    LODWORD(v10) = IofCallDriver(AttachedDeviceReference, v15);
    if ( (_DWORD)v10 == 259 )
    {
      v36 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v36;
      if ( v36 )
      {
        v37 = WdLogNewEntry5_WdError(v7, a2);
        *(_QWORD *)(v37 + 24) = v10;
LABEL_50:
        WdLogEvent5_WdError(v37);
        goto LABEL_23;
      }
      LODWORD(v10) = IoStatusBlock.Status;
    }
    if ( (int)v10 < 0 )
    {
      v22 = WdLogNewEntry5_WdWarning(v7, a2, v20);
      *(_QWORD *)(v22 + 24) = (int)v10;
      WdLogEvent5_WdWarning(v22);
      goto LABEL_23;
    }
    if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
    {
LABEL_23:
      if ( AttachedDeviceReference )
        ObfDereferenceObject(AttachedDeviceReference);
      return (unsigned int)v10;
    }
    v21 = -1072431089LL;
LABEL_49:
    LODWORD(v10) = v21;
    v37 = WdLogNewEntry5_WdError(v7, a2);
    *(_QWORD *)(v37 + 24) = v21;
    goto LABEL_50;
  }
  v24 = (struct _KMUTANT *)(v12 + 3408);
  KeWaitForSingleObject((PVOID)(v12 + 3408), Executive, 0, 0, 0LL);
  ChildDescriptor = DpiFdoGetChildDescriptor(v12, v9);
  if ( ChildDescriptor )
  {
    v26 = 1;
    RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
    LODWORD(v10) = DpiAcpiEvalAcpiMethodEx(
                     a1,
                     (int)&DestinationString,
                     (int)v8,
                     v27,
                     OutputBuffer,
                     OutputBufferLength,
                     v41);
  }
  else
  {
    v26 = 0;
  }
  KeReleaseMutex(v24, 0);
  if ( !v26 )
    goto LABEL_32;
  return (unsigned int)v10;
}
