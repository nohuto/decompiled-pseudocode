/*
 * XREFs of _WPP_RECORDER_SF_sqq@32 @ 0x1ADA0
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1AC7E (-xxxUserNotifyConsoleApplication@@YGJPAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z @ 0x17F478 (-xxxCopyDdeIn@@YGKPAXPAKPAPAXPAPAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_sqq(unsigned int a1, int a2, int a3, const char *a4, char a5, char a6)
{
  const char *v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  const char *v10; // eax
  struct RECORDER_LOG__ *v11; // [esp+Ch] [ebp-4h]

  v6 = a4;
  v11 = gFullLog;
  v7 = HIWORD(a1);
  v8 = 5;
  if ( ((1 << ((a1 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a1) + (((a1 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v7 + 1) >= 4u )
  {
    if ( a4 )
    {
      v8 = strlen(a4) + 1;
      v10 = a4;
    }
    else
    {
      v10 = "NULL";
    }
    pfnWppTraceMessage(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v7),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v7),
      43,
      a3,
      a2,
      v10,
      v8,
      &a5,
      4,
      &a6,
      4,
      0);
    v8 = 5;
  }
  if ( a4 )
    v8 = strlen(a4) + 1;
  else
    v6 = "NULL";
  return _WppAutoLogTrace(v11, 4, a1, a3, a2, v6, v8, &a5, 4, &a6, 4, 0);
}
