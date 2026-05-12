/*
 * XREFs of PortMiniportRegistryWrite @ 0x1C0059230
 * Callers:
 *     StorPortRegistryWrite @ 0x1C0039CC0 (StorPortRegistryWrite.c)
 * Callees:
 *     memset @ 0x1C001F8C0 (memset.c)
 *     AsciiToWChar @ 0x1C0058DA0 (AsciiToWChar.c)
 */

int __fastcall PortMiniportRegistryWrite(__int64 a1, __int64 a2, ULONG a3, __int64 a4)
{
  int result; // eax
  unsigned int v9; // eax
  _BYTE *ValueData; // rdi
  unsigned int v11; // r14d
  unsigned int v12; // ebp
  _WORD *PoolWithTag; // rax
  _WORD *v14; // rsi
  ULONG ValueLength; // eax

  if ( RtlCheckRegistryKey(0, *(PWSTR *)(a1 + 8)) >= 0
    || (result = RtlCreateRegistryKey(0, *(PWSTR *)(a1 + 8)), result >= 0) )
  {
    v9 = *(_DWORD *)(a4 + 52);
    ValueData = (_BYTE *)(*(_QWORD *)(a4 + 32) + v9);
    if ( a3 == 1 )
    {
      v11 = 2 * *(_DWORD *)(a4 + 44);
      v12 = v11 + 2;
      if ( v11 + 2 < v11 || v9 + v12 < v12 )
        return -1073741675;
      if ( v9 + v12 > *(_DWORD *)(a4 + 40) )
        return -1073741789;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x42526C50u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
        return -1073741670;
      memset(PoolWithTag, 0, v12);
      if ( v12 > 0xFFFF )
      {
        ExFreePoolWithTag(v14, 0x42526C50u);
        return -1073741675;
      }
      ValueLength = AsciiToWChar(v14, ValueData, (unsigned __int16)v11);
      if ( (unsigned __int16)v11 - ValueLength >= 2 )
        ValueLength += 2;
      ValueData = v14;
    }
    else
    {
      ValueLength = 4;
      if ( a3 != 4 )
        ValueLength = *(_DWORD *)(a4 + 44);
    }
    return RtlWriteRegistryValue(0, *(PCWSTR *)(a1 + 8), *(PCWSTR *)(a2 + 8), a3, ValueData, ValueLength);
  }
  return result;
}
