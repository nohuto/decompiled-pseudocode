/*
 * XREFs of MiProbeLeafFrame @ 0x1403166DC
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x14031656C (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140345870 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLockPageLeafPageTable @ 0x14024E460 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x140318160 (MiSetProbePagesAhead.c)
 *     MiFaultInProbeAddress @ 0x140345B30 (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiProbeLeafFrame(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // rsi
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  v2 = a1 + 5;
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess((__int64)a1, &v11, v4);
    if ( (int)result < 0 )
      break;
    if ( !v11 )
    {
      v7 = *v2;
      if ( MiPteInShadowRange((unsigned __int64)(a1 + 5))
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v9 = v7 | 0x20;
          v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v2 >> 3) & 0x1FF));
          if ( (v10 & 0x20) == 0 )
            v9 = v7;
          v7 = v9;
          if ( (v10 & 0x42) != 0 )
            v7 = v9 | 0x42;
        }
      }
      a1[16] = (v7 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead(a1);
      return 0LL;
    }
    if ( v11 != 1 )
    {
      result = MiFaultInProbeAddress(a1, v6);
      if ( (int)result < 0 )
      {
        ++dword_140C4E57C;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
