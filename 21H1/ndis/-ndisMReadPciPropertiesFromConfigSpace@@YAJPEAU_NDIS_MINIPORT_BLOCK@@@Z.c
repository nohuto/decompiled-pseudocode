/*
 * XREFs of ?ndisMReadPciPropertiesFromConfigSpace@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003A644
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C012EB78 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     NdisMGetBusData @ 0x1C003A780 (NdisMGetBusData.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisMReadPciPropertiesFromConfigSpace(char *NdisMiniportHandle)
{
  int v2; // ebx
  unsigned __int8 v3; // bp
  ULONG v4; // r15d
  _BYTE Buffer[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  memset(Buffer, 0, sizeof(Buffer));
  if ( NdisMGetBusData(NdisMiniportHandle, 0, 0, Buffer, 0x40u) == 64 )
  {
    if ( (Buffer[14] & 0x7F) != 0 )
    {
      return (unsigned int)-1073741808;
    }
    else if ( (Buffer[6] & 0x10) != 0 )
    {
      v3 = Buffer[52];
      while ( v3 )
      {
        v4 = v3;
        if ( NdisMGetBusData(NdisMiniportHandle, 0, v3, Buffer, 2u) != 2 )
          return (unsigned int)-1073741823;
        v3 = Buffer[1];
        if ( Buffer[0] == 5 )
        {
          if ( NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3624, 0x18u) != 24 )
          {
            *(_OWORD *)(NdisMiniportHandle + 3624) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
            v2 = -1073741823;
          }
        }
        else if ( Buffer[0] == 17 && NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3648, 0xCu) != 12 )
        {
          *(_OWORD *)(NdisMiniportHandle + 3624) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
          return (unsigned int)-1073741823;
        }
        if ( v2 < 0 )
          return (unsigned int)v2;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
