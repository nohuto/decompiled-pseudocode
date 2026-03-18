/*
 * XREFs of GreDxgkSetProcessStatus @ 0x1C00A1900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDxgkSetProcessStatus(__int64 *a1, int a2, unsigned __int8 a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+2Ch] [rbp-Ch]

  v4 = *a1;
  v5 = a2;
  v6 = a3;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C024AA48)(&v4);
}
