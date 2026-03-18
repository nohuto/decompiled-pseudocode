/*
 * XREFs of ?GetTWIPSMetricById@@YGHPAU_UNICODE_STRING@@IH@Z @ 0xDA38C
 * Callers:
 *     _SetIconMetrics@8 @ 0xD9F16 (_SetIconMetrics@8.c)
 *     _SetMinMetrics@8 @ 0xDA05C (_SetMinMetrics@8.c)
 *     _xxxSetWindowNCMetrics@12 @ 0xDA168 (_xxxSetWindowNCMetrics@12.c)
 * Callees:
 *     <none>
 */

int __userpurge GetTWIPSMetricById@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING *a3,
        unsigned int a4,
        int a5)
{
  int v5; // edx
  int v7; // [esp+0h] [ebp-4h] BYREF

  v7 = 0;
  FastGetProfileIntFromID(a2, 23, a1, a3, &v7, 0);
  v5 = v7;
  if ( v7 < 0 )
    return (720 - v7 * *(unsigned __int16 *)(_gpsi + 6242)) / 1440;
  return v5;
}
