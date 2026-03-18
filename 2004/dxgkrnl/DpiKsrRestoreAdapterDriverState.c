/*
 * XREFs of DpiKsrRestoreAdapterDriverState @ 0x1C02D2B0C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0182794 (DpiFdoStartAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     DpiKsrIsSoftBoot @ 0x1C01836AC (DpiKsrIsSoftBoot.c)
 *     ??1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ @ 0x1C02D1A1C (--1DXGK_ENUMERATE_KSR_MEMORY_CONTEXT@@QEAA@XZ.c)
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z @ 0x1C02D1B68 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_KPEBU_GUID@@@Z.c)
 */

__int64 __fastcall DpiKsrRestoreAdapterDriverState(struct _FDO_CONTEXT *a1)
{
  int v3; // r14d
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v15[256]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE *v16; // [rsp+130h] [rbp+28h]

  if ( !DpiKsrIsSoftBoot() )
    return 0LL;
  v14 = 0x2000000000LL;
  v16 = v15;
  memset(v15, 0, sizeof(v15));
  KsrEnumeratePersistedMemory((char *)a1 + 4856, DpiKsrEnumeratePersistedMemoryCallback, &v14);
  v3 = 0;
  v4 = 0LL;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v16[8 * v4], (const struct _GUID *)((char *)a1 + 4856));
      if ( v3 < 0 )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= (unsigned int)v14 )
        goto LABEL_6;
    }
    v11 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v11 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v11);
    v7 = (char *)a1 + 4872;
    goto LABEL_12;
  }
LABEL_6:
  v7 = (char *)a1 + 4872;
  KsrEnumeratePersistedMemory((char *)a1 + 4872, DpiKsrEnumeratePersistedMemoryCallback, &v14);
  v8 = 0LL;
  if ( (_DWORD)v14 )
  {
    while ( 1 )
    {
      v3 = DpiClaimPersistedMemoryBlock(a1, *(_QWORD *)&v16[8 * v8], (const struct _GUID *)((char *)a1 + 4872));
      if ( v3 < 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v14 )
        goto LABEL_13;
    }
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v13);
LABEL_12:
    LOBYTE(v12) = 1;
    KsrFreePersistedMemory((char *)a1 + 4856, v12);
    KsrFreePersistedMemory(v7, 0LL);
  }
LABEL_13:
  DXGK_ENUMERATE_KSR_MEMORY_CONTEXT::~DXGK_ENUMERATE_KSR_MEMORY_CONTEXT((PVOID *)&v14);
  return (unsigned int)v3;
}
