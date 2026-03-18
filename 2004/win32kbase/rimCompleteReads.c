/*
 * XREFs of rimCompleteReads @ 0x1C00AB9B0
 * Callers:
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0016124 (RimDeviceTypeToRimInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00565E0 (RimInputTypeToDeviceType.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C005B608 (rimFindPausedDeviceAndCompleteRead.c)
 *     DeviceTypeToRimInputType @ 0x1C00AB980 (DeviceTypeToRimInputType.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0176404 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017678C (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall rimCompleteReads(struct RawInputManagerObject *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  int v6; // r15d
  __int64 i; // rbx
  int v9; // eax
  __int64 j; // rbx
  int v11; // eax

  if ( *((_DWORD *)a1 + 21) )
  {
    rimFindPausedDeviceAndCompleteRead(a1, a2, a3, a4);
    v5 = 0;
    while ( 1 )
    {
      v6 = *((_DWORD *)a1 + 21) & DeviceTypeToRimInputType(v5);
      if ( v6 )
        break;
LABEL_4:
      if ( (unsigned int)++v5 > 2 )
        return 0LL;
    }
    for ( i = *((_QWORD *)a1 + 53); ; i = *(_QWORD *)(i + 40) )
    {
      if ( !i )
        goto LABEL_4;
      if ( v5 == 2 )
      {
        if ( ((unsigned int)RimDeviceTypeToRimInputType(i, 2) & *((_DWORD *)a1 + 21)) == 0 )
          continue;
        if ( (*(_DWORD *)(i + 200) & 0x80u) != 0 )
        {
          rimProcessAnyQueuedCompleteFrames(a1);
          continue;
        }
      }
      else if ( *(unsigned __int8 *)(i + 48) != (unsigned int)RimInputTypeToDeviceType(v6) )
      {
        continue;
      }
      v9 = *(_DWORD *)(i + 184);
      if ( (v9 & 0x400) == 0 && (v9 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)i);
    }
  }
  for ( j = *((_QWORD *)a1 + 53); j; j = *(_QWORD *)(j + 40) )
  {
    if ( (*(_DWORD *)(j + 200) & 0x80u) == 0 )
    {
      v11 = *(_DWORD *)(j + 184);
      if ( (v11 & 0x400) == 0 && (v11 & 0x200) != 0 )
        rimProcessDeviceBufferAndStartRead(a1, (struct RIMDEV *)j);
    }
    else
    {
      rimProcessAnyQueuedCompleteFrames(a1);
    }
  }
  return 0LL;
}
