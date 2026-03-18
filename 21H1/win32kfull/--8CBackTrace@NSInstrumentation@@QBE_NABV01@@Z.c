/*
 * XREFs of ??8CBackTrace@NSInstrumentation@@QBE_NABV01@@Z @ 0x24A114
 * Callers:
 *     ?Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z @ 0x24A37A (-Insert@CBackTraceBucket@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@KQBVCBackTrace@2@@Z.c)
 *     ?Lookup@CBackTraceBucket@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@K@Z @ 0x24A48A (-Lookup@CBackTraceBucket@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@K@Z.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

bool __thiscall NSInstrumentation::CBackTrace::operator==(void *Buf1, void *Buf2)
{
  return memcmp(Buf1, Buf2, 0x50u) == 0;
}
