/*
 * XREFs of HvlSetQpcBias @ 0x140548430
 * Callers:
 *     <none>
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetQpcBias(__int64 a1)
{
  _QWORD *v2; // rax
  __int128 v4; // [rsp+20h] [rbp-88h] BYREF
  __int64 v5; // [rsp+30h] [rbp-78h]
  __int64 v6; // [rsp+38h] [rbp-70h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  v5 = 0LL;
  LODWORD(v6) = 0;
  v4 = 0LL;
  v2 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v4, 1, (__int64)v7, 40LL);
  *(_DWORD *)v2 = 18;
  v2[1] = a1;
  LOWORD(a1) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((__int64)&v4);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
