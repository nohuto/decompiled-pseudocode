/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C0130BF8
 * Callers:
 *     ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C012F7E0 (-DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0170560 (-DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     memset @ 0x1C00274C0 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v2; // rsi
  PVOID result; // rax

  v2 = a2;
  if ( a2 <= 8 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x14 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 20LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[42] = v2;
  if ( result )
  {
    memset(result, 0, 20 * v2);
    return *(PVOID *)a1;
  }
  return result;
}
