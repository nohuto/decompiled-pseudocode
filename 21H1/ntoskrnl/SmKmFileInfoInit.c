/*
 * XREFs of SmKmFileInfoInit @ 0x140926CD4
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1402C977C (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 */

void *__fastcall SmKmFileInfoInit(void *a1)
{
  return memset(a1, 0, 0x40uLL);
}
