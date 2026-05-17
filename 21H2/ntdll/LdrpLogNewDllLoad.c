/*
 * XREFs of LdrpLogNewDllLoad @ 0x180014A14
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CFC50 (LdrpLogNewDllLoadInternal.c)
 */

struct _PEB *__fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  char *v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdi
  struct _PEB *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v6 = 0LL;
  v7 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  v9 = 2147353477LL;
  if ( *(_BYTE *)v8 )
  {
    v5 = (unsigned int)RtlGetCurrentServiceSessionId(v5, v4)
       ? (char *)NtCurrentPeb()->SharedData + 555
       : (char *)2147353477;
    if ( (*v5 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = (struct _PEB *)RtlGetCurrentServiceSessionId(v5, v4);
  if ( (_DWORD)result )
  {
    result = NtCurrentPeb();
    v7 = (__int64)result->SharedData + 554;
  }
  if ( *(_BYTE *)v7 )
  {
    result = NtCurrentPeb();
    if ( (result->TracingFlags & 4) != 0 )
    {
      result = (struct _PEB *)RtlGetCurrentServiceSessionId(v12, v11);
      if ( (_DWORD)result )
      {
        result = NtCurrentPeb();
        v9 = (__int64)result->SharedData + 555;
      }
      if ( (*(_BYTE *)v9 & 0x20) != 0 )
      {
LABEL_18:
        if ( a1 )
          v6 = *(_QWORD *)(a1 + 48);
        return (struct _PEB *)LdrpLogNewDllLoadInternal(
                                *(_QWORD *)(a2 + 48),
                                v6,
                                *(unsigned int *)(a2 + 268),
                                *(unsigned __int16 *)(a2 + 72),
                                *(_QWORD *)(a2 + 80));
      }
    }
  }
  return result;
}
