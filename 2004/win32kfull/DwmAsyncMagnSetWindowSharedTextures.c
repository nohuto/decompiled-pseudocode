/*
 * XREFs of DwmAsyncMagnSetWindowSharedTextures @ 0x1C0275ACC
 * Callers:
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CDBF4 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowSharedTextures(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  _QWORD *v11; // r8
  __int64 *v12; // r9
  __int64 v13; // r10
  __int64 v14; // rax
  _QWORD v16[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v16, 0, sizeof(v16));
    v9 = *(_DWORD *)a4;
    WORD2(v16[0]) = 0x8000;
    v10 = 6;
    HIDWORD(v16[7]) = *(_DWORD *)(a4 + 4);
    if ( v9 < 6 )
      v10 = v9;
    v16[8] = *(_QWORD *)(a4 + 8);
    LODWORD(v16[0]) = 17826024;
    LODWORD(v16[5]) = 1073741923;
    v16[6] = a2;
    v16[33] = a3;
    LODWORD(v16[7]) = v9;
    if ( v10 )
    {
      v11 = &v16[10];
      v12 = (__int64 *)(*(_QWORD *)(a4 + 16) + 8LL);
      v13 = v10;
      do
      {
        *(v11 - 1) = v12[1];
        *v11 = *(v12 - 1);
        v11 += 4;
        v14 = *v12;
        v12 += 3;
        *(v11 - 3) = v14;
        --v13;
      }
      while ( v13 );
    }
    EtwUpdateEvent(0LL);
    v8 = LpcRequestPort(Object, v16);
    ObfDereferenceObject(Object);
  }
  return v8;
}
