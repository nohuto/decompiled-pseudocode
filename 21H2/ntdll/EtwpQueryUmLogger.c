/*
 * XREFs of EtwpQueryUmLogger @ 0x18004F944
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpFlushUmLogger @ 0x18004FA7C (EtwpFlushUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x180111000 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1801114C0 (EtwpUpdateUmLogger.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     EtwpGetUmLoggerInfoFromContext @ 0x18004863C (EtwpGetUmLoggerInfoFromContext.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004C054 (EtwpGetPrivateLoggerContext.c)
 */

__int64 __fastcall EtwpQueryUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // ecx
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = 0LL;
  result = EtwpGetPrivateLoggerContext(a4, v11);
  if ( !(_DWORD)result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 < 0xB0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v11[0] + 20) + 8));
      return 234LL;
    }
    else
    {
      v9 = v11[0];
      if ( (unsigned int)*(unsigned __int16 *)(v11[0] + 154) + 176 < a1 )
      {
        *(_QWORD *)(a4 + 152) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v9 + 154);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v9 + 152));
        *a3 += *(unsigned __int16 *)(v9 + 154);
      }
      EtwpGetUmLoggerInfoFromContext(a4, v9, 0LL);
      v10 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v10 + *(unsigned __int16 *)(v9 + 170) < a1 )
      {
        *(_QWORD *)(a4 + 136) = a4 + v10;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v9 + 170);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 128), (PCUNICODE_STRING)(v9 + 168));
        *a3 += *(unsigned __int16 *)(v9 + 170);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
      return 0LL;
    }
  }
  return result;
}
