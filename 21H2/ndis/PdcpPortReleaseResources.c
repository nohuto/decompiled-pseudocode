/*
 * XREFs of PdcpPortReleaseResources @ 0x1C012968C
 * Callers:
 *     PdcPortClose @ 0x1C01294D8 (PdcPortClose.c)
 *     PdcPortOpenCommon @ 0x1C0129520 (PdcPortOpenCommon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

void __fastcall PdcpPortReleaseResources(_QWORD *P)
{
  __int64 v2; // rcx
  void (__fastcall *v3)(__int64, _DWORD *, __int64); // rax
  _DWORD v4[202]; // [rsp+20h] [rbp-328h] BYREF

  memset(v4, 0, 0x320uLL);
  v2 = P[3];
  *(_DWORD *)P = 0;
  if ( v2 )
  {
    v4[14] = *((_DWORD *)P + 4);
    v4[15] = *((_DWORD *)P + 5);
    v3 = (void (__fastcall *)(__int64, _DWORD *, __int64))P[4];
    v4[10] = 1;
    v4[11] = 5;
    v3(v2, v4, 800LL);
  }
  ExFreePoolWithTag(P, 0);
}
