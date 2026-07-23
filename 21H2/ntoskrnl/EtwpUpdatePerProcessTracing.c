/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x140934614
 * Callers:
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x1406B5200 (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140934750 (EtwpUpdateProcessTracingCallback.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rbp
  unsigned __int16 *FlagExtension; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // ecx
  __int64 v11; // rdi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h]

  v4 = a4;
  Process = 0LL;
  HIBYTE(v14) = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  FlagExtension = EtwpGetFlagExtension(a1, 2);
  if ( FlagExtension )
  {
    v9 = (unsigned int *)(FlagExtension + 2);
    v10 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v9, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v9;
        --v11;
      }
      while ( v11 );
    }
  }
  LOBYTE(v14) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v14;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 1128LL) + 2 * v4 + 550) = v14;
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
