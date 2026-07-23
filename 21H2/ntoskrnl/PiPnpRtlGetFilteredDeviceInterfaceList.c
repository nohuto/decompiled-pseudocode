/*
 * XREFs of PiPnpRtlGetFilteredDeviceInterfaceList @ 0x14062F7EC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiDmGetCmObjectListFromCache @ 0x14061F234 (PiDmGetCmObjectListFromCache.c)
 *     PiDmGetCmObjectConstraintListFromCache @ 0x14062EDF8 (PiDmGetCmObjectConstraintListFromCache.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall PiPnpRtlGetFilteredDeviceInterfaceList(__int64 a1)
{
  bool v2; // zf
  const WCHAR *v3; // rdx
  char v4; // cl
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ecx
  _WORD *v8; // r9
  NTSTATUS result; // eax
  __int128 v10; // [rsp+48h] [rbp+7h] BYREF
  __int128 v11; // [rsp+58h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+27h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp+2Fh] BYREF
  GUID Guid; // [rsp+80h] [rbp+3Fh] BYREF

  v2 = (*(_BYTE *)(a1 + 32) & 1) == 0;
  v11 = 0LL;
  v3 = *(const WCHAR **)(a1 + 16);
  v4 = _mm_cvtsi128_si32((__m128i)0LL);
  v5 = *(_QWORD *)(a1 + 40);
  if ( !v2 )
    v4 = 1;
  LOBYTE(v11) = v4;
  v6 = *(_QWORD *)(a1 + 24);
  *((_QWORD *)&v11 + 1) = v5;
  v12 = *(_QWORD *)(a1 + 48);
  Guid = 0LL;
  v10 = 0LL;
  DestinationString = 0LL;
  if ( !v6 )
  {
    v7 = *(_DWORD *)(a1 + 64);
    v8 = *(_WORD **)(a1 + 56);
    if ( v3 )
      return PiDmGetCmObjectConstraintListFromCache(
               0,
               (__int64)v3,
               (__int64)PiPnpRtlInterfaceFilterCallback,
               (__int64)&v10,
               v8,
               v7,
               *(unsigned int **)(a1 + 72));
    else
      return PiDmGetCmObjectListFromCache(
               3,
               (__int64)PiPnpRtlInterfaceFilterCallback,
               (__int64)&v10,
               (__int64)v8,
               v7,
               *(_QWORD *)(a1 + 72));
  }
  if ( !v3 )
    return PiDmGetCmObjectConstraintListFromCache(
             1,
             v6,
             (__int64)PiPnpRtlInterfaceFilterCallback,
             (__int64)&v10,
             *(_WORD **)(a1 + 56),
             *(_DWORD *)(a1 + 64),
             *(unsigned int **)(a1 + 72));
  result = RtlInitUnicodeStringEx(&DestinationString, v3);
  if ( result >= 0 )
  {
    result = RtlGUIDFromString(&DestinationString, &Guid);
    if ( result >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)&v10 = &Guid;
      return PiDmGetCmObjectConstraintListFromCache(
               1,
               v6,
               (__int64)PiPnpRtlInterfaceFilterCallback,
               (__int64)&v10,
               *(_WORD **)(a1 + 56),
               *(_DWORD *)(a1 + 64),
               *(unsigned int **)(a1 + 72));
    }
  }
  return result;
}
