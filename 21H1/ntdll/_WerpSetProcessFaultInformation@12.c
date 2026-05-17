/*
 * XREFs of _WerpSetProcessFaultInformation@12 @ 0x4B33B2F4
 * Callers:
 *     _RtlReportExceptionEx@20 @ 0x4B33A550 (_RtlReportExceptionEx@20.c)
 *     _RtlReportExceptionHelper@16 @ 0x4B33A890 (_RtlReportExceptionHelper@16.c)
 * Callees:
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 */

int __thiscall WerpSetProcessFaultInformation(void *this, int a2)
{
  _DWORD v3[2]; // [esp+0h] [ebp-8h] BYREF

  if ( !this )
    return -1073741585;
  v3[1] = 0;
  v3[0] = 1;
  return ZwSetInformationProcess((int)this, 63, (int)v3, 8);
}
