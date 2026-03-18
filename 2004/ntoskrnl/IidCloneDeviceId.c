/*
 * XREFs of IidCloneDeviceId @ 0x140970F50
 * Callers:
 *     HalpIommuCloneDeviceId @ 0x1403ECAB8 (HalpIommuCloneDeviceId.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     IidCloneDeviceIdAcpi @ 0x1405C0F8C (IidCloneDeviceIdAcpi.c)
 *     IidCloneDeviceIdPci @ 0x1405C0FD4 (IidCloneDeviceIdPci.c)
 */

__int64 __fastcall IidCloneDeviceId(_DWORD *Src, void *a2, size_t a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !Src || !a2 || (unsigned int)(*Src - 1) > 5 )
    return (unsigned int)-1073741811;
  switch ( *Src )
  {
    case 1:
      return (unsigned int)IidCloneDeviceIdPci((__int64)Src, (__int64)a2);
    case 2:
      return (unsigned int)IidCloneDeviceIdAcpi((__int64)Src, (__int64)a2);
    case 6:
      memmove(a2, Src, a3);
      break;
    default:
      return (unsigned int)-1073741637;
  }
  return v3;
}
