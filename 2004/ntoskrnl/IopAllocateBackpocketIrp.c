/*
 * XREFs of IopAllocateBackpocketIrp @ 0x1404FACA0
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x14028F800 (IopAllocateIrpExReturn.c)
 *     IopIsActivityTracingEnabled @ 0x140297AFC (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x140334050 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  PIRP v8; // rbx
  __int64 v9; // rdx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140C45B60 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140C45B38 != CurrentThread )
    {
      v10.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140C45B30, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140C45B40, Executive, 0, 0, &v10) == 258 )
        {
          LOBYTE(v9) = v3;
          result = IopAllocateIrpExReturn(a1, v9, 0LL, retaddr);
          if ( result )
            return result;
        }
      }
      v8 = qword_140C45B28;
      IoInitializeIrp(qword_140C45B28, 72 * v3 + 280, v3 + 1);
      v8->AllocationFlags = 33;
      qword_140C45B38 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v8 = qword_140C45B58;
    if ( qword_140C45B58 )
    {
LABEL_19:
      qword_140C45B58 = *(PIRP *)&qword_140C45B58->Type;
      IoInitializeIrp(v8, 72 * a2 + 280, a2 + 1);
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = --v8->Tail.Overlay.CurrentStackLocation;
      v8->AllocationFlags = 33;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140C45B08 == CurrentThread )
  {
    v8 = qword_140C45B58;
    if ( !qword_140C45B58 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140C45B00, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140C45B10, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL, retaddr);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * v3 + 280, v3 + 1);
  v8->AllocationFlags = 33;
  qword_140C45B08 = (__int64)KeGetCurrentThread();
LABEL_9:
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = --v8->Tail.Overlay.CurrentStackLocation;
LABEL_20:
  --v8->StackCount;
  --v8->CurrentLocation;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(v8);
  return (__int64)v8;
}
