/*
 * XREFs of LdrpResSetFilePointer @ 0x1800E4E58
 * Callers:
 *     LdrpResReadFile @ 0x1800E46B8 (LdrpResReadFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E476C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     ZwSetInformationFile @ 0x18009DB20 (ZwSetInformationFile.c)
 */

__int64 __fastcall LdrpResSetFilePointer(__int64 a1)
{
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  else
    return ZwSetInformationFile();
}
