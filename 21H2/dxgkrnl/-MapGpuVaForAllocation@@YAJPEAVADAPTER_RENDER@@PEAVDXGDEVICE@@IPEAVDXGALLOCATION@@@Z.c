/*
 * XREFs of ?MapGpuVaForAllocation@@YAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAVDXGALLOCATION@@@Z @ 0x1C0330C90
 * Callers:
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C032E758 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C032F268 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall MapGpuVaForAllocation(
        struct ADAPTER_RENDER *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        struct DXGALLOCATION *a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  char v14; // [rsp+20h] [rbp-69h]
  __int64 v15; // [rsp+40h] [rbp-49h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v17[14]; // [rsp+50h] [rbp-39h] BYREF

  v4 = *((_QWORD *)a1 + 81);
  v15 = 0LL;
  v16 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v4 + 8) + 992LL))(
    *((_QWORD *)a2 + 95),
    a3,
    &v15,
    &v16);
  memset(v17, 0, 0x68uLL);
  v7 = *((_QWORD *)a1 + 2);
  v8 = *((_QWORD *)a4 + 3);
  v17[7] = 1LL;
  v17[2] = *(_QWORD *)(v7 + 2640);
  v9 = *(_QWORD *)(v7 + 2648);
  v10 = *((_QWORD *)a1 + 82);
  v17[3] = v9;
  v14 = 1;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *, char, int))(*(_QWORD *)(*((_QWORD *)a1 + 81)
                                                                                              + 8LL)
                                                                                  + 808LL))(
          v10,
          v15,
          v8,
          v17,
          v14,
          -2);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v11 == 259 )
    {
      v12 = 0;
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD *, __int64))(*(_QWORD *)(*((_QWORD *)a1 + 81) + 8LL) + 1000LL))(
        *((_QWORD *)a1 + 82),
        &v16,
        &v17[12],
        1LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, v11);
  }
  return v12;
}
