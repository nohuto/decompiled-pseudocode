/*
 * XREFs of IopLiveDumpMarkRequiredDumpData @ 0x1409ADD1C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409ACE10 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508C08 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceMarkRequiredDumpDataDuration @ 0x140509C74 (IopLiveDumpTraceMarkRequiredDumpDataDuration.c)
 *     MmAddPrivateDataToCrashDump @ 0x1405386D0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1409AD928 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1409ADB4C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1409ADC08 (IopLiveDumpMarkProcessorData.c)
 */

__int64 __fastcall IopLiveDumpMarkRequiredDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, __int64, __int64))
{
  int v2; // eax
  __int64 MillisecondCounter; // rsi
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v12; // [rsp+30h] [rbp-40h]
  int v13; // [rsp+32h] [rbp-3Eh]
  __int16 v14; // [rsp+36h] [rbp-3Ah]
  __int64 (__fastcall *v15[5])(_QWORD, __int64, __int64); // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v15[3] = 0LL;
  v16 = 0LL;
  v13 = 0;
  MillisecondCounter = 0LL;
  v14 = 0;
  v17 = 0;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  LODWORD(v16) = v16 | 1;
  v15[2] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))(a1 + 544);
  v15[4] = a2;
  v15[0] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))IoSetDumpRange;
  v15[1] = 0LL;
  result = MmAddRangeToCrashDump(v15, (unsigned __int64)&KdDebuggerDataBlock, 896LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(v15, (unsigned __int64)KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      result = IopLiveDumpMarkLoadedModuleList(v15);
      if ( (int)result >= 0 )
      {
        v11[1] = (unsigned __int16 *)qword_140CFC848[0];
        v11[0] = (unsigned __int16 *)KeActiveProcessors;
        v12 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v17, v11) )
        {
          result = IopLiveDumpMarkProcessorData(v15, v17);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v15, 2);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v15, 0xFFFFF78000000000uLL, 1824LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v15, 4);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v15, 8);
              v7 = result;
              if ( (int)result >= 0 )
              {
                if ( *(_DWORD *)a1 != 351
                  || *(_QWORD *)(a1 + 8) != 2LL
                  || (v8 = *(_QWORD *)(a1 + 16), result = MmAddRangeToCrashDump(v15, v8, 56LL), (int)result >= 0)
                  && (result = IopLiveDumpMarkDeviceNode(v15, *(_QWORD *)(v8 + 48)), v7 = result, (int)result >= 0)
                  && ((v9 = *(_QWORD *)(a1 + 32)) == 0
                   || (result = IopLiveDumpMarkDeviceNode(v15, v9), v7 = result, (int)result >= 0)) )
                {
                  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
                  {
                    v10 = IopLiveDumpGetMillisecondCounter(0);
                    IopLiveDumpTraceMarkRequiredDumpDataDuration((const GUID *)a1, v10 - MillisecondCounter);
                  }
                  return v7;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
