/*
 * XREFs of ?Open@CDrawListEntryBatch@@QEAAXPEAVIDeviceTarget@@I@Z @ 0x1801F1204
 * Callers:
 *     ?OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatch@@@Z @ 0x1801EBF58 (-OpenDrawListEntryBatch@CDrawListBatchManager@@IEAAJPEAVIDeviceTarget@@PEAPEAVCDrawListEntryBatc.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBatch::Open(CDrawListEntryBatch *this, struct IDeviceTarget *a2, int a3)
{
  __int64 v5; // rax
  char *v6; // rcx
  char *v7; // rcx
  int v8; // eax
  float v9; // xmm0_4
  int v10; // eax
  _DWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[24]; // [rsp+28h] [rbp-30h] BYREF

  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 13) = a3;
  v5 = (**(__int64 (__fastcall ***)(struct IDeviceTarget *, _BYTE *))a2)(a2, v12);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)v5;
  *((_QWORD *)this + 11) = *(_QWORD *)(v5 + 16);
  v6 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 12LL) + 8;
  *((_DWORD *)this + 24) = *(_DWORD *)((**(__int64 (__fastcall ***)(char *, _BYTE *))v6)(v6, v12) + 8);
  v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 16LL) + 8;
  (**(void (__fastcall ***)(char *, _DWORD *))v7)(v7, v11);
  v8 = v11[0];
  *((_DWORD *)this + 16) = -1082130432;
  *((_DWORD *)this + 17) = 1065353216;
  v9 = (float)v8;
  v10 = v11[1];
  *((float *)this + 14) = 2.0 / v9;
  *((float *)this + 15) = -2.0 / (float)v10;
}
