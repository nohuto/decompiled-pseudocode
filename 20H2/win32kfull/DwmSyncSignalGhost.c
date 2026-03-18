/*
 * XREFs of DwmSyncSignalGhost @ 0x1C027541C
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C0209C84 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall DwmSyncSignalGhost(PVOID Object, __int128 *a2)
{
  signed int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // ecx
  __int128 v8; // xmm1
  _DWORD v10[20]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+90h] [rbp+10h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v10, 0, sizeof(v10));
      v5 = *a2;
      v6 = a2[1];
      LOWORD(v10[1]) = 0x8000;
      v10[19] = *((_DWORD *)a2 + 8);
      v10[0] = 5242920;
      v10[10] = 1073741876;
      *(_OWORD *)&v10[11] = v5;
      v11 = 80LL;
      *(_OWORD *)&v10[15] = v6;
      v4 = LpcSendWaitReceivePort(Object, 0x20000LL, v10, v10, &v11, 0LL);
      if ( v4 >= 0 )
      {
        v7 = v10[19];
        v8 = *(_OWORD *)&v10[15];
        *a2 = *(_OWORD *)&v10[11];
        a2[1] = v8;
        *((_DWORD *)a2 + 8) = v7;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
