/*
 * XREFs of CmpLockKcbStackExclusive @ 0x140692B70
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406ED80C (CmpStartSiloRegistryNamespace.c)
 *     CmpAssignKeySecurity @ 0x1407BA790 (CmpAssignKeySecurity.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
 */

void __fastcall CmpLockKcbStackExclusive(__int64 a1)
{
  __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbExclusive(KcbAtLayerHeight);
  }
}
