/*
 * XREFs of IopAllocateBackpocketIrp @ 0x140500050
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020CF7C (IoAsynchronousPageWrite.c)
 *     IoSynchronousPageWriteEx @ 0x140326B5C (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14020D8C0 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x1402254E0 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IopAllocateIrpExReturn @ 0x14035C790 (IopAllocateIrpExReturn.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x140500C1C (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140C45E00 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140C45DD8 != CurrentThread )
    {
      v10.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140C45DD0, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140C45DE0, Executive, 0, 0, &v10) == 258 )
        {
          LOBYTE(v9) = v3;
          result = IopAllocateIrpExReturn(a1, v9, 0LL, retaddr);
          if ( result )
            return result;
        }
      }
      v8 = qword_140C45DC8;
      IoInitializeIrp(qword_140C45DC8, 72 * v3 + 352, v3 + 2);
      v8->AllocationFlags = 33;
      qword_140C45DD8 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v8 = qword_140C45DF8;
    if ( qword_140C45DF8 )
    {
LABEL_19:
      qword_140C45DF8 = *(PIRP *)&qword_140C45DF8->Type;
      IoInitializeIrp(v8, 72 * a2 + 352, a2 + 2);
      v8->Tail.Overlay.CurrentStackLocation -= 2;
      *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
      v8->AllocationFlags = 33;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140C45DA8 == CurrentThread )
  {
    v8 = qword_140C45DF8;
    if ( !qword_140C45DF8 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140C45DA0, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140C45DB0, Executive, 0, 0, &Timeout) == 258 )
    {
      LOBYTE(v6) = v3;
      result = IopAllocateIrpExReturn(a1, v6, 0LL, retaddr);
      if ( result )
        return result;
    }
  }
  v8 = Irp;
  IoInitializeIrp(Irp, 72 * v3 + 352, v3 + 2);
  v8->AllocationFlags = 33;
  qword_140C45DA8 = (__int64)KeGetCurrentThread();
LABEL_9:
  v8->Tail.Overlay.CurrentStackLocation -= 2;
  *((_QWORD *)&v8->Tail.CompletionKey + 10) = v8->Tail.Overlay.CurrentStackLocation;
LABEL_20:
  v8->StackCount -= 2;
  v8->CurrentLocation -= 2;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(v8);
  return (__int64)v8;
}
