/*
 * XREFs of ?ForceGpupTdrCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02602F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ForceGpupTdrCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+24h] [rbp-B4h]
  _BYTE v9[144]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = *((_QWORD *)a1 + 338);
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL) + 5072LL) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v9, a1, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v9, 0LL) >= 0 )
    {
      v4 = *(_QWORD *)(v2 + 616);
      v8 = 0LL;
      v5 = *(_QWORD *)(v2 + 624);
      v7 = 6;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)(v4 + 8) + 64LL))(v5, &v7);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v9, v3);
  }
  return 0LL;
}
