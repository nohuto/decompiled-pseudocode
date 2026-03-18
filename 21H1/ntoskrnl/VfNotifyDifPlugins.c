/*
 * XREFs of VfNotifyDifPlugins @ 0x1409C5988
 * Callers:
 *     VfTargetDriversAdd @ 0x14036E97C (VfTargetDriversAdd.c)
 *     VfNotifyVerifierOfEvent @ 0x1409C3030 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x14066257C (MmManagePartitionMemoryInformation.c)
 */

__int64 (__fastcall *__fastcall VfNotifyDifPlugins(int a1, __int64 a2))(__int128 *)
{
  __int64 (__fastcall *result)(__int128 *); // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  result = (__int64 (__fastcall *)(__int128 *))PFnViUpdateDIFPlugins;
  v3 = 0LL;
  if ( PFnViUpdateDIFPlugins && XdvEnabled && (VfRuleClasses & 0x800000000LL) != 0 )
  {
    if ( a1 )
    {
      if ( a1 != 1 )
        return result;
      LODWORD(v3) = 1;
      v4 = a2 + 96;
      return (__int64 (__fastcall *)(__int128 *))result(&v3);
    }
    if ( ViSystemPartition )
    {
      if ( (VfRuleClasses & 0x8000000000LL) != 0 )
      {
        memset(&ViSystemPartitionMemoryInfo, 0, 0xF0uLL);
        dword_140C1D0C4 = -1;
        dword_140C1D0C8 = -1;
        result = (__int64 (__fastcall *)(__int128 *))MmManagePartitionMemoryInformation(
                                                       (ULONG_PTR **)&ViSystemPartition,
                                                       (__int64)&ViSystemPartitionMemoryInfo);
        if ( (int)result >= 0 )
        {
          result = (__int64 (__fastcall *)(__int128 *))qword_140C1D0F8;
          *((_QWORD *)&v3 + 1) = qword_140C1D0F8;
          if ( qword_140C1D0F8 )
          {
            LODWORD(v3) = 0;
            result = (__int64 (__fastcall *)(__int128 *))PFnViUpdateDIFPlugins;
            return (__int64 (__fastcall *)(__int128 *))result(&v3);
          }
        }
      }
    }
  }
  return result;
}
