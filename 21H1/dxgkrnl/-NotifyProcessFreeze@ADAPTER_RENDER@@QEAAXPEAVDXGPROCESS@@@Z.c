/*
 * XREFs of ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00D9C0C
 * Callers:
 *     ?NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ @ 0x1C00DA784 (-NotifyProcessFreeze@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C00D9528 (-PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyProcessFreeze(ADAPTER_RENDER *this, struct DXGPROCESS *a2)
{
  struct DXGADAPTER *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _BYTE v7[8]; // [rsp+20h] [rbp-C8h] BYREF
  struct DXGADAPTER *v8; // [rsp+28h] [rbp-C0h]
  char v9; // [rsp+30h] [rbp-B8h]
  _BYTE v10[144]; // [rsp+40h] [rbp-A8h] BYREF

  if ( !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this + 2)) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, v4, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL) < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10, v5);
      return;
    }
    ADAPTER_RENDER::PurgeSegments((struct _EX_RUNDOWN_REF *)this, 0x19u, (__int64)a2);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10, v6);
    v4 = (struct DXGADAPTER *)*((_QWORD *)this + 2);
  }
  v8 = v4;
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 200LL) == 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 1096LL))(*((_QWORD *)this + 81));
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
}
