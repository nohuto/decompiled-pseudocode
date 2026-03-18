/*
 * XREFs of _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C013CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C013C52C (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 */

__int64 __fastcall anonymous_namespace_::_SaveTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v8; // rax

  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(a1, a2);
  v6 = v3;
  if ( v3 < 0 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v8[3] = v6;
    v8[4] = a2;
    v8[5] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v6;
}
