/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x18000C25C
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000B830 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
