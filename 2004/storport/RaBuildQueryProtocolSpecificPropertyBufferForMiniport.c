/*
 * XREFs of RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0042E20
 * Callers:
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0030248 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C00485FC (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     RtlULongAdd @ 0x1C0044D7C (RtlULongAdd.c)
 */

__int64 __fastcall RaBuildQueryProtocolSpecificPropertyBufferForMiniport(__int64 a1, __int64 a2, _QWORD *a3, ULONG *a4)
{
  _DWORD *v4; // r15
  __int64 v5; // r9
  NTSTATUS v6; // esi
  char *v7; // rbx
  ULONG v8; // edi
  __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rbp
  NTSTATUS v12; // eax
  char *Pool; // rax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-58h]
  ULONG v17; // [rsp+80h] [rbp+8h] BYREF
  ULONG pulResult; // [rsp+88h] [rbp+10h] BYREF
  _QWORD *v19; // [rsp+90h] [rbp+18h]
  ULONG *v20; // [rsp+98h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = a1;
  v17 = 0;
  v6 = 0;
  pulResult = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  v10 = v4[6];
  v16 = v4[7];
  if ( *(_DWORD *)v9 == 1 )
    v11 = *(_QWORD *)(v9 + 24);
  else
    v11 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v9 != 1 )
    v9 = 0LL;
  if ( v10 < 0x28 )
  {
    v8 = 80;
  }
  else
  {
    v6 = RtlULongAdd(0x50u, v4[7], &pulResult);
    if ( v6 < 0 )
      goto LABEL_17;
    v12 = RtlULongAdd(v10 - 40, pulResult, &v17);
    v8 = v17;
    v6 = v12;
    if ( v12 < 0 )
      goto LABEL_17;
  }
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, v8, 0x72536152u, v5);
  v7 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, v8);
    *(_DWORD *)v7 = 28;
    *(_QWORD *)(v7 + 4) = 0x4C4F434F544F5250LL;
    *((_DWORD *)v7 + 4) = 2954240;
    if ( v9 )
      v14 = *(_DWORD *)(v9 + 1264);
    else
      v14 = *(_DWORD *)(v11 + 4268);
    *((_DWORD *)v7 + 3) = v14;
    *((_DWORD *)v7 + 6) = v8 - 28;
    *((_DWORD *)v7 + 7) = 48;
    *((_DWORD *)v7 + 8) = 48;
    *((_DWORD *)v7 + 9) = v4[2];
    *((_DWORD *)v7 + 10) = v4[3];
    *((_DWORD *)v7 + 11) = v4[4];
    *((_DWORD *)v7 + 12) = v4[5];
    *((_DWORD *)v7 + 13) = v10 >= 0x28 ? 0x2C : 0;
    *((_DWORD *)v7 + 14) = v16;
  }
  else
  {
    v6 = -1073741670;
  }
LABEL_17:
  *v19 = v7;
  *v20 = v8;
  return (unsigned int)v6;
}
