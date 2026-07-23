/*
 * XREFs of _LdrpTouchThreadStack@4 @ 0x4B333A93
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     _NtQueryVirtualMemory@24 @ 0x4B2F2BB0 (_NtQueryVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpGenericExceptionFilter@8 @ 0x4B334947 (_LdrpGenericExceptionFilter@8.c)
 */

NTSTATUS __fastcall LdrpTouchThreadStack(unsigned int a1)
{
  struct _TEB *v2; // edi
  NTSTATUS result; // eax
  unsigned int v4; // eax
  unsigned int v5; // ecx
  SIZE_T v6; // [esp-8h] [ebp-54h]
  ULONG_PTR *v7; // [esp+0h] [ebp-4Ch]
  _BYTE MemoryInformation[4]; // [esp+10h] [ebp-3Ch] BYREF
  int v9; // [esp+14h] [ebp-38h]
  char v10; // [esp+2Ch] [ebp-20h] BYREF
  unsigned int v11; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v2 = NtCurrentTeb();
  HIDWORD(v6) = &v10;
  LODWORD(v6) = 28;
  result = NtQueryVirtualMemory(
             (HANDLE)0xFFFFFFFF,
             v2->NtTib.StackLimit,
             MemoryBasicInformation,
             MemoryInformation,
             v6,
             v7);
  if ( result >= 0 )
  {
    v4 = (unsigned int)v2->NtTib.StackBase - 4096;
    v11 = v4;
    if ( v4 <= a1 || (v5 = v4 - a1, v4 - a1 <= v9 + 12288) )
      v5 = v9 + 12288;
    ms_exc.registration.TryLevel = 0;
    while ( v4 >= v5 )
    {
      v4 = v11 - 4096;
      v11 -= 4096;
    }
    return 0;
  }
  return result;
}
