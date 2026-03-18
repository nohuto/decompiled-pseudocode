/*
 * XREFs of ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C006AB34
 * Callers:
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C03A864C (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3,
        __int64 a4)
{
  void *v7; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3221225990LL;
  }
  else
  {
    if ( a1[4] )
      WdLogSingleEntry0(1LL);
    v7 = (void *)operator new[](a2, 0x4E506456u, 256LL, a4);
    a1[4] = v7;
    if ( v7 )
    {
      a1[5] = a2;
      a1[6] = 256LL;
      if ( a3 )
        memmove(v7, a3, a2);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(6LL, a2);
      return 3221225495LL;
    }
  }
}
