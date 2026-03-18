/*
 * XREFs of KeInvalidAccessAllowed @ 0x1402F6560
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x14022AFD0 (MiCheckSystemPageTables.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x1402F641C (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x1402F64E4 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 * Callees:
 *     KiIsTraceMemoryAccess @ 0x1402F65F0 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x140513138 (KiRspInIstStack.c)
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1, char a2)
{
  __int16 v4; // ax
  char IsTraceMemoryAccess; // cl
  void *v6; // rdi
  __int64 v8; // rdx

  if ( !a1 )
    return 0;
  v4 = *(_WORD *)(a1 + 368);
  IsTraceMemoryAccess = 0;
  if ( v4 == 16 )
  {
    if ( (*(_DWORD *)(a1 + 376) & 0x200) != 0
      || !(unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(a1 + 384)) && !(unsigned int)KiRspInIstStack(2LL, v8) )
    {
      v6 = &ExpInterlockedPopEntrySListFault;
      IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(a1 + 360));
      goto LABEL_5;
    }
    return 0;
  }
  if ( v4 != 51 )
    return 0;
  v6 = (void *)KeUserPopEntrySListFault;
LABEL_5:
  if ( (a2 & 1) == 0 && *(void **)(a1 + 360) == v6 )
    return 1;
  return IsTraceMemoryAccess;
}
