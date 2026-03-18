/*
 * XREFs of VidSchIsSyncObjectWaitUnordered @ 0x1C0086540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectWaitUnordered(__int64 a1, unsigned __int64 a2)
{
  int v3; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx

  if ( !a1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a2);
    WdLogEvent5_WdAssertion(v5);
    return 0;
  }
  v3 = *(_DWORD *)(a1 + 44);
  if ( (unsigned int)(v3 - 4) > 1 )
  {
    if ( v3 != 2 )
      return 0;
    v6 = *(_BYTE *)(a1 + 27) ? *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL) : *(_QWORD *)(a1 + 64);
    if ( v6 >= a2 )
      return 0;
  }
  return 1;
}
