/*
 * XREFs of _RtlpHpSegSize@16 @ 0x4B37D931
 * Callers:
 *     _RtlpHpSizeHeapInternal@16 @ 0x4B379A08 (_RtlpHpSizeHeapInternal@16.c)
 * Callees:
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegSizeInternal@20 @ 0x4B37D95E (_RtlpHpSegSizeInternal@20.c)
 */

int __fastcall RtlpHpSegSize(int a1, int a2, int a3, int a4)
{
  int v5; // ecx

  if ( RtlpHpSegDescriptorValidate(a1, a2) )
    return RtlpHpSegSizeInternal(a2, v5, a4);
  else
    return -1;
}
