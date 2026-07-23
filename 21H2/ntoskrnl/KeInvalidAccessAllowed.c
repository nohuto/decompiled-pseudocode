/*
 * XREFs of KeInvalidAccessAllowed @ 0x140220080
 * Callers:
 *     MiRaisedIrqlFault @ 0x14021FF3C (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x140220004 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x14031C910 (MiCheckSystemPageTables.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     KiIsTraceMemoryAccess @ 0x140220110 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x140518E38 (KiRspInIstStack.c)
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
