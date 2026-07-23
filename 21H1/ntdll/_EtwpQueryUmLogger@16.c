/*
 * XREFs of _EtwpQueryUmLogger@16 @ 0x4B2ED9ED
 * Callers:
 *     _EtwpFlushUmLogger@16 @ 0x4B2ED94C (_EtwpFlushUmLogger@16.c)
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 *     _EtwpIncrementUmLoggerFile@16 @ 0x4B381859 (_EtwpIncrementUmLoggerFile@16.c)
 *     _EtwpUpdateUmLogger@16 @ 0x4B3819CB (_EtwpUpdateUmLogger@16.c)
 * Callees:
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     @EtwpGetPrivateLoggerContext@8 @ 0x4B2EDADC (@EtwpGetPrivateLoggerContext@8.c)
 *     _EtwpGetUmLoggerInfoFromContext@12 @ 0x4B2F03CA (_EtwpGetUmLoggerInfoFromContext@12.c)
 */

int __fastcall EtwpQueryUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int result; // eax
  int v7; // ebx
  int v8; // ecx
  int v11; // [esp+14h] [ebp-4h] BYREF

  v11 = 0;
  result = EtwpGetPrivateLoggerContext(a4, &v11);
  if ( !result )
  {
    *a2 = 0;
    *a3 = 176;
    if ( a1 < 0xB0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v11 + 20) + 4));
      return 234;
    }
    else
    {
      v7 = v11;
      if ( (unsigned int)*(unsigned __int16 *)(v11 + 110) + 176 < a1 )
      {
        *(_DWORD *)(a4 + 148) = a4 + 176;
        *(_WORD *)(a4 + 146) = *(_WORD *)(v7 + 110);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 144), (PCUNICODE_STRING)(v7 + 108));
        *a3 += *(unsigned __int16 *)(v7 + 110);
      }
      EtwpGetUmLoggerInfoFromContext(0);
      v8 = *(unsigned __int16 *)(a4 + 146) + 176;
      if ( v8 + (unsigned int)*(unsigned __int16 *)(v7 + 118) < a1 )
      {
        *(_DWORD *)(a4 + 132) = v8 + a4;
        *(_WORD *)(a4 + 130) = *(_WORD *)(v7 + 118);
        RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 128), (PCUNICODE_STRING)(v7 + 116));
        *a3 += *(unsigned __int16 *)(v7 + 118);
      }
      *a2 = *a3;
      if ( *a3 < *(_DWORD *)a4 )
        *(_DWORD *)a4 = *a3;
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * *(_DWORD *)(v7 + 20) + 4));
      return 0;
    }
  }
  return result;
}
