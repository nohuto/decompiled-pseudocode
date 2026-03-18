/*
 * XREFs of ?FindInkDeviceByRimDeviceObject@InkProcessor@@ABEPAVInkDevice@@PBURawInputManagerDeviceObject@@@Z @ 0x1ABDDC
 * Callers:
 *     ?OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1ABFB7 (-OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC085 (-OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC13F (-OnDeviceRemoved@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

struct InkDevice *__thiscall InkProcessor::FindInkDeviceByRimDeviceObject(
        InkProcessor *this,
        const struct RawInputManagerDeviceObject *a2)
{
  char *v2; // edx
  _DWORD *i; // ecx

  v2 = (char *)this + 8;
  for ( i = (_DWORD *)*((_DWORD *)this + 2); ; i = (_DWORD *)*i )
  {
    if ( i == (_DWORD *)v2 )
      return 0;
    if ( (const struct RawInputManagerDeviceObject *)*(i - 9) == a2 )
      break;
  }
  return (struct InkDevice *)(i - 12);
}
