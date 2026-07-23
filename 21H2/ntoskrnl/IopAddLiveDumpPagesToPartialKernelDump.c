/*
 * XREFs of IopAddLiveDumpPagesToPartialKernelDump @ 0x14050B9D8
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14050B8E0 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     IoSaveBugCheckProgress @ 0x140502700 (IoSaveBugCheckProgress.c)
 *     IopDumpCallAddPagesCallbacks @ 0x140503C80 (IopDumpCallAddPagesCallbacks.c)
 *     IopMarkPagesForDeviceNode @ 0x14050BFEC (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForProcessorData @ 0x14050C22C (IopMarkPagesForProcessorData.c)
 *     MmAddPrivateDataToCrashDump @ 0x1405386D0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     ExAddPrivateDataToCrashDump @ 0x1405B3780 (ExAddPrivateDataToCrashDump.c)
 */

__int64 __fastcall IopAddLiveDumpPagesToPartialKernelDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 *i; // rbx
  _QWORD **v13; // rsi
  _QWORD *v14; // rdi
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h]
  _QWORD v18[5]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h]
  unsigned int v20; // [rsp+C8h] [rbp+48h] BYREF
  int v21; // [rsp+CCh] [rbp+4Ch]

  v21 = HIDWORD(a4);
  v19 = 0LL;
  v20 = 0;
  v17 = 0LL;
  v16 = 0LL;
  v8 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v9 = *(_QWORD *)(v8 + 48);
  v18[1] = 0LL;
  v19 = 3LL;
  v15[0] = v9;
  v15[1] = v8 + 56;
  v18[2] = v15;
  v18[4] = &AvailablePagesForPartialDump;
  v18[0] = IoSetDumpRangeForPartialKernelDump;
  v18[3] = v8;
  result = MmAddRangeToCrashDump(v18, &KdDebuggerDataBlock, 896LL);
  if ( (int)result >= 0 )
  {
    result = MmAddRangeToCrashDump(v18, KiProcessorBlock, 8LL * (unsigned int)KeNumberProcessors_0);
    if ( (int)result >= 0 )
    {
      v11 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          result = MmAddRangeToCrashDump(v18, KiProcessorBlock[v11], 44800LL);
          if ( (int)result < 0 )
            break;
          v11 = (unsigned int)(v11 + 1);
          if ( (unsigned int)v11 >= (unsigned int)KeNumberProcessors_0 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        *((_QWORD *)&v16 + 1) = qword_140CFC848[0];
        *(_QWORD *)&v16 = KeActiveProcessors;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v20, (unsigned __int16 **)&v16) )
        {
          result = IopMarkPagesForProcessorData(v18, v20);
          if ( (int)result < 0 )
            return result;
        }
        result = MmAddPrivateDataToCrashDump(v18, 2LL);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v18, 0xFFFFF78000000000uLL, 1824LL);
          if ( (int)result >= 0 )
          {
            result = MmAddPrivateDataToCrashDump(v18, 4LL);
            if ( (int)result >= 0 )
            {
              result = MmAddPrivateDataToCrashDump(v18, 8LL);
              if ( (int)result >= 0 )
              {
                if ( !MmPhysicalMemoryBlock
                  || (result = MmAddRangeToCrashDump(
                                 v18,
                                 MmPhysicalMemoryBlock,
                                 16 * ((unsigned int)(*(_DWORD *)MmPhysicalMemoryBlock - 1) + 2LL)),
                      (int)result >= 0) )
                {
                  result = MmAddPrivateDataToCrashDump(v18, 32LL);
                  if ( (int)result >= 0 )
                  {
                    if ( a1 != 351 || a2 != 2 )
                      goto LABEL_24;
                    result = MmAddRangeToCrashDump(v18, a3, 56LL);
                    if ( (int)result < 0 )
                      return result;
                    if ( (unsigned int)IopMarkPagesForDeviceNode(v18, *(_QWORD *)(a3 + 48)) == -1073741789 )
                      return 3221225507LL;
                    if ( !a5 || (result = IopMarkPagesForDeviceNode(v18, a5), (int)result >= 0) )
                    {
LABEL_24:
                      result = ExAddPrivateDataToCrashDump(v18);
                      if ( (int)result >= 0 )
                      {
                        for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
                        {
                          v13 = (_QWORD **)(i + 51);
                          v14 = *v13;
                          result = MmAddRangeToCrashDump(v18, i - 137, 2624LL);
                          if ( (int)result < 0 )
                            return result;
                          while ( v14 != v13 )
                          {
                            result = MmAddRangeToCrashDump(v18, v14 - 157, 2200LL);
                            if ( (int)result < 0 )
                              return result;
                            result = MmAddRangeToCrashDump(v18, *(v14 - 151), *(v14 - 150) - *(v14 - 151));
                            if ( (int)result < 0 )
                              return result;
                            v14 = (_QWORD *)*v14;
                          }
                        }
                        result = MmAddPrivateDataToCrashDump(v18, 16LL);
                        if ( (int)result >= 0 )
                        {
                          IopDumpCallAddPagesCallbacks(a1);
                          IoSaveBugCheckProgress(33);
                          return MmAddPrivateDataToCrashDump(v18, 1LL);
                        }
                      }
                    }
                  }
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
