/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C02304A8
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0284270 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0230554 (-NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER *const *this, struct DXGPROCESS *a2)
{
  __int64 v4; // rdx
  DXGVIRTUALGPUMANAGER *v5; // rcx
  DXGVIRTUALGPUMANAGER *v6; // rcx
  _BYTE v7[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (*((_BYTE *)a2 + 347) & 8) != 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
    {
      v5 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 205);
      if ( v5 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v5, a2);
      v6 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 204);
      if ( v6 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v6, a2);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7, v4);
  }
}
