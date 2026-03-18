/*
 * XREFs of DxgkAllocateAdlCB @ 0x1C00546B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F3E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x1C0070F10 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C0070F60 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

__int64 __fastcall DxgkAllocateAdlCB(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  struct SYSMM_ADAPTER_OBJECT *v5; // rsi
  int v6; // edi
  int v7; // eax
  unsigned int v8; // r9d
  struct _DXGK_ADL *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= 4 )
  {
    WdLogSingleEntry1(3LL, (unsigned __int64)v2 >> 2);
    return 3221225485LL;
  }
  v5 = *(struct SYSMM_ADAPTER_OBJECT **)a1;
  v6 = SysMmLockObject(*(struct SYSMM_ADAPTER_OBJECT **)a1, a2);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = *(_DWORD *)(a1 + 24);
  v9 = 0LL;
  v8 = v7 & 1 | 2;
  if ( (v7 & 2) == 0 )
    v8 = v7 & 1;
  v6 = SysMmCreateAdl(v5, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v8, &v9);
  if ( v6 < 0 )
  {
    SysMmUnlockObject(v5);
    return (unsigned int)v6;
  }
  *(_QWORD *)(a1 + 32) = v9;
  return 0LL;
}
