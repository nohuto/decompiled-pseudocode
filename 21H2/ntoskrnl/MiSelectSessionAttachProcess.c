/*
 * XREFs of MiSelectSessionAttachProcess @ 0x1402AAEAC
 * Callers:
 *     MiReferenceOwningSession @ 0x140215E5C (MiReferenceOwningSession.c)
 *     MiGetNextSession @ 0x1402872F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x1402AAD40 (MmGetSessionById.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x140539210 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 */

_QWORD *__fastcall MiSelectSessionAttachProcess(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  _QWORD *v3; // rdi

  if ( *(_QWORD *)(a1 + 680) && (*(_DWORD *)(a1 + 4) & 2) == 0 )
  {
    v1 = (_QWORD *)(a1 + 16);
    for ( i = *(_QWORD **)(a1 + 16); i != v1; i = (_QWORD *)*i )
    {
      v3 = i - 148;
      if ( (*((_BYTE *)i + 665) & 1) == 0
        && (*((_DWORD *)v3 + 281) & 0xC00u) >= 0xC00
        && (*((_BYTE *)v3 + 1851) & 0x60) != 0x40
        && (unsigned __int8)ObReferenceObjectSafeWithTag(i - 148, 1953261124LL) )
      {
        return i - 148;
      }
    }
  }
  return 0LL;
}
