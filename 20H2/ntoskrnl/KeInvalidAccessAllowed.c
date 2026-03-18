/*
 * XREFs of KeInvalidAccessAllowed @ 0x1403063B0
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1402991A0 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x140306278 (MiRaisedIrqlFault.c)
 *     MiAllowGuardFault @ 0x140306340 (MiAllowGuardFault.c)
 * Callees:
 *     KiIsTraceMemoryAccess @ 0x140306440 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x1405170B8 (KiRspInIstStack.c)
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
