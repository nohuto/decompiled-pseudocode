/*
 * XREFs of _WPP_RECORDER_SF_ii@36 @ 0x149E47
 * Callers:
 *     _xxxInjectTouchInput@8 @ 0x14A084 (_xxxInjectTouchInput@8.c)
 *     ?FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z @ 0x15E421 (-FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall WPP_RECORDER_SF_ii(int a1, int a2, unsigned int a3, int a4, int a5, char a6, int a7, char a8, int a9)
{
  unsigned int v9; // edi
  int v11; // [esp+0h] [ebp-14h]
  int v12; // [esp+4h] [ebp-10h]
  struct RECORDER_LOG__ *v13; // [esp+Ch] [ebp-8h]
  int v14; // [esp+10h] [ebp-4h]

  v13 = gFullLog;
  v9 = HIWORD(a3);
  v14 = a2;
  if ( ((1 << ((a3 - 1) & 0x1F)) & *(&WPP_GLOBAL_Control->Characteristics + 14 * HIWORD(a3) + (((a3 - 1) >> 5) & 0x7FF))) != 0
    && *((_BYTE *)&WPP_GLOBAL_Control->Flags + 56 * v9 + 1) >= (unsigned __int8)a2 )
  {
    ((void (__cdecl *)(_DWORD, _DWORD, int, int, int, char *, int, char *, int, _DWORD))pfnWppTraceMessage)(
      *((_DWORD *)&WPP_GLOBAL_Control->AttachedDevice + 14 * v9),
      *((_DWORD *)&WPP_GLOBAL_Control->CurrentIrp + 14 * v9),
      43,
      a5,
      a4,
      &a6,
      8,
      &a8,
      8,
      0);
    a2 = v14;
  }
  return _WppAutoLogTrace(v13, a2, a3, a5, a4, &a6, 8, &a8, 8, 0, v11, v12);
}
