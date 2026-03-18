/*
 * XREFs of DpiKsrRestore @ 0x1C02D2A0C
 * Callers:
 *     DpiInitializeGlobalState @ 0x1C03061B0 (DpiInitializeGlobalState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C02D1A1C (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x1C02D1B68 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 */

void DpiKsrRestore()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v9[256]; // [rsp+28h] [rbp-120h] BYREF
  __int64 *v10; // [rsp+128h] [rbp-20h]

  v8 = 0x2000000000LL;
  v10 = (__int64 *)v9;
  memset(v9, 0, sizeof(v9));
  KsrEnumeratePersistedMemory(&GUID_DXGK_KSR_MEMORY, DpiKsrEnumeratePersistedMemoryCallback, &v8);
  if ( (_DWORD)v8 != 1 )
  {
    v2 = WdLogNewEntry5_WdError(v1, v0);
    *(_QWORD *)(v2 + 24) = -1073741811LL;
LABEL_5:
    WdLogEvent5_WdError(v2);
    LOBYTE(v7) = 1;
    KsrFreePersistedMemory(&GUID_DXGK_KSR_MEMORY, v7);
    goto LABEL_6;
  }
  v3 = DpiClaimPersistedMemoryBlock(0LL, *v10, &GUID_DXGK_KSR_MEMORY);
  v6 = v3;
  if ( v3 < 0 )
  {
    v2 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v2 + 24) = v6;
    goto LABEL_5;
  }
LABEL_6:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v8);
}
