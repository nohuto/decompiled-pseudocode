/*
 * XREFs of FirmwareGetInfo @ 0x1C00017FC
 * Callers:
 *     IoctlFirmwareProcess @ 0x1C0001738 (IoctlFirmwareProcess.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001F64 (BuildGetLogPageCommand.c)
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000456C (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 */

__int64 __fastcall FirmwareGetInfo(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  unsigned int v5; // eax
  unsigned int *v6; // rsi
  __int64 SrbExtension; // rbx
  void *v8; // r9
  int v9; // r8d
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned __int8 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+F8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+100h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_DWORD **)(a2 + 64);
  else
    v4 = *(_DWORD **)(a2 + 24);
  v5 = v4[12];
  if ( v5 < 0x10 )
  {
    v13 = 21;
    v4[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v14 = 0LL;
    v15 = 0LL;
    v11 = -1056964602;
LABEL_15:
    StorPortExtendedFunction(
      87LL,
      a1,
      0LL,
      0LL,
      1,
      L"Firmware GetInfo",
      64LL,
      2,
      0,
      a2,
      L"SrbStatus",
      v13,
      L"BufferLength",
      (unsigned int)v4[12],
      L"Version",
      v15,
      L"Size",
      v14);
    return v11;
  }
  v6 = (_DWORD *)((char *)v4 + (unsigned int)v4[11]);
  if ( v5 < 0x18 && *v6 == 2 && v6[1] >= 0x18 )
  {
    v4[5] = 3;
    *(_BYTE *)(a2 + 3) = 21;
    v11 = -1056964602;
LABEL_14:
    v14 = v6[1];
    v15 = *v6;
    v13 = *(_BYTE *)(a2 + 3);
    goto LABEL_15;
  }
  NVMeAllocateDmaBuffer(a1, 512LL, &v16, &v17);
  if ( !v16 )
  {
    *(_BYTE *)(a2 + 3) = 4;
    v11 = -1056964605;
    v4[5] = 1;
    goto LABEL_14;
  }
  SrbExtension = GetSrbExtension(a2);
  memset(v8, 0, 0x200uLL);
  *(_BYTE *)(SrbExtension + 4253) |= 3u;
  SrbAssignQueueId(a1, a2);
  LOBYTE(v9) = 3;
  BuildGetLogPageCommand(a1, SrbExtension, v9, 512, v17, -1, 0LL, 0);
  *(_BYTE *)(SrbExtension + 4253) |= 4u;
  *(_QWORD *)(SrbExtension + 4224) = NVMeGetLogPageFirmwareSlotCompletion;
  *(_QWORD *)(SrbExtension + 4200) = v16;
  v10 = v17;
  *(_DWORD *)(SrbExtension + 4240) = 512;
  v11 = 0;
  *(_QWORD *)(SrbExtension + 4208) = v10;
  return v11;
}
