/*
 * XREFs of ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C001AFF0
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C01C0A6C (_BmlLogDiagnosticsPacket.c)
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01CF1C0 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetFirstPath(DMMVIDPNTOPOLOGY *this)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNPRESENTPATH *)(*v1 - 8LL);
}
