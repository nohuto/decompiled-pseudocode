/*
 * XREFs of Crashdump_Endpoint_SendBulkTransfer @ 0x1C004D0CC
 * Callers:
 *     Crashdump_DoBulkTransfer @ 0x1C004A0C8 (Crashdump_DoBulkTransfer.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C004D5BC (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendBulkTransfer(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r14
  int v7; // eax
  __int64 v8; // rbp
  unsigned int v9; // esi
  bool v10; // cf
  __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned __int64 v13; // r15
  unsigned int v14; // r12d
  unsigned int v15; // r15d
  unsigned int v16; // edi
  __int64 v17; // r8
  unsigned int v18; // ecx
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 v27; // r8
  int v28; // r10d
  __int64 v29; // r9
  int *v30; // rdx
  unsigned int v31; // ebx
  unsigned int v32; // eax
  signed __int32 v34[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-40h]
  unsigned __int64 v36; // [rsp+78h] [rbp+10h]

  v4 = a3;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: begin: length: 0x%X TransferPA: 0x%I64X\n",
    *(_DWORD *)(a2 + 36),
    *a3);
  v7 = *((_DWORD *)a1 + 40);
  if ( v7 )
    v8 = a1[14];
  else
    v8 = a1[11];
  v9 = *(_DWORD *)(a2 + 36);
  v10 = v7 != 0;
  v11 = *a1;
  a1[22] = a2;
  v12 = 0;
  v13 = (-(__int64)v10 & 0xFFFFFFFFFFFFFFE8uLL) + 104;
  v36 = v13;
  if ( *(_BYTE *)(v11 + 627) )
    v14 = ((unsigned int)*((unsigned __int16 *)a1 + 27) + *(_DWORD *)(a2 + 36) - 1) / *((unsigned __int16 *)a1 + 27);
  else
    v14 = 0;
  if ( v9 )
  {
    v15 = 0;
    do
    {
      v16 = 4096;
      if ( (*(_DWORD *)v4 & 0xFFFLL) != 0 )
        v16 = 4096 - (*(_DWORD *)v4 & 0xFFF);
      if ( v9 < v16 )
        v16 = v9;
      v17 = v8 + 16LL * v12;
      v15 += v16;
      *(_OWORD *)v17 = 0LL;
      v18 = *(_DWORD *)(v17 + 12) & 0xFFFF03EF | 0x410;
      v19 = v16 ^ *(_DWORD *)(v17 + 8);
      *(_DWORD *)(v17 + 12) = v18;
      v20 = *(_DWORD *)(v17 + 8) ^ v19 & 0x1FFFF;
      *(_QWORD *)v17 = *v4;
      *(_DWORD *)(v17 + 8) = v20;
      *(_DWORD *)(v17 + 12) = v18 & 0xFFFFFFFE | (v12 != 0);
      if ( !*(_BYTE *)(*a1 + 627) || v9 == v16 )
      {
        v21 = 0;
      }
      else
      {
        v21 = v14 - v15 / *((unsigned __int16 *)a1 + 27);
        if ( v21 > 0x1F )
          v21 = 31;
      }
      v35 = v16;
      *(_DWORD *)(v17 + 8) = v20 ^ (v20 ^ (v21 << 17)) & 0x3E0000;
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Normal TRB %u: PA: 0x%I64X, length: 0x%X\n", v12++, *v4++, v35);
      v9 -= v16;
    }
    while ( v9 );
    v13 = v36;
  }
  v22 = v8 + 16LL * v12;
  *(_DWORD *)(v8 + 16LL * (v12 - 1) + 12) |= 2u;
  *(_OWORD *)v22 = 0LL;
  v23 = *(_DWORD *)(v22 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v22 + 12) = v23;
  v24 = a1[21];
  *(_DWORD *)(v22 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v22 + 12) = v23 | 0x21;
  *(_QWORD *)v22 = v24;
  v25 = v8 + 16LL * (v12 + 1);
  *(_OWORD *)v25 = 0LL;
  v26 = *(_DWORD *)(v25 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v25 + 12) = v26;
  *(_QWORD *)v25 = *(__int64 *)((char *)a1 + v13);
  *(_DWORD *)(v25 + 12) = v26 & 0xFFFFFFFC | 1;
  *((_DWORD *)a1 + 40) = *((_DWORD *)a1 + 40) == 0;
  *(_BYTE *)(v8 + 12) ^= 1u;
  _InterlockedOr(v34, 0);
  if ( a4 )
  {
    v27 = a1[3];
    v28 = *((_DWORD *)a1 + 8);
    v29 = *(_QWORD *)(**(_QWORD **)(v27 + 8) + 48LL);
    if ( v29 )
      v30 = (int *)(v29 + 4LL * *(unsigned __int8 *)(v27 + 56));
    else
      v30 = 0LL;
    *v30 = (unsigned __int8)v28 | (*((_BYTE *)a1 + 128) != 0 ? 0x10000 : 0);
    _InterlockedOr(v34, 0);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n",
      *(unsigned __int8 *)(v27 + 56),
      v28);
    v31 = 259;
  }
  else
  {
    v32 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
    *(_DWORD *)(v8 + 12) &= ~1u;
    v31 = v32;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: end 0x%X\n", v31);
  return v31;
}
