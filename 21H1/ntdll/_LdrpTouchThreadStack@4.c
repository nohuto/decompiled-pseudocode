/*
 * XREFs of _LdrpTouchThreadStack@4 @ 0x4B333A93
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

int __fastcall LdrpTouchThreadStack(unsigned int a1)
{
  struct _TEB *v2; // edi
  int result; // eax
  unsigned int v4; // eax
  unsigned int v5; // ecx
  _BYTE v6[4]; // [esp+10h] [ebp-3Ch] BYREF
  int v7; // [esp+14h] [ebp-38h]
  _BYTE v8[4]; // [esp+2Ch] [ebp-20h] BYREF
  unsigned int v9; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v2 = NtCurrentTeb();
  result = NtQueryVirtualMemory(-1, (int)v2->NtTib.StackLimit, 0, (int)v6, 28, (int)v8);
  if ( result >= 0 )
  {
    v4 = (unsigned int)v2->NtTib.StackBase - 4096;
    v9 = v4;
    if ( v4 <= a1 || (v5 = v4 - a1, v4 - a1 <= v7 + 12288) )
      v5 = v7 + 12288;
    ms_exc.registration.TryLevel = 0;
    while ( v4 >= v5 )
    {
      v4 = v9 - 4096;
      v9 -= 4096;
    }
    return 0;
  }
  return result;
}
