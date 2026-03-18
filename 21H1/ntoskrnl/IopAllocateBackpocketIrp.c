/*
 * XREFs of IopAllocateBackpocketIrp @ 0x1404FA650
 * Callers:
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140252F80 (IopAllocateIrpExReturn.c)
 *     IopIsActivityTracingEnabled @ 0x14025B27C (IopIsActivityTracingEnabled.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1402F6F10 (IoInitializeIrp.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateBackpocketIrp(__int64 a1, char a2, char a3)
{
  __int16 v3; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  PIRP v6; // rbx
  LARGE_INTEGER v7; // [rsp+30h] [rbp-18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 > byte_140C45CE0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !a3 )
  {
    if ( (struct _KTHREAD *)qword_140C45CB8 != CurrentThread )
    {
      v7.QuadPart = -300000000LL;
      while ( _InterlockedExchange(&dword_140C45CB0, 1) == 1 )
      {
        if ( KeWaitForSingleObject(&stru_140C45CC0, Executive, 0, 0, &v7) == 258 )
        {
          result = IopAllocateIrpExReturn();
          if ( result )
            return result;
        }
      }
      v6 = qword_140C45CA8;
      IoInitializeIrp(qword_140C45CA8, 72 * v3 + 280, v3 + 1);
      v6->AllocationFlags = 33;
      qword_140C45CB8 = (__int64)KeGetCurrentThread();
      goto LABEL_9;
    }
    v6 = qword_140C45CD8;
    if ( qword_140C45CD8 )
    {
LABEL_19:
      qword_140C45CD8 = *(PIRP *)&qword_140C45CD8->Type;
      IoInitializeIrp(v6, 72 * a2 + 280, a2 + 1);
      *((_QWORD *)&v6->Tail.CompletionKey + 10) = --v6->Tail.Overlay.CurrentStackLocation;
      v6->AllocationFlags = 33;
      goto LABEL_20;
    }
    return 0LL;
  }
  if ( (struct _KTHREAD *)qword_140C45C88 == CurrentThread )
  {
    v6 = qword_140C45CD8;
    if ( !qword_140C45CD8 )
      KeBugCheckEx(0x11Eu, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  Timeout.QuadPart = -300000000LL;
  while ( _InterlockedExchange(&dword_140C45C80, 1) == 1 )
  {
    if ( KeWaitForSingleObject(&word_140C45C90, Executive, 0, 0, &Timeout) == 258 )
    {
      result = IopAllocateIrpExReturn();
      if ( result )
        return result;
    }
  }
  v6 = Irp;
  IoInitializeIrp(Irp, 72 * v3 + 280, v3 + 1);
  v6->AllocationFlags = 33;
  qword_140C45C88 = (__int64)KeGetCurrentThread();
LABEL_9:
  *((_QWORD *)&v6->Tail.CompletionKey + 10) = --v6->Tail.Overlay.CurrentStackLocation;
LABEL_20:
  --v6->StackCount;
  --v6->CurrentLocation;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(v6);
  return (__int64)v6;
}
