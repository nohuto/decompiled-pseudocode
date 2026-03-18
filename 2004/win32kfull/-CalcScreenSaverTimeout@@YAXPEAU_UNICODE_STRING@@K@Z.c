/*
 * XREFs of ?CalcScreenSaverTimeout@@YAXPEAU_UNICODE_STRING@@K@Z @ 0x1C00490D4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     GetEasTimeout @ 0x1C0049164 (GetEasTimeout.c)
 */

void __fastcall CalcScreenSaverTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int EasTimeout; // esi
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v4 = a2;
  EasTimeout = GetEasTimeout(a1, a2, a3, a4);
  if ( (unsigned int)FastGetProfileIntFromID(a1, 4LL, 99LL) && (!EasTimeout || v7 < EasTimeout) )
    EasTimeout = v7;
  xxxSystemParametersInfo(15LL, EasTimeout, 0LL, 0x8000LL, &v7, v4);
}
