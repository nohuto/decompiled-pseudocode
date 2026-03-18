/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00A1260
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0057100 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00A12AC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00A13D0 (RIMDirectStartStopDeviceRead.c)
 *     ApiSetIsRemoteConnection @ 0x1C00A160C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 */

__int64 __fastcall CHidInput::OnDirectStartStopReadNotification(CHidInput *this)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF

  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v3, 1, 0);
  if ( !(unsigned int)ApiSetIsRemoteConnection() && *((_QWORD *)this + 1) != -1LL )
    RIMDirectStartStopDeviceRead();
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v3);
  return 0LL;
}
