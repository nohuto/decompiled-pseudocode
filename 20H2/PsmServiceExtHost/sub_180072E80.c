/*
 * XREFs of sub_180072E80 @ 0x180072E80
 * Callers:
 *     sub_180074F4C @ 0x180074F4C (sub_180074F4C.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180031E60 @ 0x180031E60 (sub_180031E60.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180072E80(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-30h] BYREF

  v1 = a1 + 216;
  if ( (*(_BYTE *)(a1 + 240) & 1) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v7);
    v4 = v7 - *(_QWORD *)(v1 + 32);
    if ( v4 > 10000 * (unsigned __int64)*(unsigned int *)(v1 + 40) )
    {
      if ( (*(_BYTE *)(a1 + 2712) & 1) != 0 )
      {
        return (unsigned int)-1073741058;
      }
      else
      {
        sub_180031E60(a1 + 312, v4, (void (__fastcall *)(_QWORD, __int64))sub_180072FA0, v1);
        if ( *(_QWORD *)(v1 + 8) == v1 + 8 )
        {
          return (unsigned int)-1073740704;
        }
        else
        {
          v3 = 0;
          if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
            sub_18002E278(v5, (unsigned __int8 *)dword_18009D75D, 0LL, 0LL, 2u, &v8);
          TpPostWork(*(_QWORD *)v1);
          *(_DWORD *)(v1 + 24) |= 1u;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741199;
    }
  }
  return v3;
}
