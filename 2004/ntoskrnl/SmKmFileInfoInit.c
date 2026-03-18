/*
 * XREFs of SmKmFileInfoInit @ 0x140927F84
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x14030B15C (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 */

void *__fastcall SmKmFileInfoInit(void *a1)
{
  return memset(a1, 0, 0x40uLL);
}
