/*
 * XREFs of BiGetPartitionInformation @ 0x140785550
 * Callers:
 *     BiCreatePartitionDevice @ 0x140785280 (BiCreatePartitionDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1403FA660 (ZwDeviceIoControlFile.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall BiGetPartitionInformation(HANDLE FileHandle, int a2, _OWORD *a3)
{
  NTSTATUS v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD OutputBuffer[9]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v18; // [rsp+100h] [rbp+0h]

  IoStatusBlock = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v17 = 0LL;
  v18 = 0LL;
  v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, OutputBuffer, 0x90u);
  if ( v6 < 0 )
  {
    if ( !a2 )
    {
      v6 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x74004u, 0LL, 0, &v17, 0x20u);
      if ( v6 < 0 )
        return (unsigned int)v6;
      LODWORD(OutputBuffer[0]) = 0;
      *(_OWORD *)((char *)OutputBuffer + 8) = v17;
      DWORD2(OutputBuffer[1]) = DWORD1(v18);
      BYTE12(OutputBuffer[1]) = BYTE11(v18);
      LOWORD(OutputBuffer[2]) = WORD4(v18);
      BYTE2(OutputBuffer[2]) = BYTE10(v18);
      DWORD1(OutputBuffer[2]) = v18;
    }
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v7 = OutputBuffer[1];
  *a3 = OutputBuffer[0];
  v8 = OutputBuffer[2];
  a3[1] = v7;
  v9 = OutputBuffer[3];
  a3[2] = v8;
  v10 = OutputBuffer[4];
  a3[3] = v9;
  v11 = OutputBuffer[5];
  a3[4] = v10;
  v12 = OutputBuffer[6];
  a3[5] = v11;
  v13 = OutputBuffer[8];
  a3[6] = v12;
  a3[7] = OutputBuffer[7];
  a3[8] = v13;
  return (unsigned int)v6;
}
