/*
 * XREFs of LdrpEventAddUnicodeString @ 0x1800CEE8C
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x1800165B0 (LdrpLogDelayLoadTrigger.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CEF94 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800CF240 (LdrpLogEtwEvent.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1800D0328 (RtlStringCchCopyExW.c)
 */

unsigned __int64 __fastcall LdrpEventAddUnicodeString(__int64 a1, _WORD *a2, unsigned int a3, int *a4)
{
  unsigned __int64 result; // rax
  int v7; // ecx
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+50h] [rbp+8h] BYREF

  result = (unsigned __int64)a2;
  if ( a1 && *(_WORD *)a1 )
  {
    RtlStringCchCopyExW((_DWORD)a2, a3 >> 1, *(_QWORD *)(a1 + 8), (unsigned int)&v8, (__int64)&v9);
    result = (unsigned int)(1 - v9);
    v7 = a3 + 2 * result;
  }
  else
  {
    v7 = 2;
    if ( a3 < 2 )
      v7 = 0;
    else
      *a2 = 0;
  }
  *a4 = v7;
  return result;
}
