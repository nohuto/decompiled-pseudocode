/*
 * XREFs of ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C012D938
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C012E80C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C016878C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02EF45C (-_ConstructFromFirmwareRecommendedVidPn@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C02F056C (-CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C012D984 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C012F26C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::SetConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct D3DKMT_HASH *v2; // rdi
  struct _STRING *ConnectedSetStr; // rax
  _QWORD *v7; // rax

  v2 = (struct D3DKMT_HASH *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
    return CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, v2);
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdAssertion(this, a2);
    v7[3] = this;
    v7[4] = *((_QWORD *)this + 8);
    v7[5] = a2;
    WdLogEvent5_WdAssertion(v7);
    return 3221225485LL;
  }
}
