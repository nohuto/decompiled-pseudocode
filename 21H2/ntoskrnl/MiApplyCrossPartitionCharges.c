/*
 * XREFs of MiApplyCrossPartitionCharges @ 0x140561648
 * Callers:
 *     MiGetCrossPartitionCharges @ 0x140562668 (MiGetCrossPartitionCharges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiApplyCrossPartitionCharges(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx

  v3 = 32LL * a2;
  v4 = *(_QWORD *)(v3 + a1 + 1896);
  v5 = v4 + a3;
  if ( v4 + a3 > v4 )
  {
    *(_QWORD *)(v3 + a1 + 1896) = v5;
    if ( v5 > *(_QWORD *)(v3 + a1 + 1912) )
      *(_QWORD *)(v3 + a1 + 1912) = v5;
    return 0LL;
  }
  else
  {
    ++*(_QWORD *)(v3 + a1 + 1904);
    return 3221225773LL;
  }
}
