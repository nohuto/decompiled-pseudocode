/*
 * XREFs of MiProbeLeafFrame @ 0x140308590
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140235900 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiFaultInProbeAddress @ 0x140235B68 (MiFaultInProbeAddress.c)
 *     MiLockPageLeafPageTable @ 0x1402AFCE0 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x14030A708 (MiSetProbePagesAhead.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiProbeLeafFrame(__int64 a1)
{
  unsigned __int64 *v2; // rsi
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = (unsigned __int64 *)(a1 + 40);
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess(a1, &v9);
    if ( (int)result < 0 )
      break;
    if ( !v9 )
    {
      v5 = *v2;
      if ( (unsigned int)MiPteInShadowRange(a1 + 40)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v7 = v5 | 0x20;
          v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v2 >> 3) & 0x1FF));
          if ( (v8 & 0x20) == 0 )
            v7 = v5;
          v5 = v7;
          if ( (v8 & 0x42) != 0 )
            v5 = v7 | 0x42;
        }
      }
      *(_QWORD *)(a1 + 128) = (v5 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v9 != 1 )
    {
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
        ++dword_140C4E7BC;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
