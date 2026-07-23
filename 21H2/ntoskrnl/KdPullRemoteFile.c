/*
 * XREFs of KdPullRemoteFile @ 0x1409B7724
 * Callers:
 *     MiCreateSectionForDriver @ 0x14075DE08 (MiCreateSectionForDriver.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     KdPullRemoteFileEx @ 0x1409B7780 (KdPullRemoteFileEx.c)
 */

__int64 __fastcall KdPullRemoteFile(int a1)
{
  _DWORD v2[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+3Ch] [rbp-1Ch]
  int v4; // [rsp+44h] [rbp-14h]

  v3 = 0LL;
  v4 = 0;
  v2[0] = 128;
  v2[1] = 5;
  v2[2] = 32;
  return KdPullRemoteFileEx(
           a1,
           (unsigned int)KdpCreateFileCallback,
           (unsigned int)&KdpWriteFileCallback,
           (unsigned int)KdpCloseFileCallback,
           (__int64)v2);
}
