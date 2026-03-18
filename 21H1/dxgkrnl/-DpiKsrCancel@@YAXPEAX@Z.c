/*
 * XREFs of ?DpiKsrCancel@@YAXPEAX@Z @ 0x1C02CDB94
 * Callers:
 *     DpiKsrCallback @ 0x1C02CE190 (DpiKsrCallback.c)
 * Callees:
 *     ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02CD4D0 (-DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z.c)
 */

void __fastcall DpiKsrCancel(_WORD *a1)
{
  __int64 v1; // rdx
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v3; // [rsp+40h] [rbp-18h]

  a1[648] = 0;
  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = 1;
  v3 = 0LL;
  DpIterateFdoContexts((__int64 (__fastcall *)(__int64 *, void *))DpiKsrSaveMemoryCallback, v2);
  LOBYTE(v1) = 1;
  KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v1);
}
