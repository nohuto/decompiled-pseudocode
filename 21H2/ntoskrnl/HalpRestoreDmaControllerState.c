/*
 * XREFs of HalpRestoreDmaControllerState @ 0x140996CF0
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpMiscIsLegacyPcType @ 0x140386B74 (HalpMiscIsLegacyPcType.c)
 *     HalpIoDelay @ 0x1403F9EB0 (HalpIoDelay.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void HalpRestoreDmaControllerState()
{
  __int64 i; // rbx
  unsigned __int8 v1; // di
  unsigned __int8 *v2; // rbx
  void (__fastcall *v3)(__int64); // rax
  __int64 v4; // rcx
  unsigned __int8 v5; // al
  __int64 v6; // rcx
  unsigned __int8 v7; // al
  unsigned __int16 v8; // dx

  for ( i = HalpDmaControllers; (__int64 *)i != &HalpDmaControllers; i = *(_QWORD *)i )
  {
    v3 = *(void (__fastcall **)(__int64))(i + 80);
    v4 = *(_QWORD *)(i + 64);
    *(_BYTE *)(i + 216) = 1;
    v3(v4);
  }
  if ( HalpMiscIsLegacyPcType() )
  {
    __outbyte(0xFu, 0xFu);
    __outbyte(0xDEu, 0xEu);
    HalpIoDelay();
    __outbyte(8u, 0);
    __outbyte(0xD0u, 0);
    HalpIoDelay();
    v1 = 0;
    v2 = (unsigned __int8 *)&unk_140CECED3;
    do
    {
      if ( v2[1] )
      {
        v5 = *(v2 - 2);
        v6 = *(_QWORD *)(v2 - 19);
        if ( v1 >= 4u )
        {
          __outbyte(v6 + 22, v5);
          v7 = *v2;
          v8 = *(_QWORD *)(v2 - 19) + 20;
        }
        else
        {
          __outbyte(v6 + 11, v5);
          v7 = *v2;
          v8 = *(_QWORD *)(v2 - 19) + 10;
        }
        __outbyte(v8, v7);
        HalpIoDelay();
      }
      ++v1;
      v2 += 24;
    }
    while ( v1 < 8u );
  }
}
