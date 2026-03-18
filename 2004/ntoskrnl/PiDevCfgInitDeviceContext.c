/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x14072FFD0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14071DFA8 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14071E318 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x14072E460 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14072E988 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407ABC40 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A3840 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408A7778 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408A77EC (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x1405E180C (_CmOpenDeviceRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14072D9CC (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14072EA64 (PiDevCfgFreeDeviceContext.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v6; // rcx
  __int64 v7; // r9
  DEVPROPKEY **v8; // rdx
  _DWORD *v9; // r8
  __int64 v10; // rax
  int ObjectProperties; // ebp
  unsigned int v12; // edi
  int *v13; // rsi
  _BYTE v15[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  *((_QWORD *)a3 + 1) = a1;
  if ( a2 )
  {
    *((_QWORD *)a3 + 2) = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 16, 0, 983103, 0, (__int64)(a3 + 4), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext((__int64)a3);
      return (unsigned int)ObjectProperties;
    }
    *a3 |= 0x80000000;
  }
  memset(v15, 0, 0x78uLL);
  v6 = &v15[8];
  v7 = 3LL;
  v8 = off_140D2D770;
  v9 = a3 + 6;
  do
  {
    v10 = (__int64)*v8++;
    *((_QWORD *)v6 + 1) = v9;
    v9 += 4;
    *((_QWORD *)v6 - 1) = v10;
    *(_DWORD *)v6 = 8210;
    *((_DWORD *)v6 + 5) = 6;
    v6 += 40;
    --v7;
  }
  while ( v7 );
  ObjectProperties = PiDevCfgQueryObjectProperties(
                       (__int64)v6,
                       *((_QWORD *)a3 + 1),
                       1u,
                       *((void **)a3 + 2),
                       (__int64)v15,
                       3u);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v12 = 0;
  v13 = (int *)&v15[32];
  do
  {
    if ( *v13 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[4 * v12 + 6], 0LL);
    ++v12;
    v13 += 10;
  }
  while ( v12 < 3 );
  return (unsigned int)ObjectProperties;
}
