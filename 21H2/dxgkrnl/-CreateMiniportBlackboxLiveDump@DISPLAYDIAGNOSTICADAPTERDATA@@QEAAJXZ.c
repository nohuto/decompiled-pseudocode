/*
 * XREFs of ?CreateMiniportBlackboxLiveDump@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJXZ @ 0x1C02BACB0
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BB7D8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220BE8 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::CreateMiniportBlackboxLiveDump(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int64 v7; // r8
  struct _DEVICE_OBJECT *v8; // rcx
  unsigned int LiveDumpWithDriverBlob; // eax
  int v11; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+44h] [rbp-24h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  if ( !*(_QWORD *)this )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1271LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_BYTE *)this + 3488) )
  {
    v6 = *(_OWORD *)((char *)this + 28);
    v7 = *((int *)this + 6);
    *((_QWORD *)this + 433) = &v11;
    v8 = *(struct _DEVICE_OBJECT **)(v2 + 216);
    v11 = 16;
    v12 = v6;
    LiveDumpWithDriverBlob = DxgCreateLiveDumpWithDriverBlob(
                               v8,
                               0x1B8u,
                               v7,
                               0LL,
                               0LL,
                               0LL,
                               (DISPLAYDIAGNOSTICADAPTERDATA *)((char *)this + 3256));
    *((_QWORD *)this + 433) = 0LL;
    return LiveDumpWithDriverBlob;
  }
  return v3;
}
