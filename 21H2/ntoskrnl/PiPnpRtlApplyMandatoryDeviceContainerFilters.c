/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14061E5F0
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14062A5E0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x14062B87C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x14062BC00 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFilters(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v7; // ebx
  int Object; // eax
  PVOID v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  P = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    Object = PiDmGetObject(5LL, a2, &P);
    v10 = P;
    v7 = Object;
    if ( Object >= 0 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = a4;
      LOBYTE(v13) = 0;
      v7 = ((__int64 (__fastcall *)(__int64, PVOID, __int64 (__fastcall *)(), __int128 *))PiDmListEnumObjectsWithCallback)(
             4LL,
             P,
             PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             &v12);
      if ( v7 >= 0 )
        *a5 = v13;
    }
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v7;
}
