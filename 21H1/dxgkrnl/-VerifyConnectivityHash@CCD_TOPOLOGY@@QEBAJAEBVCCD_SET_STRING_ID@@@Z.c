/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C013AA9C
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C013A7F8 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x1C00E9250 (-_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00EA09C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C013AB20 (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

int __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  struct _STRING *ConnectedSetStr; // rax
  int StringHash; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _QWORD *v10; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0;
  ConnectedSetStr = (struct _STRING *)CCD_SET_STRING_ID::GetConnectedSetStr(a2);
  StringHash = CCD_SET_STRING_ID::_QueryStringHash(ConnectedSetStr, (struct D3DKMT_HASH *)&v11);
  v8 = StringHash;
  if ( StringHash >= 0 )
    return CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct D3DKMT_HASH *)&v11);
  v10 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
  v10[3] = v8;
  v10[4] = this;
  v10[5] = *((_QWORD *)this + 8);
  v10[6] = a2;
  WdLogEvent5_WdError(v10);
  return v8;
}
