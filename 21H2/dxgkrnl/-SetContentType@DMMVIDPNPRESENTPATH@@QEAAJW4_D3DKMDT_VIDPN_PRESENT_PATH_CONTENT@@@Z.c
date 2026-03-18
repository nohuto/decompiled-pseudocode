/*
 * XREFs of ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C006981C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C006A0E8 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetContentType(DMMVIDPNPRESENTPATH *this, int a2)
{
  __int64 v3; // rbx

  if ( a2 > 0 && (a2 <= 2 || a2 == 255) )
  {
    *((_DWORD *)this + 41) = a2;
    return 0LL;
  }
  else
  {
    v3 = a2;
    WdLogSingleEntry1(2LL, a2);
    WdLogSingleEntry1(3LL, v3);
    return 3223192398LL;
  }
}
