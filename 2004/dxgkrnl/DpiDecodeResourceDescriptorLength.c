/*
 * XREFs of DpiDecodeResourceDescriptorLength @ 0x1C017651C
 * Callers:
 *     DpiFdoDetectPostDevice @ 0x1C01762B4 (DpiFdoDetectPostDevice.c)
 *     DpiVerifyResources @ 0x1C0192B54 (DpiVerifyResources.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DpiDecodeResourceDescriptorLength(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // ax
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *a1 == 3 )
    return *((unsigned int *)a1 + 3);
  if ( *a1 == 7 )
  {
    v5 = *((_WORD *)a1 + 1);
    if ( (v5 & 0x200) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 8;
    if ( (v5 & 0x400) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 16;
    if ( (v5 & 0x800) != 0 )
      return (unsigned __int64)*((unsigned int *)a1 + 3) << 32;
    v6 = WdLogNewEntry5_WdWarning(2048LL, a2, a3);
    v7 = *((unsigned __int16 *)a1 + 1);
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    v7 = *a1;
  }
  *(_QWORD *)(v6 + 24) = v7;
  WdLogEvent5_WdWarning(v6);
  return 0LL;
}
