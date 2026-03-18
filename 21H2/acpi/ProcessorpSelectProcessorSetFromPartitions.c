/*
 * XREFs of ProcessorpSelectProcessorSetFromPartitions @ 0x1C009C294
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099330 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     IntPartAllocateAndZeroMemory @ 0x1C0023F90 (IntPartAllocateAndZeroMemory.c)
 *     ProcessorpSelectGroup @ 0x1C009C38C (ProcessorpSelectGroup.c)
 *     IntPartArbInit @ 0x1C009D7C4 (IntPartArbInit.c)
 *     IntpArbGetNextAffinity @ 0x1C009FB18 (IntpArbGetNextAffinity.c)
 */

__int64 __fastcall ProcessorpSelectProcessorSetFromPartitions(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // r14
  _QWORD *v9; // rax
  int NextAffinity; // ecx
  __int16 v11; // ax
  USHORT v12; // cx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( (_WORD)a1 != 6 )
    return 3221225485LL;
  LOBYTE(a1) = a2;
  ProcessorpSelectGroup(a1, 0LL, a4, &v13);
  v6 = v13;
  if ( *(_WORD *)(v13 + 32) )
    return 3221225485LL;
  if ( !ProcessorpDefaultIntPartitionArtiber )
  {
    result = IntPartArbInit();
    if ( (_DWORD)result == 259 )
    {
      if ( *(_BYTE *)a4 )
        return 3221226021LL;
      v12 = *(_WORD *)(v6 + 32);
      *(_OWORD *)a3 = 0LL;
      *(_WORD *)(a3 + 8) = v12;
      *(_QWORD *)a3 = KeQueryGroupAffinity(v12);
      result = 0LL;
      *(_BYTE *)a4 = 1;
      *(_QWORD *)(a4 + 24) = v6;
      return result;
    }
    if ( (int)result < 0 )
      return result;
  }
  if ( *(_BYTE *)a4 )
  {
    v9 = *(_QWORD **)(a4 + 32);
  }
  else
  {
    v8 = ProcessorpDefaultIntPartitionArtiber;
    v9 = (_QWORD *)IntPartAllocateAndZeroMemory(*(unsigned __int8 *)(*(_QWORD *)ProcessorpDefaultIntPartitionArtiber
                                                                   + 2LL) + 20LL);
    if ( v9 )
      *v9 = v8;
    *(_QWORD *)(a4 + 32) = v9;
  }
  NextAffinity = IntpArbGetNextAffinity(v9, &v14);
  if ( !*(_BYTE *)a4 )
  {
    *(_BYTE *)a4 = 1;
    *(_QWORD *)(a4 + 24) = v6;
  }
  if ( NextAffinity >= 0 )
  {
    v11 = *(_WORD *)(v6 + 32);
    *(_OWORD *)a3 = 0LL;
    *(_WORD *)(a3 + 8) = v11;
    *(_QWORD *)a3 = v14;
  }
  return (unsigned int)NextAffinity;
}
