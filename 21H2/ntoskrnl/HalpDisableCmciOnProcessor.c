/*
 * XREFs of HalpDisableCmciOnProcessor @ 0x1404BD380
 * Callers:
 *     <none>
 * Callees:
 *     HalpCmciSetProcessorConfig @ 0x1403A0D48 (HalpCmciSetProcessorConfig.c)
 */

ULONG_PTR __fastcall HalpDisableCmciOnProcessor(ULONG_PTR Argument)
{
  __int64 i; // rbx
  __int64 v2; // rax
  __int64 v3; // r8

  for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 176) )
  {
    v2 = *(_QWORD *)(i + 24);
    v3 = *(_QWORD *)(i + 164);
    *(_BYTE *)(i + 120) = 1;
    *(_BYTE *)(v2 + 48) = 0;
    HalpCmciSetProcessorConfig(*(_QWORD *)(i + 24), 0, v3);
  }
  return 0LL;
}
