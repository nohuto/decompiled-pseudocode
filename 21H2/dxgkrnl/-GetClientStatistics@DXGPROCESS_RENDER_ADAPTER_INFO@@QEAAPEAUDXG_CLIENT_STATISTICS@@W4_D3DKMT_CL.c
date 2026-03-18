/*
 * XREFs of ?GetClientStatistics@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1C016BB7C
 * Callers:
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C016B958 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct DXG_CLIENT_STATISTICS *__fastcall DXGPROCESS_RENDER_ADAPTER_INFO::GetClientStatistics(
        DXGPROCESS_RENDER_ADAPTER_INFO *this,
        enum _D3DKMT_CLIENTHINT a2)
{
  __int64 **v3; // rdi
  char *v4; // rsi
  __int64 v5; // r9
  __int64 *i; // rbx
  __int64 v7; // rax
  __int64 ***v8; // rax

  v3 = (__int64 **)((char *)this + 104);
  v4 = (char *)this + 80;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_6;
  }
  v7 = operator new[](0x20uLL, 0x4B677844u, 256LL, v5);
  i = (__int64 *)v7;
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_DWORD *)(v7 + 16) = a2;
    v8 = (__int64 ***)v3[1];
    if ( *v8 != v3 )
      __fastfail(3u);
    *i = (__int64)v3;
    i[1] = (__int64)v8;
    *v8 = (__int64 **)i;
    v3[1] = i;
  }
  else
  {
    i = 0LL;
  }
LABEL_6:
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXG_CLIENT_STATISTICS *)i;
}
