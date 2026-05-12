/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1C0076020
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C00762AC (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidDriverGetName @ 0x1C0014D94 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C00155BC (RtlStringCbPrintfW.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002BA0C (RaidAdapterFreeDriverInfo.c)
 *     RtlStringCbCopyW @ 0x1C0032184 (RtlStringCbCopyW.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, _QWORD *a2, PVOID **a3, _BYTE *a4)
{
  _QWORD *v4; // r15
  __int64 v6; // rcx
  int FullDriverPath; // ebx
  SIZE_T v10; // rdi
  wchar_t *Pool; // rax
  wchar_t *v12; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  PVOID *v15; // r15
  PVOID *v16; // rax
  PVOID *v17; // rdi
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  wchar_t *v20; // rax
  wchar_t *v21; // rbx
  PVOID v22; // rax
  PVOID v23; // rbp
  int v24; // ecx
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  PVOID *v27; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v4 = a2;
  v6 = *(_QWORD *)(a1 + 16);
  FullDriverPath = 0;
  *a3 = 0LL;
  v26 = 0LL;
  *a4 = 0;
  RaidDriverGetName(v6, (__int64)&v26);
  v10 = (unsigned int)(unsigned __int16)v26 + 10;
  Pool = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, v10, 0x44436152u, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  RtlStringCbPrintfW(Pool, v10, L"%ws.sys", *((_QWORD *)&v26 + 1));
  v13 = v4 + 7;
  v14 = (_QWORD *)v4[7];
  if ( v14 != v4 + 7 )
  {
    while ( 1 )
    {
      v15 = (PVOID *)(v14 - 1);
      if ( !_wcsicmp((const wchar_t *)v14[3], v12) )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v13 )
      {
        v4 = v28;
        goto LABEL_7;
      }
    }
    *a4 = 1;
    v17 = 0LL;
    v27 = 0LL;
    *a3 = v15;
    goto LABEL_9;
  }
LABEL_7:
  v16 = (PVOID *)RaidAllocatePool(NonPagedPoolNx, 0xA0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v27 = v16;
  v17 = v16;
  if ( !v16 )
  {
    FullDriverPath = -1073741670;
LABEL_9:
    ExFreePoolWithTag(v12, 0x44436152u);
    goto LABEL_17;
  }
  memset(v16, 0, 0xA0uLL);
  v17[2] = v17 + 1;
  v17[1] = v17 + 1;
  *(_DWORD *)v17 = 160;
  v17[3] = RaUnitStorageDumpControl;
  v17[4] = v12;
  v18 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x22uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v19 = v18;
  if ( !v18 )
    goto LABEL_16;
  RtlStringCbCopyW(v18, 0x22uLL, L"dumpstorport.sys");
  v17[6] = v19;
  v20 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, 0x1AuLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v21 = v20;
  if ( !v20 )
    goto LABEL_16;
  RtlStringCbCopyW(v20, 0x1AuLL, L"storport.sys");
  v17[7] = v21;
  RtlInitUnicodeString((PUNICODE_STRING)v17 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
  FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), v17 + 16);
  if ( FullDriverPath < 0 )
    FullDriverPath = 0;
  v22 = RaidAllocatePool(NonPagedPoolNx, 0xD0uLL, 0x44436152u, *(_QWORD *)(a1 + 8));
  v23 = v22;
  if ( !v22 )
  {
LABEL_16:
    FullDriverPath = -1073741670;
LABEL_17:
    if ( v17 )
      RaidAdapterFreeDriverInfo(&v27);
    return (unsigned int)FullDriverPath;
  }
  memset(v22, 0, 0xD0uLL);
  *((_DWORD *)v17 + 17) = 208;
  v17[9] = v23;
  v17[14] = v4;
  if ( (*(_DWORD *)(a1 + 532) & 1) != 0 || (v24 = *(_DWORD *)(a1 + 4420), v24 == 10) || v24 == 1 )
    *((_DWORD *)v17 + 16) |= 1u;
  *a3 = v17;
  return (unsigned int)FullDriverPath;
}
