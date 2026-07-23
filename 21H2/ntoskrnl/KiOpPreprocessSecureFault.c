/*
 * XREFs of KiOpPreprocessSecureFault @ 0x140514E40
 * Callers:
 *     KiPreprocessFault @ 0x1402618D0 (KiPreprocessFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall KiOpPreprocessSecureFault(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rdx

  if ( !VslVsmEnabled || *(_DWORD *)(BugCheckParameter2 + 24) != 2 )
    KeBugCheckEx(0x12u, 4uLL, BugCheckParameter2, BugCheckParameter3, *(_QWORD *)(BugCheckParameter2 + 32));
  v3 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( !v3 || v3 > 2 && v3 != 4 )
    KeBugCheckEx(0x18Du, v3, *(_QWORD *)(BugCheckParameter2 + 40), BugCheckParameter2, BugCheckParameter3);
  *(_DWORD *)BugCheckParameter2 = 268435460;
  *(_DWORD *)(BugCheckParameter2 + 24) = 2;
  if ( v3 == 1 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 8LL;
  else
    *(_QWORD *)(BugCheckParameter2 + 32) = v3 != 2;
  return 0;
}
