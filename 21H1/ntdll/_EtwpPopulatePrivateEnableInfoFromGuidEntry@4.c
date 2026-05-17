/*
 * XREFs of _EtwpPopulatePrivateEnableInfoFromGuidEntry@4 @ 0x4B3807B2
 * Callers:
 *     _EtwpCheckForPrivatePreEnable@4 @ 0x4B2ADC20 (_EtwpCheckForPrivatePreEnable@4.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__thiscall EtwpPopulatePrivateEnableInfoFromGuidEntry(int this)
{
  unsigned int v1; // edx
  void *v2; // edi
  const void *v3; // esi
  unsigned __int8 *result; // eax

  v1 = 0;
  if ( *(_DWORD *)(this + 200) )
  {
    do
    {
      v2 = (void *)(v1 + this + 80);
      v3 = (const void *)(v1 + *(_DWORD *)(this + 200) + 40);
      v1 += 24;
      qmemcpy(v2, v3, 0x18u);
    }
    while ( v1 < 0x60 );
    return EtwpUpdatePrivateEnableInfo((char *)this);
  }
  return result;
}
