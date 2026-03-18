/*
 * XREFs of ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0043480
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DpiIsRfxVgpuDevice @ 0x1C02C663C (DpiIsRfxVgpuDevice.c)
 */

__int64 __fastcall RfxVgpuResetCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  __int64 v3; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-89h] BYREF
  struct DXGADAPTER *v15; // [rsp+28h] [rbp-81h]
  char v16; // [rsp+30h] [rbp-79h]
  int v17; // [rsp+38h] [rbp-71h] BYREF
  __int64 v18; // [rsp+3Ch] [rbp-6Dh]
  _BYTE v19[144]; // [rsp+50h] [rbp-59h] BYREF

  v15 = a1;
  LODWORD(v3) = 0;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  if ( *((_DWORD *)a1 + 50) == 1 && (unsigned __int8)DpiIsRfxVgpuDevice(*((_QWORD *)a1 + 27)) )
  {
    if ( v16 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
    v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    v3 = v5;
    if ( v5 < 0
      || (v9 = *((_QWORD *)a1 + 338),
          v10 = *(_QWORD *)(v9 + 624),
          v18 = 0LL,
          v17 = 6,
          v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)(*(_QWORD *)(v9 + 616) + 8LL) + 64LL))(v10, &v17),
          v3 = v11,
          v11 < 0) )
    {
      v12 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v12 + 24) = a1;
      *(_QWORD *)(v12 + 32) = v3;
      WdLogEvent5_WdWarning(v12);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19, v6);
    if ( a2 )
      *a2 = v3;
  }
  else if ( v16 )
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  }
  return (unsigned int)v3;
}
