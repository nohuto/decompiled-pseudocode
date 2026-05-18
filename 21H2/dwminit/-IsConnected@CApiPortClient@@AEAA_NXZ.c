/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x18000B830
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000B454 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z @ 0x18000B5B8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAXIPEAJ1F@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000B85C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x18000BA4C (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x18000C25C (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&hObject + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&hObject + 1));
  return v1;
}
