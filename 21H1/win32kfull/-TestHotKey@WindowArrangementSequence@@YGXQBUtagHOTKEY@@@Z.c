/*
 * XREFs of ?TestHotKey@WindowArrangementSequence@@YGXQBUtagHOTKEY@@@Z @ 0xB1D6C
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z @ 0xB1C6E (-TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void __thiscall WindowArrangementSequence::TestHotKey(_DWORD *ecx0)
{
  int v1; // eax
  int v2; // eax

  v1 = 0;
  if ( *ecx0 == _gptiRit )
  {
    v2 = ecx0[5];
    if ( v2 >= 16 && v2 <= 29 )
      v1 = 1;
  }
  if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress != v1 )
  {
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = v1;
    if ( !v1 )
    {
      anonymous_namespace_::NotifyShellSimplePayload(0, 3, 1, 8);
      WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
    }
  }
}
