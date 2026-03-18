/*
 * XREFs of SpiMax311BufferRxData @ 0x1405C9A14
 * Callers:
 *     SpiMax311PutByte @ 0x1405C9B30 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1405C9BC0 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x1405C9D74 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140CF95E0;
  v2 = ((_WORD)qword_140CF95E0 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140CF95E0) )
  {
    word_140CF95EA[(unsigned int)qword_140CF95E0] = a1;
    LODWORD(qword_140CF95E0) = v2;
  }
  return result;
}
