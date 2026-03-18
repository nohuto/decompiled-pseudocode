/*
 * XREFs of ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0027070
 * Callers:
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0023600 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00271E0 (RIMDirectStartStopDeviceRead.c)
 *     ApiSetIsRemoteConnection @ 0x1C002741C (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
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
