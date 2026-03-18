/*
 * XREFs of ?AddMapping@REMOTEMONITORMAPPING@@QEAAJPEAUPATH_IDENTIFIER@1@0@Z @ 0x1C02C2948
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0259E6C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall REMOTEMONITORMAPPING::AddMapping(
        struct _KTHREAD **this,
        struct REMOTEMONITORMAPPING::PATH_IDENTIFIER *a2,
        struct _KTHREAD **a3)
{
  struct _KTHREAD **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  struct _KTHREAD **v11; // rcx
  __int64 v12; // rax
  struct _KTHREAD *v13; // xmm0_8
  int v14; // eax
  struct _KTHREAD *v15; // rax
  char v17[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, this + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v19 = 2;
  *((_BYTE *)this + 48) = 1;
  v6 = (struct _KTHREAD **)operator new(0x28uLL, 0x4B677844u, 1, PagedPool);
  v10 = 0;
  v11 = v6;
  if ( v6 )
  {
    v6[2] = *(struct _KTHREAD **)a2;
    v13 = *a3;
    *((_DWORD *)v6 + 6) = *((_DWORD *)a2 + 2);
    v14 = *((_DWORD *)a3 + 2);
    *(struct _KTHREAD **)((char *)v11 + 28) = v13;
    *((_DWORD *)v11 + 9) = v14;
    v15 = *this;
    if ( *((struct _KTHREAD ***)*this + 1) != this )
      __fastfail(3u);
    *v11 = v15;
    v11[1] = (struct _KTHREAD *)this;
    *((_QWORD *)v15 + 1) = v11;
    *this = (struct _KTHREAD *)v11;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(0LL, v7, v8, v9);
    *(_QWORD *)(v12 + 24) = 42LL;
    WdLogEvent5_WdLowResource(v12);
    v10 = -1073741801;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v10;
}
