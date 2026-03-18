/*
 * XREFs of ?GetClientStatistics@DXGPROCESS_ADAPTER_INFO@@QEAAPEAUDXG_CLIENT_STATISTICS@@W4_D3DKMT_CLIENTHINT@@@Z @ 0x1C00E6E78
 * Callers:
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C00E6C4C (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

struct DXG_CLIENT_STATISTICS *__fastcall DXGPROCESS_ADAPTER_INFO::GetClientStatistics(
        DXGPROCESS_ADAPTER_INFO *this,
        enum _D3DKMT_CLIENTHINT a2)
{
  _QWORD *v3; // rdi
  char *v4; // rsi
  _OWORD *i; // rbx
  _OWORD *v6; // rax
  _QWORD *v7; // rax

  v3 = (_QWORD *)((char *)this + 104);
  v4 = (char *)this + 80;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  for ( i = (_OWORD *)*v3; i != (_OWORD *)v3; i = *(_OWORD **)i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_8;
  }
  v6 = operator new[](0x20uLL, 0x4B677844u, PagedPool);
  i = v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
  {
    *((_QWORD *)i + 3) = 0LL;
    *((_DWORD *)i + 4) = a2;
    v7 = (_QWORD *)v3[1];
    if ( (_QWORD *)*v7 != v3 )
      __fastfail(3u);
    *(_QWORD *)i = v3;
    *((_QWORD *)i + 1) = v7;
    *v7 = i;
    v3[1] = i;
  }
LABEL_8:
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (struct DXG_CLIENT_STATISTICS *)i;
}
