/*
 * XREFs of DpiQuerySystemFirmwareTables @ 0x1C0196068
 * Callers:
 *     DpiReadSystemFirmwareTable @ 0x1C0195FF0 (DpiReadSystemFirmwareTable.c)
 *     DpiEnumSystemFirmwareTables @ 0x1C02C7D20 (DpiEnumSystemFirmwareTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 */

__int64 __fastcall DpiQuerySystemFirmwareTables(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int *a6)
{
  _DWORD *PoolWithTag; // rbx
  unsigned int v7; // esi
  int v9; // r12d
  int v10; // r13d
  ULONG v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // edx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE SystemInformation[128]; // [rsp+30h] [rbp-B8h] BYREF

  PoolWithTag = SystemInformation;
  v7 = a4;
  ReturnLength[0] = 0;
  v9 = a2;
  v10 = a1;
  if ( KeGetCurrentIrql() )
  {
    LODWORD(v19) = -1073741811;
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v22[3] = 275LL;
    v22[4] = 21LL;
    v22[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  else if ( (a5 || !a4) && a6 )
  {
    v11 = a4 + 16;
    if ( a4 + 16 <= 0x80 || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x74727044u)) != 0LL )
    {
      PoolWithTag[1] = v10;
      *PoolWithTag = v9;
      PoolWithTag[2] = a3;
      PoolWithTag[3] = v7;
      v16 = ZwQuerySystemInformation(SystemFirmwareTableInformation, PoolWithTag, v11, ReturnLength);
      v19 = v16;
      if ( v16 < 0 )
      {
        if ( v16 == -1073741789 && ReturnLength[0] >= 0x10 )
        {
          *a6 = PoolWithTag[3];
        }
        else
        {
          *a6 = 0;
          v25 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v25 + 24) = v19;
          WdLogEvent5_WdError(v25);
        }
      }
      else
      {
        v20 = PoolWithTag[3];
        *a6 = v20;
        if ( v20 <= v7 )
          v7 = v20;
        if ( a5 )
          memmove(a5, PoolWithTag + 4, v7);
      }
    }
    else
    {
      LODWORD(v19) = -1073741801;
      v24 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v24 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v24);
    }
    if ( PoolWithTag != (_DWORD *)SystemInformation )
      ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  }
  else
  {
    LODWORD(v19) = -1073741811;
    v23 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
  }
  return (unsigned int)v19;
}
