/*
 * XREFs of sub_180083AFC @ 0x180083AFC
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_180083B4C @ 0x180083B4C (sub_180083B4C.c)
 */

BOOLEAN sub_180083AFC()
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)qword_1800B4E98;
  sub_180083B4C(qword_1800B4E98);
  HamDisconnectFromServer(v0[9]);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v0);
}
