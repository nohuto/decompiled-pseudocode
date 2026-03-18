/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x1406EA694
 * Callers:
 *     IoGetDeviceInterfacePropertyData @ 0x1406EA650 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rsi
  int ObjectProperty; // ebx
  __int64 v14; // [rsp+60h] [rbp-118h] BYREF
  __int64 v15; // [rsp+68h] [rbp-110h] BYREF
  _BYTE *v16; // [rsp+70h] [rbp-108h]
  _BYTE v17[176]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v17, 0, 0xAAuLL);
  v15 = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    WORD1(v15) = 170;
    v16 = v17;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v15) )
      return (unsigned int)-1073741823;
    v11 = (__int64)v16;
  }
  else
  {
    v11 = 0LL;
  }
  ObjectProperty = PnpUnicodeStringToWstr(&v14, 0LL, a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(PiPnpRtlCtx, v14, 3, 0, v11, a2, a8, a6, a5, a7, 0);
  PnpUnicodeStringToWstrFree(v14, a1);
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
