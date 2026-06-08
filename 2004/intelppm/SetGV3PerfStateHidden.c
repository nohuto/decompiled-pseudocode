/*
 * XREFs of SetGV3PerfStateHidden @ 0x1C0007730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetGV3PerfStateHidden(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+50h] [rbp+18h]

  v3 = a1;
  v5 = a3;
  if ( (int)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD))qword_1C001C708)(a1, 409LL, -65536LL, a3) < 0 )
    ((void (__fastcall *)(_QWORD, __int64, unsigned __int64, __int64))qword_1C001C708)(
      v3,
      409LL,
      0xFFFFFFFEFFFF0000uLL,
      v5);
  return 0LL;
}
