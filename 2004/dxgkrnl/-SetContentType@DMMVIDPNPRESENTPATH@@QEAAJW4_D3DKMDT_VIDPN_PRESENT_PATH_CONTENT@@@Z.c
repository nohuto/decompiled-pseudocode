/*
 * XREFs of ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000CD48
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CB44 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DEE00 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax

  v2 = (int)a2;
  if ( (int)a2 > 0 && ((_DWORD)a2 == 255 || (int)a2 <= 2) )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = v2;
    WdLogEvent5_WdError(v4);
    v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v8 + 24) = v2;
    WdLogEvent5_WdWarning(v8);
    return 3223192398LL;
  }
}
