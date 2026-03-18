/*
 * XREFs of ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C013BDA4
 * Callers:
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x1C013BD20 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 * Callees:
 *     ?_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_UNICODE_STRING@@@Z @ 0x1C00E32B0 (-_GetValueNameByTopologyClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@CAXW4CCD_TOPOLOGY_CLASS@@PEAU_.c)
 *     ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00E607C (-_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_T.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00EA404 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdWriteStrValueToRegistry @ 0x1C013BEA4 (_CcdWriteStrValueToRegistry.c)
 */

__int64 __fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  char *TopologySetIdByClass; // rax
  int v12; // eax
  char *v13; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  struct _UNICODE_STRING ValueName; // [rsp+20h] [rbp-18h] BYREF

  v3 = (int)a3;
  if ( a3 <= 8 && (v6 = 278, _bittest(&v6, a3)) )
  {
    ValueName = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass(15LL, (__int64)&ValueName);
    v7 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v10 = v7;
    if ( v7 < 0 )
      goto LABEL_10;
    TopologySetIdByClass = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, 15LL, 1);
    if ( TopologySetIdByClass )
      CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)TopologySetIdByClass, a2);
    ValueName = 0LL;
    CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetValueNameByTopologyClass((unsigned int)v3, (__int64)&ValueName);
    v12 = CcdWriteStrValueToRegistry(*(HANDLE *)(a1 + 96), &ValueName, (PCANSI_STRING)(a2 + 8));
    v10 = v12;
    if ( v12 < 0 )
    {
LABEL_10:
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v15[3] = v10;
      v15[4] = a2;
      v15[5] = v3;
      v15[6] = a1;
      v15[7] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdError(v15);
    }
    else
    {
      v13 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(a1, (unsigned int)v3, 1);
      if ( v13 )
        CCD_SET_STRING_ID::operator=((CCD_SET_STRING_ID *)v13, a2);
    }
    return (unsigned int)v10;
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v16[3] = a2;
    v16[4] = v3;
    v16[5] = a1;
    v16[6] = *(_QWORD *)(a1 + 96);
    WdLogEvent5_WdAssertion(v16);
    return 3221225485LL;
  }
}
