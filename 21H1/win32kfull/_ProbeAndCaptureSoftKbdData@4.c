/*
 * XREFs of _ProbeAndCaptureSoftKbdData@4 @ 0x14F275
 * Callers:
 *     _NtUserfnIMECONTROL@28 @ 0x16B7D6 (_NtUserfnIMECONTROL@28.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

unsigned int *__fastcall ProbeAndCaptureSoftKbdData(_DWORD *a1)
{
  _DWORD *v1; // edi
  unsigned int v2; // ebx
  int *v3; // ecx
  unsigned int *result; // eax
  ULONG *v5; // [esp+0h] [ebp-3Ch]
  unsigned int v6; // [esp+0h] [ebp-3Ch]
  unsigned int *v7; // [esp+4h] [ebp-38h]

  v1 = a1;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    a1 = (_DWORD *)_MmUserProbeAddress;
  v2 = *a1;
  if ( *a1 > 0x7FFFFFu )
    ExRaiseAccessViolation();
  ProbeForRead(v1 + 1, *a1 << 9, 1u);
  if ( ULongLongToULong((unsigned __int64)v2 << 9, v5) < 0 || (ULongAdd(4, 0, v3, v6, v7) & 0x80000000) != 0 )
    return 0;
  result = (unsigned int *)Win32AllocPool(0, 1835627349);
  if ( !result )
    ExRaiseStatus(-1073741801);
  *result = v2;
  return result;
}
