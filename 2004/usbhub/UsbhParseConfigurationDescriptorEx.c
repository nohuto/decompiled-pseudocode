/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x1C00319B4
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C00298F8 (UsbhConfigureUsbHub.c)
 *     UsbhGetDeviceInformation @ 0x1C0037D08 (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhParseDescriptors @ 0x1C0031B0C (UsbhParseDescriptors.c)
 */

_BYTE *__fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  _BYTE *v8; // rdi
  unsigned __int64 v9; // rbx
  _BYTE *v13; // rax
  unsigned __int64 v14; // rdx
  char v15; // al

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  do
  {
    v13 = (_BYTE *)UsbhParseDescriptors(a1, a2, *(unsigned __int16 *)(a2 + 2));
    v14 = (unsigned __int64)v13;
    if ( !v13 )
      break;
    v8 = v13;
    if ( a4 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 3
       || (unsigned __int8)v13[2] != a4) )
    {
      v8 = 0LL;
    }
    if ( a6 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 6
       || (unsigned __int8)v13[5] != a6) )
    {
      v8 = 0LL;
    }
    if ( a7 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 7
       || (unsigned __int8)v13[6] != a7) )
    {
      v8 = 0LL;
    }
    if ( a8 != -1
      && (v9 < (unsigned __int64)v13
       || (__int64)(v9 - (_QWORD)v13) > 0xFFFF
       || v9 - (unsigned __int64)v13 < 8
       || (unsigned __int8)v13[7] != a8) )
    {
      v8 = 0LL;
    }
    v15 = *v13;
    if ( v8 )
      break;
  }
  while ( (v14 & -(__int64)(v15 != 0)) != 0 );
  return v8;
}
