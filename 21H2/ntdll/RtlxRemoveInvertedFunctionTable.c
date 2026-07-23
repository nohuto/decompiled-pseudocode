/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x180071E58
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x180071E24 (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int *v3; // rax
  bool v4; // zf
  int v5; // eax

  v2 = (unsigned int)(LdrpInvertedFunctionTable[0] - 1);
  if ( LdrpInvertedFunctionTable[0] != 1 )
  {
    v3 = &LdrpInvertedFunctionTable[6 * v2 + 6];
    do
    {
      if ( a2 == *(_QWORD *)v3 )
        break;
      v3 -= 6;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  if ( (_DWORD)v2 )
  {
    LdrProtectMrdata(0);
    _InterlockedIncrement(&dword_180181508);
    v5 = LdrpInvertedFunctionTable[0];
    if ( LdrpInvertedFunctionTable[0] != 2 )
    {
      memmove(
        &LdrpInvertedFunctionTable[4 * v2 + 4 + 2 * v2],
        &LdrpInvertedFunctionTable[4 * (unsigned int)(v2 + 1) + 4 + 2 * (unsigned int)(v2 + 1)],
        24LL * (unsigned int)(LdrpInvertedFunctionTable[0] - v2 - 1));
      v5 = LdrpInvertedFunctionTable[0];
    }
    LdrpInvertedFunctionTable[0] = v5 - 1;
    _InterlockedIncrement(&dword_180181508);
    LdrProtectMrdata(1);
  }
}
