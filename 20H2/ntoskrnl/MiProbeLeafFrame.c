/*
 * XREFs of MiProbeLeafFrame @ 0x1403517FC
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 *     MmStoreProbeAndLockPages @ 0x140351898 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLockPageLeafPageTable @ 0x14026C700 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiFaultInProbeAddress @ 0x140316E80 (MiFaultInProbeAddress.c)
 *     MiSetProbePagesAhead @ 0x14034E904 (MiSetProbePagesAhead.c)
 */

__int64 __fastcall MiProbeLeafFrame(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // rsi
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = a1 + 5;
  v3 = MiLockPageLeafPageTable(a1);
  if ( *v2 == ZeroPte )
    return v3;
  while ( 1 )
  {
    result = MiProbeLeafPteAccess((__int64)a1, &v10, v4);
    if ( (int)result < 0 )
      break;
    if ( !v10 )
    {
      v6 = *v2;
      if ( MiPteInShadowRange((unsigned __int64)(a1 + 5))
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v6 & 1) != 0
        && ((v6 & 0x20) == 0 || (v6 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v8 = v6 | 0x20;
          v9 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v2 >> 3) & 0x1FF));
          if ( (v9 & 0x20) == 0 )
            v8 = v6;
          v6 = v8;
          if ( (v9 & 0x42) != 0 )
            v6 = v8 | 0x42;
        }
      }
      a1[16] = (v6 >> 12) & 0xFFFFFFFFFLL;
      MiSetProbePagesAhead((__int64)a1);
      return 0LL;
    }
    if ( v10 != 1 )
    {
      result = MiFaultInProbeAddress((__int64)a1);
      if ( (int)result < 0 )
      {
        ++dword_140C4E5FC;
        return result;
      }
    }
    v3 = MiLockPageLeafPageTable(a1);
    if ( *v2 == ZeroPte )
      return v3;
  }
  return result;
}
