/*
 * XREFs of LdrpIgnoreReadFaultsFilter @ 0x4B32F3EE
 * Callers:
 *     LdrpProtectedCopyMemory @ 0x4B32F440 (LdrpProtectedCopyMemory.c)
 * Callees:
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

int __fastcall LdrpIgnoreReadFaultsFilter(int a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // ecx

  if ( (a1 == -1073741818 || a1 == -1073741819)
    && !*(_DWORD *)(*(_DWORD *)a2 + 20)
    && (v5 = *(_DWORD *)(*(_DWORD *)a2 + 24), v5 >= a4)
    && v5 < a4 + a5 )
  {
    return 1;
  }
  else
  {
    return LdrpGenericExceptionFilter(a2, "LdrpProtectedCopyMemory");
  }
}
