/*
 * XREFs of MiSelectSessionAttachProcess @ 0x14029748C
 * Callers:
 *     MiGetNextSession @ 0x1402537F8 (MiGetNextSession.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     MiReferenceOwningSession @ 0x140340E64 (MiReferenceOwningSession.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1405374D0 (MiLockAndSelectSessionAttachProcess.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14021EB40 (ObReferenceObjectSafeWithTag.c)
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
        && ObReferenceObjectSafeWithTag((__int64)(i - 148)) )
      {
        return i - 148;
      }
    }
  }
  return 0LL;
}
