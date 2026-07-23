/*
 * XREFs of AslpFileLargeGetCrcChecksum @ 0x14096C400
 * Callers:
 *     AslpFileLargeGetChecksumAttributes @ 0x14096C30C (AslpFileLargeGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslComputeCrc32 @ 0x140967CB8 (AslComputeCrc32.c)
 */

__int64 __fastcall AslpFileLargeGetCrcChecksum(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r8
  _BYTE *v7; // rcx
  _BYTE *v9; // rbx
  int v10; // eax
  unsigned int v11; // r8d

  *a1 = 0;
  v4 = *(_QWORD *)(*a2 + 16LL);
  if ( v4 < 0x100000 )
    return 3221225485LL;
  v5 = a2[6];
  if ( !v5 )
    return 3221225485LL;
  v6 = a2[7];
  if ( v6 < 0x1000 )
    return 3221225485LL;
  v7 = (_BYTE *)a2[2];
  if ( !v7 || a2[3] < 0x1000uLL || a2[4] )
    return 3221225485LL;
  if ( v4 - a2[8] <= v6 )
  {
    v9 = (_BYTE *)(v5 + v4 - a2[8] - 4096);
    v10 = AslComputeCrc32(0, v7, 0x1000u);
    *a1 = AslComputeCrc32(v10, v9, v11);
    return 0LL;
  }
  else
  {
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(0LL);
    AslLogCallPrintf(1LL);
    return 3221226016LL;
  }
}
