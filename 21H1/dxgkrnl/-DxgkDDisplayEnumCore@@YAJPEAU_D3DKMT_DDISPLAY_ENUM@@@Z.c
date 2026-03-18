/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C014ACD8
 * Callers:
 *     DxgkDDisplayEnumInternal @ 0x1C014A940 (DxgkDDisplayEnumInternal.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM *a1, __int64 a2)
{
  struct DXGGLOBAL *Global; // rax
  _QWORD v4[4]; // [rsp+20h] [rbp-20h] BYREF
  struct _D3DKMT_DDISPLAY_ENUM *v5; // [rsp+50h] [rbp+10h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+18h] BYREF
  int v7; // [rsp+60h] [rbp+20h] BYREF

  v5 = a1;
  v7 = 0;
  v6 = 0;
  v4[0] = &v7;
  v4[1] = &v5;
  v4[2] = &v6;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_3dc479c6339d8ea3367aebfddfa054a6_::_lambda_invoker_cdecl_,
    (__int64)v4,
    4);
  *(_DWORD *)v5 = v7;
  *((_DWORD *)v5 + 4) = v6;
  if ( *((_DWORD *)v5 + 1) < *(_DWORD *)v5 || *((_DWORD *)v5 + 5) < v6 )
    return 3221225507LL;
  else
    return 0LL;
}
