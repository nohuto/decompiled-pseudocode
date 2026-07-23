/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF54C
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpEnsureBufferSize @ 0x18006ED30 (RtlpEnsureBufferSize.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180077E30 (RtlExpandEnvironmentStrings_U.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

__int64 __fastcall sxsisol_ExpandEnvironmentStrings_UEx(__int64 a1, _UNICODE_STRING *a2, _UNICODE_STRING *a3)
{
  NTSTATUS v5; // ebx
  SIZE_T v6; // r8
  _UNICODE_STRING *v7; // rbx
  wchar_t *v8; // rcx
  unsigned __int16 Length; // cx
  unsigned __int64 v10; // rcx
  SIZE_T v11; // r8
  _UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF
  __int64 ReturnedLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnedLength = a1;
  if ( a2 && a3 && a2 != a3 )
  {
    if ( a2->Length )
    {
      Destination = 0LL;
      RtlEnterCriticalSection(&FastPebLock);
      v5 = RtlExpandEnvironmentStrings_U(0LL, a2, &Destination, (PULONG)&ReturnedLength);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -1073741789 )
      {
        if ( (unsigned int)ReturnedLength > 0xFFFE || (v11 = (unsigned int)ReturnedLength + 4LL, v11 > 0xFFFE) )
        {
          v5 = -1073741562;
        }
        else if ( (a3 == (_UNICODE_STRING *)-16LL || v11 > *(_QWORD *)&a3[2].Length)
               && (int)RtlpEnsureBufferSize(0, (__int64)&a3[1], v11) < 0 )
        {
          v5 = -1073741801;
        }
        else
        {
          a3->Buffer = *(wchar_t **)&a3[1].Length;
          a3->MaximumLength = a3[2].Length;
          v5 = RtlExpandEnvironmentStrings_U(0LL, a2, a3, 0LL);
          if ( v5 >= 0 )
            v5 = 0;
        }
      }
      RtlLeaveCriticalSection(&FastPebLock);
    }
    else
    {
      a3->Length = 0;
      v6 = a2->Length + 2LL;
      if ( v6 <= 0xFFFE )
      {
        v7 = a3 + 1;
        if ( (a3 == (_UNICODE_STRING *)-16LL || v6 > *(_QWORD *)&a3[2].Length)
          && (int)RtlpEnsureBufferSize(0, (__int64)&a3[1], v6) < 0 )
        {
          return (unsigned int)-1073741801;
        }
        else
        {
          v8 = *(wchar_t **)&v7->Length;
          a3->Buffer = *(wchar_t **)&v7->Length;
          memmove(&v8[(unsigned __int64)a3->Length >> 1], a2->Buffer, a2->Length);
          Length = a3->Length;
          a3->MaximumLength = a2->Length + a3->Length + 2;
          v10 = (unsigned __int16)(a2->Length + Length);
          a3->Length = v10;
          a3->Buffer[v10 >> 1] = 0;
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741562;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
