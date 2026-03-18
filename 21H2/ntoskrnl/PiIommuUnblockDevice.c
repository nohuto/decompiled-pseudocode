/*
 * XREFs of PiIommuUnblockDevice @ 0x140859234
 * Callers:
 *     PiDmaGuardProcessPreStart @ 0x1407491AC (PiDmaGuardProcessPreStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // r8
  _QWORD *v4; // r14
  int v5; // ebx
  __int64 v6; // rcx

  v1 = *(_QWORD **)(a1 + 720);
  v3 = *((_BYTE *)v1 + 16);
  if ( (v3 & 1) != 0 && (*(_BYTE *)(*v1 + 4LL) & 1) == 0 )
    return 0;
  if ( !PipHalIommuSecurityEnabled )
  {
    if ( PipDmaGuardTestMode )
      *((_BYTE *)v1 + 16) = v3 | 2;
    return 0;
  }
  v4 = v1 + 1;
  v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *))off_140C02018[0])(*v1, *(_QWORD *)(a1 + 32), v1 + 1);
  if ( v5 >= 0 )
  {
    v6 = v1[3];
    if ( !v6
      || (v5 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD *))off_140C02018[0])(v6, *(_QWORD *)(a1 + 32), v1 + 4),
          v5 >= 0) )
    {
      *((_BYTE *)v1 + 16) |= 2u;
      return (unsigned int)v5;
    }
    ((void (__fastcall *)(_QWORD))off_140C02010[0])(*v4);
    *v4 = 0LL;
  }
  if ( v5 == -1070268391 && (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0 )
    return 0;
  return (unsigned int)v5;
}
