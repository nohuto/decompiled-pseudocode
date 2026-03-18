/*
 * XREFs of EtwpTiVadQueryEventWriteCallback @ 0x1406DB530
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     EtwProviderEnabled @ 0x1402EC010 (EtwProviderEnabled.c)
 *     EtwpTiFillVadEventWrite @ 0x14032B6A4 (EtwpTiFillVadEventWrite.c)
 *     EtwpTiQueryVad @ 0x1406DB62C (EtwpTiQueryVad.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
