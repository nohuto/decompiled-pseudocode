/*
 * XREFs of ?IsConnected@CPortClient@@QEAA_NXZ @ 0x1800049E8
 * Callers:
 *     ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x180004440 (-IsConnected@CApiPortClient@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPortClient::IsConnected(CPortClient *this)
{
  return *((_QWORD *)this + 2) != 0LL;
}
