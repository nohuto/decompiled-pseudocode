/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00AA310
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0019FC0 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00AA35C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00AA480 (RIMDirectStartStopDeviceRead.c)
 *     ApiSetIsRemoteConnection @ 0x1C00AAADC (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
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
