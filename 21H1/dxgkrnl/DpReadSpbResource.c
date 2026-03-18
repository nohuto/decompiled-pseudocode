/*
 * XREFs of DpReadSpbResource @ 0x1C02D28D0
 * Callers:
 *     <none>
 * Callees:
 *     DpiValidateSpbResource @ 0x1C02D2FB8 (DpiValidateSpbResource.c)
 */

__int64 __fastcall DpReadSpbResource(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        PLARGE_INTEGER ByteOffset,
        HANDLE Event,
        PIO_STATUS_BLOCK a7)
{
  HANDLE Ptr; // rbx
  __int64 Length; // rbp
  HANDLE v10; // r15
  __int64 v11; // rax
  __int64 result; // rax
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rsi
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  NTSTATUS v18; // eax
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = 0LL;
  Ptr = Event;
  Length = (unsigned int)a3;
  v10 = Event;
  if ( !a4 && (_DWORD)a3 )
  {
    v11 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = Length;
    WdLogEvent5_WdWarning(v11);
    return 3221225485LL;
  }
  IoStatusBlock = a7;
  if ( !a7 )
  {
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225716LL;
  }
  result = DpiValidateSpbResource(a1, a2, (unsigned int)&DpReadSpbResource, 0, (__int64)&v20);
  if ( (int)result >= 0 )
  {
    v15 = v20;
    if ( !Ptr )
      Ptr = v20[7].Ptr;
    LODWORD(Ptr) = ZwReadFile(v20[5].Ptr, Ptr, 0LL, 0LL, IoStatusBlock, a4, Length, ByteOffset, 0LL);
    if ( (_DWORD)Ptr == 259 )
    {
      if ( v10 )
        goto LABEL_17;
      v18 = KeWaitForSingleObject(v15[8].Ptr, Executive, 0, 0, 0LL);
      Ptr = (HANDLE)v18;
      if ( v18 )
      {
        v19 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v19 + 24) = Ptr;
LABEL_16:
        WdLogEvent5_WdError(v19);
        goto LABEL_17;
      }
      LODWORD(Ptr) = IoStatusBlock->Status;
    }
    if ( (int)Ptr < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = (int)Ptr;
      goto LABEL_16;
    }
LABEL_17:
    ExReleaseRundownProtection(v15 + 3);
    return (unsigned int)Ptr;
  }
  return result;
}
