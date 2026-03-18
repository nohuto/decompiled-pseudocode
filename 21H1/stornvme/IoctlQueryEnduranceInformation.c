/*
 * XREFs of IoctlQueryEnduranceInformation @ 0x1C0011A50
 * Callers:
 *     IoctlToNVMe @ 0x1C0001B20 (IoctlToNVMe.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     GetNamespaceId @ 0x1C0004344 (GetNamespaceId.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 */

__int64 __fastcall IoctlQueryEnduranceInformation(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  int v4; // ebp
  __int64 SrbExtension; // rax
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // r13
  unsigned __int8 v10; // cl
  __int64 v11; // r12
  _DWORD *v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 result; // rax
  int NamespaceId; // [rsp+88h] [rbp+10h]
  void *v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  v4 = 0;
  SrbExtension = GetSrbExtension(a2);
  v8 = *(_BYTE *)(v7 + 2) == 40;
  v9 = SrbExtension;
  v18 = 0LL;
  if ( v8 )
    v10 = *(_BYTE *)(*(unsigned int *)(v7 + 52) + v7 + 10);
  else
    v10 = *(_BYTE *)(v7 + 7);
  v11 = v10;
  NamespaceId = GetNamespaceId(a1, v10);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v12 = *(_DWORD **)(a2 + 64);
    v13 = 60LL;
  }
  else
  {
    v12 = *(_DWORD **)(a2 + 24);
    v13 = 16LL;
  }
  v14 = *(_DWORD *)(v13 + a2);
  if ( v14 >= 0x54 )
  {
    NVMeZeroMemory(v12 + 7, v14 - 28);
    NVMeAllocateDmaBuffer(a1, 512LL, &v17, &v18);
    if ( v17 )
    {
      memset(v17, 0, 0x200uLL);
      *(_BYTE *)(v9 + 4253) |= 3u;
      SrbAssignQueueId(a1, a2);
      BuildGetLogPageCommand(
        a1,
        v9,
        9u,
        0x200u,
        v18,
        NamespaceId,
        0LL,
        *(_WORD *)(*(_QWORD *)(a1 + 8 * v11 + 1720) + 96LL));
      *(_BYTE *)(v9 + 4253) |= 4u;
      *(_QWORD *)(v9 + 4224) = QueryEnduranceInfoLogCompletion;
      *(_QWORD *)(v9 + 4200) = v17;
      *(_QWORD *)(v9 + 4208) = v18;
      *(_DWORD *)(v9 + 4240) = 512;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 4;
      v3 = -1056964605;
    }
  }
  else
  {
    if ( v14 < 0x24 )
    {
      *(_BYTE *)(a2 + 3) = 6;
      return 3238002694LL;
    }
    v4 = 8;
    *(_BYTE *)(a2 + 3) = 1;
  }
  v12[8] = 56;
  v12[7] = 56;
  result = v3;
  v12[6] = v4;
  return result;
}
