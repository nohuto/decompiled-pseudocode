/*
 * XREFs of rimProcessKeyboardInput @ 0x1C017CFBC
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 */

NTSTATUS __fastcall rimProcessKeyboardInput(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 640) && !*(_DWORD *)(a1 + 864) )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 504, (int)a2 + 256, 0);
  result = *(_DWORD *)(a2 + 184);
  if ( (result & 0x2000) == 0 || (result & 0x20000) == 0 || (result & 0x400000) != 0 )
    return rimStackAttachAndProcessInput(a1, a2, (int)a2 + 504, (int)a2 + 256, 0);
  if ( (result & 0x100000) == 0 )
  {
    *(_DWORD *)(a2 + 184) = result | 0x100000;
    result = ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
  }
  *(_BYTE *)(a1 + 584) = 1;
  return result;
}
