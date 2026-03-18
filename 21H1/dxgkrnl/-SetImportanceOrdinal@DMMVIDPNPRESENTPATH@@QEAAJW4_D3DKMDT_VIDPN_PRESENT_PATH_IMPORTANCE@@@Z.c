/*
 * XREFs of ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0013630
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0013458 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetImportanceOrdinal(DMMVIDPNPRESENTPATH *this, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = (int)a2;
  if ( (_DWORD)a2 && ((int)a2 <= 32 || (_DWORD)a2 == 255) )
  {
    *((_DWORD *)this + 26) = a2;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = v2;
    WdLogEvent5_WdError(v4);
    return 3223192388LL;
  }
}
