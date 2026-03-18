/*
 * XREFs of XilCommonBuffer_AcquireBufferEx @ 0x1C0014FB0
 * Callers:
 *     XilEndpoint_AcquireBuffer @ 0x1C0014EA4 (XilEndpoint_AcquireBuffer.c)
 *     XilCoreUsbDevice_Create @ 0x1C0014EDC (XilCoreUsbDevice_Create.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003683C (XilEndpoint_AllocateStreamContextArray.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006CAF8 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_AcquireBuffer @ 0x1C000DB70 (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireSecureBuffer @ 0x1C002FD44 (CommonBuffer_AcquireSecureBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x1C002FE40 (CommonBuffer_AcquireShadowBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_AcquireBufferEx(void *a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  switch ( a5 )
  {
    case 1:
      return CommonBuffer_AcquireBuffer(a1, a2, a3, a4);
    case 2:
      return CommonBuffer_AcquireShadowBuffer(a2, a3, a4);
    case 3:
      return CommonBuffer_AcquireSecureBuffer();
  }
  return 0LL;
}
