/*
 * XREFs of SpiMax311BufferRxData @ 0x1405C5D84
 * Callers:
 *     SpiMax311PutByte @ 0x1405C5EA0 (SpiMax311PutByte.c)
 *     SpiMax311RxReady @ 0x1405C5F30 (SpiMax311RxReady.c)
 *     SpiMax311TxEmpty @ 0x1405C60E4 (SpiMax311TxEmpty.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SpiMax311BufferRxData(__int16 a1)
{
  __int64 result; // rax
  int v2; // edx

  result = (unsigned int)qword_140CF9520;
  v2 = ((_WORD)qword_140CF9520 + 1) & 0x3FF;
  if ( v2 != HIDWORD(qword_140CF9520) )
  {
    word_140CF952A[(unsigned int)qword_140CF9520] = a1;
    LODWORD(qword_140CF9520) = v2;
  }
  return result;
}
