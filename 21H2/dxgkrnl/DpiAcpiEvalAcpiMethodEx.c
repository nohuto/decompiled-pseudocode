/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1C020EE94
 * Callers:
 *     DpEvalAcpiMethod @ 0x1C01E2B10 (DpEvalAcpiMethod.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C020EAFC (DpiAcpiPrepareAcpiChildNameList.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  ULONG v13; // r12d
  unsigned int v14; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  __int64 v17; // rsi
  struct _DEVICE_OBJECT *v18; // rsi
  IRP *v19; // rax
  NTSTATUS Status; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    Status = -1073741811;
    v22 = -1073741811LL;
    v23 = 2LL;
LABEL_22:
    WdLogSingleEntry1(v23, v22);
    return (unsigned int)Status;
  }
  v11 = a3[2];
  v12 = 4;
  if ( v11 < 4 )
    v11 = 4;
  v13 = v11 + 268;
  v14 = v11 + 268;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11 + 268, 0x74727044u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v22 = -1073741801LL;
    Status = -1073741801;
    v23 = 6LL;
    goto LABEL_22;
  }
  memset(PoolWithTag, 0, v14);
  *v16 = 1181312321;
  if ( a2 )
  {
    memmove(v16 + 1, a2[1], *(unsigned __int16 *)a2);
    v17 = *(unsigned __int16 *)a2;
    *((_BYTE *)v16 + v17 + 4) = 46;
    v8 = (unsigned int)(v17 + 1);
  }
  *(_DWORD *)((char *)v16 + v8 + 4) = a3[1];
  *((_BYTE *)v16 + (unsigned int)(v8 + 4) + 4) = 0;
  v16[65] = a3[2];
  v16[66] = a3[3];
  if ( a7 )
    v12 = a3[2];
  memmove(v16 + 67, a3 + 4, v12);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v18);
  v19 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v18,
          v16,
          v13,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v19 )
  {
    Status = IofCallDriver(v18, v19);
    if ( Status == 259 )
    {
      v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v26;
      if ( v26 )
      {
        v24 = v26;
LABEL_29:
        v25 = 2LL;
        goto LABEL_30;
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
        goto LABEL_16;
      v24 = -1072431089LL;
      Status = -1072431089;
      goto LABEL_29;
    }
    v24 = Status;
    v25 = 3LL;
  }
  else
  {
    v24 = -1073741670LL;
    Status = -1073741670;
    v25 = 6LL;
  }
LABEL_30:
  WdLogSingleEntry1(v25, v24);
LABEL_16:
  if ( v18 )
    ObfDereferenceObject(v18);
  ExFreePoolWithTag(v16, 0);
  return (unsigned int)Status;
}
