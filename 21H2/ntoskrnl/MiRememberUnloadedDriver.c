/*
 * XREFs of MiRememberUnloadedDriver @ 0x14075FCB4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     MiReleaseResourceLite @ 0x14037208C (MiReleaseResourceLite.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 */

void __fastcall MiRememberUnloadedDriver(const void **a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char *v7; // rcx
  __int64 v8; // rax
  UNICODE_STRING *v9; // rbx
  wchar_t *Pool; // rax

  v3 = a3;
  if ( *(_WORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
    v7 = (char *)MmUnloadedDrivers;
    if ( MmUnloadedDrivers )
    {
      v8 = (unsigned int)MmLastUnloadedDriver;
      if ( (unsigned int)MmLastUnloadedDriver < 0x32 )
        goto LABEL_4;
    }
    else
    {
      MmUnloadedDrivers = MiAllocatePool(64, 0x7D0uLL, 0x54446D4Du);
      v7 = (char *)MmUnloadedDrivers;
      if ( !MmUnloadedDrivers )
      {
LABEL_6:
        MiReleaseResourceLite((__int64)CurrentThread);
        return;
      }
    }
    v8 = 0LL;
    MmLastUnloadedDriver = 0;
LABEL_4:
    v9 = (UNICODE_STRING *)&v7[40 * v8];
    RtlFreeAnsiString(v9);
    Pool = (wchar_t *)MiAllocatePool(64, *(unsigned __int16 *)a1, 0x54446D4Du);
    v9->Buffer = Pool;
    if ( Pool )
    {
      memmove(Pool, a1[1], *(unsigned __int16 *)a1);
      v9->Length = *(_WORD *)a1;
      v9->MaximumLength = *((_WORD *)a1 + 1);
      v9[1].Buffer = (wchar_t *)(v3 + a2);
      *(_QWORD *)&v9[1].Length = a2;
      *(_QWORD *)&v9[2].Length = MEMORY[0xFFFFF78000000014];
      ++MmLastUnloadedDriver;
    }
    else
    {
      *(_DWORD *)&v9->Length = 0;
    }
    goto LABEL_6;
  }
}
