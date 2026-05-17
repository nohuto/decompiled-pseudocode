/*
 * XREFs of _RtlValidateUnicodeString@8 @ 0x4B34E040
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x4B2ECFE7 (RtlUnicodeStringValidateWorker_0.c)
 */

int __thiscall RtlValidateUnicodeString(void *this, int a2, unsigned __int16 *a3)
{
  if ( a2 )
    return -1073741811;
  else
    return RtlUnicodeStringValidateWorker_0(a3, (int)this);
}
