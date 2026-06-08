/*
 * XREFs of PerfControlCppcRequestMsr @ 0x1C0002380
 * Callers:
 *     <none>
 * Callees:
 *     ReadIoMemRaw @ 0x1C0002F10 (ReadIoMemRaw.c)
 *     WriteIoMemRaw @ 0x1C00032EC (WriteIoMemRaw.c)
 */

void __fastcall PerfControlCppcRequestMsr(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 IoMemRaw; // rax
  __int64 v7; // r10
  __int64 v8; // r11

  if ( a3 || a4 )
  {
    if ( !*(_BYTE *)(a1 + 105) || a4 )
    {
      IoMemRaw = ReadIoMemRaw(a1 + 120);
      *(_BYTE *)(a1 + 105) = 1;
    }
    else
    {
      IoMemRaw = *(_QWORD *)(a1 + 136);
      v7 = a1 + 120;
    }
    WriteIoMemRaw(v7, *(_QWORD *)(a1 + 144) & *a2 | IoMemRaw & ~*(_QWORD *)(a1 + 144));
    *(_QWORD *)(a1 + 136) = v8;
  }
}
