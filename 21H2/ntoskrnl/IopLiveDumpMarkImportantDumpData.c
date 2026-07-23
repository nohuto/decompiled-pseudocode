/*
 * XREFs of IopLiveDumpMarkImportantDumpData @ 0x1409AD988
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1409ACE10 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140508C08 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceMarkImportantDumpDataDuration @ 0x140509B34 (IopLiveDumpTraceMarkImportantDumpDataDuration.c)
 *     MmAddPrivateDataToCrashDump @ 0x1405386D0 (MmAddPrivateDataToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 *     ExAddPrivateDataToCrashDump @ 0x1405B3780 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpAddTriageDumpData @ 0x1409AC1B0 (IopLiveDumpAddTriageDumpData.c)
 */

__int64 __fastcall IopLiveDumpMarkImportantDumpData(__int64 a1, __int64 (__fastcall *a2)(_QWORD, __int64, __int64))
{
  __int64 MillisecondCounter; // r14
  unsigned int v5; // ebx
  int v6; // eax
  __int64 *i; // rdi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-60h] BYREF
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h]
  __int64 (__fastcall *v17[5])(_QWORD, __int64, __int64); // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]
  unsigned int v19; // [rsp+B0h] [rbp+30h] BYREF

  v17[3] = 0LL;
  MillisecondCounter = 0LL;
  v18 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v17[1] = 0LL;
  LODWORD(v18) = v18 | 1;
  v19 = 0;
  v16 = 0LL;
  v17[2] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))(a1 + 544);
  v17[4] = a2;
  v5 = 0;
  v17[0] = (__int64 (__fastcall *)(_QWORD, __int64, __int64))IoSetDumpRange;
  v15 = 0LL;
  v14 = 0LL;
  v6 = ExAddPrivateDataToCrashDump(v17);
  if ( v6 < 0 )
  {
    if ( v6 == -1073741789 )
      return 0LL;
    v5 = v6;
  }
  for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
  {
    v8 = MmAddRangeToCrashDump(v17, (unsigned __int64)(i - 137), 2624LL);
    if ( v8 < 0 )
    {
      if ( v8 == -1073741789 )
        return 0LL;
      v5 = v8;
    }
  }
  v9 = MmAddPrivateDataToCrashDump(v17, 16);
  if ( v9 < 0 )
  {
    if ( v9 == -1073741789 )
      return 0LL;
    v5 = v9;
  }
  IopLiveDumpAddTriageDumpData((int *)a1, v17);
  v10 = MmAddPrivateDataToCrashDump(v17, 1);
  if ( v10 < 0 )
  {
    if ( v10 != -1073741789 )
    {
      v5 = v10;
      goto LABEL_18;
    }
    return 0LL;
  }
LABEL_18:
  if ( IptInterface )
  {
    *((_QWORD *)&v15 + 1) = qword_140CFC848[0];
    *(_QWORD *)&v15 = KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v19, (unsigned __int16 **)&v15) )
    {
      if ( (*(int (__fastcall **)(_QWORD, __int128 *))(IptInterface + 16))(v19, &v14) >= 0 )
      {
        v11 = MmAddRangeToCrashDump(v17, v14, *((__int64 *)&v14 + 1));
        if ( v11 < 0 )
        {
          if ( v11 == -1073741789 )
            return 0LL;
          v5 = v11;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    v13 = IopLiveDumpGetMillisecondCounter(0);
    IopLiveDumpTraceMarkImportantDumpDataDuration((const GUID *)a1, v13 - MillisecondCounter);
  }
  return v5;
}
