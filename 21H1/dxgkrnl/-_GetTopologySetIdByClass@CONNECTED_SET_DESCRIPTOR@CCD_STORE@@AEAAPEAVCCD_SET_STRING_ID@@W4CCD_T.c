/*
 * XREFs of ?_GetTopologySetIdByClass@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAAPEAVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@_N@Z @ 0x1C00E607C
 * Callers:
 *     ?GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00E5FEC (-GetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@W4CCD_TOP.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C013BDA4 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::_GetTopologySetIdByClass(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  __int64 v6; // rbx
  char *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax

  v3 = (int)a2;
  switch ( (_DWORD)a2 )
  {
    case 1:
      v6 = 56LL;
      break;
    case 2:
      v6 = 64LL;
      break;
    case 4:
      v6 = 72LL;
      break;
    case 8:
      v6 = 80LL;
      break;
    default:
      if ( (_DWORD)a2 != 15 )
      {
        v12 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v12 + 24) = v3;
        WdLogEvent5_WdAssertion(v12);
      }
      v6 = 88LL;
      break;
  }
  result = *(char **)(v6 + a1);
  if ( !result && a3 )
  {
    result = (char *)operator new[](0x38uLL, 0x63644356u, PagedPool);
    if ( result )
    {
      *(_DWORD *)result = 0;
      *(_OWORD *)(result + 8) = 0LL;
      *((_QWORD *)result + 3) = 0LL;
      *((_WORD *)result + 16) = 0;
      *(_OWORD *)(result + 40) = 0LL;
    }
    else
    {
      result = 0LL;
    }
    *(_QWORD *)(v6 + a1) = result;
    if ( !result )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
      v13[3] = 56LL;
      v13[4] = v3;
      v13[5] = a1;
      v13[6] = *(_QWORD *)(a1 + 96);
      WdLogEvent5_WdLowResource(v13);
      return *(char **)(v6 + a1);
    }
  }
  return result;
}
