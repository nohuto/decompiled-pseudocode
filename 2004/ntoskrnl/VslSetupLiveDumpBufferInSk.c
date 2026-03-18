/*
 * XREFs of VslSetupLiveDumpBufferInSk @ 0x1404F83A8
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1404F3AA4 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     VslpAddLiveDumpBufferChunk @ 0x1404F880C (VslpAddLiveDumpBufferChunk.c)
 *     VslpLiveDumpStart @ 0x1404F8B30 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x1404F8BBC (VslpSetupLiveDumpBuffer.c)
 */

__int64 __fastcall VslSetupLiveDumpBufferInSk(
        PVOID *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v12; // ebx
  unsigned int v13; // edi
  _BYTE v15[112]; // [rsp+40h] [rbp-C8h] BYREF

  v12 = VslpLiveDumpStart(a2, a3, a4);
  if ( v12 >= 0 )
  {
    v13 = a3 + a2;
    if ( v13 )
    {
      do
      {
        v12 = VslpAddLiveDumpBufferChunk(*a1);
        if ( v12 < 0 )
          goto LABEL_6;
        ++a1;
      }
      while ( --v13 );
    }
    v12 = VslpSetupLiveDumpBuffer(a5, a6, a7, a8, a9);
    if ( v12 < 0 )
    {
LABEL_6:
      memset(v15, 0, 0x68uLL);
      VslpEnterIumSecureMode(2u, 58, 0, (__int64)v15);
    }
  }
  return (unsigned int)v12;
}
