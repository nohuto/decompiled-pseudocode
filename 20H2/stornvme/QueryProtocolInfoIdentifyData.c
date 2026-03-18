/*
 * XREFs of QueryProtocolInfoIdentifyData @ 0x1C0014F9C
 * Callers:
 *     IoctlQueryProtocolInfoProcess @ 0x1C00013B0 (IoctlQueryProtocolInfoProcess.c)
 * Callees:
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 */

__int64 __fastcall QueryProtocolInfoIdentifyData(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  __int64 result; // rax
  char v9; // cl
  int v10; // eax
  int v11; // eax
  int NamespaceId; // edi
  unsigned __int8 v13; // cl
  __int64 v14; // rcx
  void *v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  SrbExtension = GetSrbExtension(a2);
  v16 = 0LL;
  v6 = SrbExtension;
  if ( *(_BYTE *)(v5 + 2) == 40 )
    v7 = *(_DWORD **)(v5 + 64);
  else
    v7 = *(_DWORD **)(v5 + 24);
  if ( v7[14] < 0x1000u )
  {
    *(_BYTE *)(v5 + 3) = 21;
    return 3238002694LL;
  }
  NVMeAllocateDmaBuffer(a1, 4096LL, &v15, &v16);
  if ( v15 )
  {
    memset(v15, 0, 0x1000uLL);
    v9 = *(_BYTE *)(a2 + 2);
    if ( v9 == 40 )
      v10 = *(_DWORD *)(a2 + 24);
    else
      v10 = *(_DWORD *)(a2 + 12);
    if ( (v10 & 1) != 0 )
    {
      v11 = v7[11];
      if ( v11 == 1 )
      {
        NamespaceId = 0;
      }
      else if ( v11 || (NamespaceId = v7[12]) == 0 )
      {
        *(_BYTE *)(a2 + 3) = 6;
        return 3238002694LL;
      }
    }
    else
    {
      if ( v9 == 40 )
        v13 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v13 = *(_BYTE *)(a2 + 7);
      NamespaceId = GetNamespaceId(a1, v13);
    }
    *(_BYTE *)(v6 + 4253) |= 3u;
    SrbAssignQueueId(a1, a2);
    v14 = v16;
    *(_BYTE *)(v6 + 4096) = 6;
    *(_DWORD *)(v6 + 4100) = NamespaceId;
    *(_BYTE *)(v6 + 4136) = NamespaceId == 0;
    *(_QWORD *)(v6 + 4120) = v14;
    *(_BYTE *)(v6 + 4253) |= 4u;
    *(_QWORD *)(v6 + 4224) = QueryProtocolInfoCompletion;
    *(_QWORD *)(v6 + 4200) = v15;
    *(_QWORD *)(v6 + 4208) = v16;
    result = 0LL;
    *(_DWORD *)(v6 + 4240) = 4096;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 4;
    return 3238002691LL;
  }
  return result;
}
