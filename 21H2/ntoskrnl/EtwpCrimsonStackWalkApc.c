/*
 * XREFs of EtwpCrimsonStackWalkApc @ 0x1405A5E70
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCrimsonStackWalkApc(void *a1, _QWORD *a2, _WORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v8; // [rsp+90h] [rbp-1E8h]
  _OWORD v9[27]; // [rsp+A0h] [rbp-1D8h] BYREF

  *a2 = 0LL;
  ExFreePoolWithTag(a1, 0);
  LODWORD(v8) = *a4;
  HIDWORD(v8) = *a5;
  memset(v9, 0, 0x1A8uLL);
  *(_QWORD *)&v9[5] = v8;
  *((_QWORD *)&v9[24] + 1) = EtwpHostSiloState;
  WORD3(v9[8]) = *a3;
  *(GUID *)((char *)&v9[2] + 8) = EventTracingProvGuid;
  LODWORD(v9[8]) = 1;
  DWORD2(v9[8]) = 68;
  BYTE4(v9[8]) = -1;
  v9[9] = _mm_load_si128((const __m128i *)&_xmm);
  return EtwpEventWriteFull(
           (__int64)v9,
           1u,
           0,
           0,
           (unsigned __int16 *)ETW_EVENT_USER_STACK_TRACE,
           0,
           0,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
