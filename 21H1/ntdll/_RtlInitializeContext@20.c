/*
 * XREFs of _RtlInitializeContext@20 @ 0x4B366340
 * Callers:
 *     <none>
 * Callees:
 *     _NtWriteVirtualMemory@20 @ 0x4B2F2D20 (_NtWriteVirtualMemory@20.c)
 */

ULONG64 __cdecl RtlInitializeContext(
        HANDLE Reserved,
        PCONTEXT Context,
        PVOID Parameter,
        PVOID InitialPc,
        PVOID InitialSp)
{
  char *v5; // eax
  ULONG64 result; // rax
  ULONG_PTR *v7; // [esp+0h] [ebp-4h]

  Context->SegEs = 32;
  Context->SegDs = 32;
  Context->SegSs = 32;
  Context->Eip = (unsigned int)InitialPc;
  v5 = (char *)InitialSp;
  Context->Esi = 4;
  Context->Eax = 0;
  Context->Ebx = 1;
  Context->Ecx = 2;
  Context->Edx = 3;
  Context->Edi = 5;
  Context->Ebp = 0;
  Context->SegGs = 0;
  Context->SegFs = 56;
  Context->SegCs = 24;
  Context->EFlags = 512;
  Context->ContextFlags = 65543;
  Context->Esp = (unsigned int)(v5 - 4);
  LODWORD(result) = NtWriteVirtualMemory(Reserved, v5 - 4, &Parameter, 4uLL, v7);
  Context->Esp -= 4;
  return result;
}
