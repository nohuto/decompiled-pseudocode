/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01D9E5C
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x1C01D9A90 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMT_DDISPLAY_ENUM *v4; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+58h] [rbp+18h] BYREF
  int v6; // [rsp+60h] [rbp+20h] BYREF

  v4 = a1;
  v6 = 0;
  v5 = 0;
  Global = DXGGLOBAL_GetGlobal();
  v3[0] = &v6;
  v3[1] = &v4;
  v3[2] = &v5;
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_6c26126ad1bc2cece2687303122ecfc1_::_lambda_invoker_cdecl_,
    (__int64)v3,
    4LL);
  *(_DWORD *)v4 = v6;
  *((_DWORD *)v4 + 4) = v5;
  if ( *((_DWORD *)v4 + 1) < *(_DWORD *)v4 || *((_DWORD *)v4 + 5) < v5 )
    return 3221225507LL;
  else
    return 0LL;
}
