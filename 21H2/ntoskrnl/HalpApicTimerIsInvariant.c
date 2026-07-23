/*
 * XREFs of HalpApicTimerIsInvariant @ 0x1403ACF04
 * Callers:
 *     HalpApicTimerDiscover @ 0x1403AB6AC (HalpApicTimerDiscover.c)
 * Callees:
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

bool __fastcall HalpApicTimerIsInvariant(__int64 a1)
{
  char v1; // al
  char v2; // cl
  char v4; // [rsp+40h] [rbp+10h] BYREF
  int v5; // [rsp+48h] [rbp+18h] BYREF
  unsigned int v6; // [rsp+50h] [rbp+20h] BYREF
  int v7; // [rsp+58h] [rbp+28h] BYREF

  v5 = 0;
  v6 = 0;
  v4 = 0;
  if ( (int)HalSocRequestApi(a1, 0LL, 2, 16LL, &HalpApicTimerCpuApi) < 0 )
    return 0;
  v1 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *))HalpApicTimerCpuApi)(0LL, 0LL, 0LL, &v4);
  v2 = v1 != 0 ? v4 : 0;
  v4 = v2;
  if ( v2 != 2 && (v2 != 1 || KeGetCurrentPrcb()->CpuType < 0x15u) )
    return 0;
  v7 = 0;
  ((void (__fastcall *)(_QWORD, unsigned int *, int *, int *, int *))qword_140CF45B8)(0LL, &v6, &v5, &v5, &v5);
  if ( v6 >= 6 )
    ((void (__fastcall *)(__int64, int *, int *, int *, int *))qword_140CF45B8)(6LL, &v7, &v5, &v5, &v5);
  return (v7 & 4) != 0;
}
