/*
 * XREFs of RtlGetSystemBootStatus @ 0x18008B810
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x180085814 (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatus(int a1, __int64 a2, int a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v7 = a3;
  v5 = a1;
  v6 = a2;
  return RtlpSystemBootStatusRequest(31, (__int64)&v5, 1u, a4);
}
