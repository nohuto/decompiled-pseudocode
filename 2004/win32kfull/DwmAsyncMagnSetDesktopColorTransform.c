/*
 * XREFs of DwmAsyncMagnSetDesktopColorTransform @ 0x1C0275294
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C000EDCC (MagpDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01CD150 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CDBF4 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopColorTransform(PVOID Object, __int64 a2, __int128 *a3)
{
  unsigned int v6; // ebx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _DWORD v15[40]; // [rsp+20h] [rbp-79h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v15, 0, 0x98uLL);
    v7 = *a3;
    v8 = a3[1];
    LOWORD(v15[1]) = 0x8000;
    v9 = *((_DWORD *)a3 + 24);
    *(_OWORD *)&v15[13] = v7;
    v15[0] = 9961584;
    v10 = a3[2];
    v15[10] = 1073741926;
    *(_OWORD *)&v15[17] = v8;
    *(_QWORD *)&v15[11] = a2;
    v11 = a3[3];
    v15[37] = v9;
    *(_OWORD *)&v15[21] = v10;
    v12 = a3[4];
    *(_OWORD *)&v15[25] = v11;
    v13 = a3[5];
    *(_OWORD *)&v15[29] = v12;
    *(_OWORD *)&v15[33] = v13;
    EtwUpdateEvent(0LL);
    v6 = LpcRequestPort(Object, v15);
    ObfDereferenceObject(Object);
  }
  return v6;
}
