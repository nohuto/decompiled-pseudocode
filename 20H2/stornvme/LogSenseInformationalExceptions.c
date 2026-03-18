/*
 * XREFs of LogSenseInformationalExceptions @ 0x1C0012798
 * Callers:
 *     ScsiLogSenseRequest @ 0x1C001543C (ScsiLogSenseRequest.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     NVMeSetSenseData @ 0x1C001AEF8 (NVMeSetSenseData.c)
 */

__int64 __fastcall LogSenseInformationalExceptions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _DWORD *v6; // rbx
  __int64 v7; // rax
  char v8; // al
  __int64 SrbExtension; // rbx
  void *v10; // r9
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = a2;
  v13 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v6 = *(_DWORD **)(a2 + 64);
    v7 = 60LL;
  }
  else
  {
    v6 = *(_DWORD **)(a2 + 24);
    v7 = 16LL;
  }
  if ( v6 && (a2 = *(unsigned int *)(a2 + v7), (unsigned int)a2 >= 0xC) )
  {
    NVMeZeroMemory(v6, a2);
    v8 = *((_BYTE *)v6 + 6);
    *((_WORD *)v6 + 2) = 0;
    *v6 = 134217775;
    *(_DWORD *)((char *)v6 + 7) = -16777212;
    *((_BYTE *)v6 + 6) = v8 & 0x40 | 0x23;
    NVMeAllocateDmaBuffer(a1, 512LL, &v12, &v13);
    if ( v12 )
    {
      SrbExtension = GetSrbExtension(v4);
      memset(v10, 0, 0x200uLL);
      *(_BYTE *)(SrbExtension + 4253) |= 3u;
      SrbAssignQueueId(a1, v4);
      BuildGetLogPageCommand(a1, SrbExtension, 2u, 0x200u, v13, -1, 0LL, 0);
      *(_BYTE *)(SrbExtension + 4253) |= 4u;
      *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageHealthInfoCompletion;
      *(_QWORD *)(SrbExtension + 4200) = v12;
      *(_QWORD *)(SrbExtension + 4208) = v13;
      *(_DWORD *)(SrbExtension + 4240) = 512;
      *(_QWORD *)(SrbExtension + 4232) = 47LL;
    }
    else
    {
      *(_BYTE *)(v4 + 3) = 4;
    }
    return 0LL;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return 3238002694LL;
  }
}
