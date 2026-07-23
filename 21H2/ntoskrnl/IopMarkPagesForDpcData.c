/*
 * XREFs of IopMarkPagesForDpcData @ 0x14050C04C
 * Callers:
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14050BCF0 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall IopMarkPagesForDpcData(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // r8
  unsigned int v8; // ebp
  _QWORD *v9; // rdi
  __int64 result; // rax
  _QWORD *i; // rbx

  v1 = 0;
  v2 = 0LL;
  if ( !(_DWORD)KeNumberProcessors_0 )
    return v1;
  while ( 1 )
  {
    v4 = KiProcessorBlock[v2];
    if ( v4 )
      break;
LABEL_18:
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= (unsigned int)KeNumberProcessors_0 )
      return v1;
  }
  v5 = *(_QWORD *)(v4 + 33960);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v4 + 33968) - v5;
    v7 = (unsigned int)(8 * dword_140CFB32C);
    if ( v6 <= (unsigned int)v7 )
      v7 = v6;
    if ( !(_DWORD)v7 )
      v7 = 8LL * (unsigned int)KiDpcWatchdogProfileArrayLength;
    MmAddRangeToCrashDump(a1, v5, v7);
  }
  v8 = 0;
  v9 = (_QWORD *)(v4 + 12480);
  while ( 1 )
  {
    result = MmAddRangeToCrashDump(a1, v9, 40LL);
    v1 = result;
    if ( (int)result < 0 )
      return result;
    for ( i = (_QWORD *)*v9; i; i = (_QWORD *)*i )
    {
      result = MmAddRangeToCrashDump(a1, i - 1, 64LL);
      v1 = result;
      if ( (int)result < 0 )
        return result;
      if ( i[6] != 1LL )
      {
        result = MmAddRangeToCrashDump(a1, i[6], 96LL);
        v1 = result;
        if ( (int)result < 0 )
          return result;
      }
    }
    ++v8;
    v9 += 5;
    if ( v8 >= 2 )
      goto LABEL_18;
  }
}
