/*
 * XREFs of _RtlStringCchCopyExW@24 @ 0x4B330DC4
 * Callers:
 *     _LdrpEventAddUnicodeString@16 @ 0x4B32FC55 (_LdrpEventAddUnicodeString@16.c)
 *     _LdrpMakeUnicodeStringFromPathElement@12 @ 0x4B330CBB (_LdrpMakeUnicodeStringFromPathElement@12.c)
 *     _RtlpGetCompleteLanguageFallback@20 @ 0x4B353F7A (_RtlpGetCompleteLanguageFallback@20.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 * Callees:
 *     RtlStringCopyWorkerW_1 @ 0x4B330E59 (RtlStringCopyWorkerW_1.c)
 */

int __fastcall RtlStringCchCopyExW(_WORD *a1, int a2, _WORD *a3, _DWORD *a4, int *a5, int a6)
{
  int v6; // edi
  _WORD *v7; // ebx
  int v8; // esi
  int v9; // eax
  int v11; // [esp+Ch] [ebp-4h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = 0;
  if ( a2 <= 0 )
    v8 = -1073741811;
  if ( v8 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v8 = 0;
    if ( a2 )
    {
      v11 = 0;
      v9 = RtlStringCopyWorkerW_1(&v11, a3, 0);
      v8 = v9;
      v6 -= v11;
      v7 += v11;
      if ( v9 < 0 && v9 != -2147483643 )
        return v8;
    }
    else if ( *a3 )
    {
      if ( !a1 )
        return -1073741811;
      v8 = -2147483643;
    }
    if ( a4 )
      *a4 = v7;
    if ( a5 )
      *a5 = v6;
  }
  return v8;
}
