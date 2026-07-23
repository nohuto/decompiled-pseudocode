/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x14061A0D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpTiFillVadEventWrite @ 0x14024B1B4 (EtwpTiFillVadEventWrite.c)
 *     EtwProviderEnabled @ 0x14027E6F0 (EtwProviderEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     EtwpTiQueryVad @ 0x14061A1CC (EtwpTiQueryVad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpTiVadQueryEventWriteCallback(unsigned int *P)
{
  int Vad; // ebp
  _QWORD *PoolWithTag; // rsi
  unsigned int i; // edi
  void *v5; // rcx
  void *v6; // rcx
  BOOLEAN v7; // [rsp+20h] [rbp-28h]

  Vad = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)P[13] << 6, 0x6E734954u);
  if ( PoolWithTag )
  {
    v7 = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x10000000uLL);
    Vad = EtwpTiQueryVad(PoolWithTag, *((_QWORD *)P + 8), *((_QWORD *)P + 9), P[13], v7);
  }
  EtwpTiFillVadEventWrite(
    *((PEVENT_DATA_DESCRIPTOR *)P + 4),
    P[12],
    1,
    (__int64)PoolWithTag,
    Vad,
    P[13],
    *((PCEVENT_DESCRIPTOR *)P + 7));
  for ( i = 0; i < P[13]; ++i )
  {
    if ( _bittest(&Vad, i) )
    {
      v5 = (void *)PoolWithTag[8 * (unsigned __int64)i + 7];
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v6 = (void *)*((_QWORD *)P + 8);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x69547445u);
  ExFreePoolWithTag(P, 0);
}
