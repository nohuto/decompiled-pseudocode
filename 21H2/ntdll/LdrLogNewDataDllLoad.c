/*
 * XREFs of LdrLogNewDataDllLoad @ 0x180074360
 * Callers:
 *     LdrAddLoadAsDataTable @ 0x180074140 (LdrAddLoadAsDataTable.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800CFC50 (LdrpLogNewDllLoadInternal.c)
 */

unsigned int *__fastcall LdrLogNewDataDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int *result; // rax
  char *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8

  v4 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v5 = 2147353476LL;
  v6 = 2147353477LL;
  if ( *(_BYTE *)v5 )
  {
    v8 = (unsigned int)RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v8 & 0x10) != 0 )
      goto LABEL_18;
  }
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v4 = *((_QWORD *)result + 18) + 554LL;
  }
  if ( *(_BYTE *)v4 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v6 = *((_QWORD *)result + 18) + 555LL;
      }
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
      {
LABEL_18:
        v9 = -1LL;
        do
          ++v9;
        while ( *(_WORD *)(a2 + 2 * v9) );
        v10 = 2 * v9;
        v11 = 0xFFFFFFFFLL;
        if ( (a1 & 2) != 0 )
        {
          v11 = 5LL;
        }
        else if ( (a1 & 1) != 0 )
        {
          v11 = 6LL;
        }
        return (unsigned int *)LdrpLogNewDllLoadInternal(a1, 0LL, v11, v10, a2);
      }
    }
  }
  return result;
}
