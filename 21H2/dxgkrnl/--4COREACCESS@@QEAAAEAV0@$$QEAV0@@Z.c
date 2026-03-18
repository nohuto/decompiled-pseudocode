/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C005ABA0
 * Callers:
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0225BDC (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C03498EC (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000BB70 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

COREACCESS *__fastcall COREACCESS::operator=(COREACCESS *this, __int64 a2)
{
  DXGADAPTER *v4; // rcx
  __int64 v5; // rcx
  COREACCESS *result; // rax

  v4 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 24) )
    {
      COREACCESS::Release(this);
      v4 = (DXGADAPTER *)*((_QWORD *)this + 2);
    }
    DXGADAPTER::ReleaseReference(v4);
  }
  v5 = *(_QWORD *)(a2 + 16);
  *((_QWORD *)this + 2) = v5;
  *((_BYTE *)this + 24) = *(_BYTE *)(a2 + 24);
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 24));
    *((_QWORD *)this + 1) = -1LL;
  }
  result = this;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
