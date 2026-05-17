/*
 * XREFs of _RtlpDestroyHeapSegment@4 @ 0x4B2AFA04
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 * Callees:
 *     _RtlpSecMemFreeVirtualMemory@16 @ 0x4B2AFA7A (_RtlpSecMemFreeVirtualMemory@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHeapLogRangeRelease@12 @ 0x4B36D880 (_RtlpHeapLogRangeRelease@12.c)
 *     _RtlpLogHeapFailure@24 @ 0x4B375E3D (_RtlpLogHeapFailure@24.c)
 */

int __thiscall RtlpDestroyHeapSegment(int this)
{
  int v2; // eax
  int v3; // ecx
  _DWORD *v4; // edx
  int v5; // edi
  int v6; // esi
  int v7; // ecx
  int v9; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 12) & 1) != 0 )
    return 0;
  v2 = this + 16;
  v3 = *(_DWORD *)(this + 16);
  v4 = *(_DWORD **)(this + 20);
  v5 = *(_DWORD *)(v3 + 4);
  if ( *v4 == v5 && *v4 == v2 )
  {
    *v4 = v3;
    *(_DWORD *)(v3 + 4) = v4;
  }
  else
  {
    RtlpLogHeapFailure(this + 16, v5, *v4, 0);
  }
  v9 = 0;
  v6 = RtlpSecMemFreeVirtualMemory(&v9, 0x8000);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (int)NtCurrentPeb()->SharedData + 558;
  else
    v7 = 2147353480;
  if ( *(_BYTE *)v7 )
    RtlpHeapLogRangeRelease(v9);
  return v6;
}
