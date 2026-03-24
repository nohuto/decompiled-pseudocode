/*
 * XREFs of ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0284608
 * Callers:
 *     ?OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C0048B54 (-OnVmwpDestruction@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007300 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z @ 0x1C0048A64 (--_GDXGVIRTUALMACHINE@@QEAAPEAXI@Z.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C0285CD8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::DestroyVirtualMachine(char *P)
{
  char *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rax
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9[8]; // [rsp+20h] [rbp-59h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-51h]
  int v11; // [rsp+30h] [rbp-49h]
  char v12[8]; // [rsp+38h] [rbp-41h] BYREF
  DXGPUSHLOCK *v13; // [rsp+40h] [rbp-39h]
  int v14; // [rsp+48h] [rbp-31h]
  char v15[8]; // [rsp+50h] [rbp-29h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-21h]
  int v17; // [rsp+60h] [rbp-19h]
  _BYTE v18[64]; // [rsp+70h] [rbp-9h] BYREF

  v2 = P + 40;
  while ( 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(P + 96));
    v3 = *(char **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *(_QWORD *)v3, *(char **)(*(_QWORD *)v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    *((_QWORD *)P + 13) = 0LL;
    ExReleasePushLockExclusiveEx(P + 96, 0LL);
    KeLeaveCriticalRegion();
    if ( v3 == v2 )
      break;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v5 = v3 - 136;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)P + 8, 0);
    DXGPUSHLOCK::AcquireExclusive(v16);
    v17 = 2;
    COREACCESS::COREACCESS((COREACCESS *)v18, *((struct DXGADAPTER *const *)v5 + 2));
    COREACCESS::AcquireShared((COREACCESS *)v18, 0LL);
    v6 = *((_QWORD *)v5 + 1);
    if ( v5[152] )
      v7 = *(_QWORD *)(v6 + 1640);
    else
      v7 = *(_QWORD *)(v6 + 1632);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, (struct _KTHREAD **)(v7 + 40), 0);
    DXGPUSHLOCK::AcquireExclusive(v13);
    v14 = 2;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)v5 + 7, 0);
    DXGPUSHLOCK::AcquireExclusive(v10);
    v11 = 2;
    LOBYTE(v8) = 1;
    (*(void (__fastcall **)(char *, _QWORD, __int64))(*(_QWORD *)v5 + 16LL))(v5, 0LL, v8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  }
  DXGVIRTUALMACHINE::ResetVirtualMachine((DXGVIRTUALMACHINE *)P, 1u);
  if ( P )
    DXGVIRTUALMACHINE::`scalar deleting destructor'((DXGVIRTUALMACHINE *)P);
}
