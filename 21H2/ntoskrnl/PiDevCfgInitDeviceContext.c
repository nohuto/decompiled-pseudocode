/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x14073BBF0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x140730028 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x140730398 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgProcessDevice @ 0x140739F50 (PiDevCfgProcessDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073A478 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407BE4A0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1408A6AA0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1408AA9D8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1408AAA4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     PiDevCfgFreeDeviceContext @ 0x14073A554 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14073D004 (PiDevCfgQueryObjectProperties.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _BYTE *v6; // rcx
  __int64 v7; // r9
  DEVPROPKEY **v8; // rdx
  _QWORD *v9; // r8
  __int64 v10; // rax
  int ObjectProperties; // ebp
  unsigned int v12; // edi
  int *v13; // rsi
  _BYTE v15[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  if ( a2 )
  {
    a3[2] = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 16, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext((__int64)a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v15, 0, 0x78uLL);
  v6 = &v15[8];
  v7 = 3LL;
  v8 = off_140D2D758;
  v9 = a3 + 3;
  do
  {
    v10 = (__int64)*v8++;
    *((_QWORD *)v6 + 1) = v9;
    v9 += 2;
    *((_QWORD *)v6 - 1) = v10;
    *(_DWORD *)v6 = 8210;
    *((_DWORD *)v6 + 5) = 6;
    v6 += 40;
    --v7;
  }
  while ( v7 );
  ObjectProperties = PiDevCfgQueryObjectProperties((_DWORD)v6, a3[1], 1, a3[2], (__int64)v15, 3);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v12 = 0;
  v13 = (int *)&v15[32];
  do
  {
    if ( *v13 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v12 + 3], 0LL);
    ++v12;
    v13 += 10;
  }
  while ( v12 < 3 );
  return (unsigned int)ObjectProperties;
}
