/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z @ 0xB1C6E
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?TestHotKey@WindowArrangementSequence@@YGXQBUtagHOTKEY@@@Z @ 0xB1D6C (-TestHotKey@WindowArrangementSequence@@YGXQBUtagHOTKEY@@@Z.c)
 *     ?TestWindowBreak@WindowArrangementSequence@@YGXXZ @ 0x155F40 (-TestWindowBreak@WindowArrangementSequence@@YGXXZ.c)
 */

void __userpurge WindowArrangementSequence::TestSequence(
        unsigned __int16 a1@<dx>,
        int a2@<ecx>,
        WindowArrangementSequence *this,
        const struct tagHOTKEY *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  WindowArrangementSequence *v8; // [esp+0h] [ebp-4h]
  const struct tagHOTKEY *savedregs; // [esp+4h] [ebp+0h]

  if ( a2 )
  {
    if ( ((unsigned __int16)a4 | (a1 << 16)) != dword_273864 )
      WindowArrangementSequence::TestHotKey(v8, savedregs);
  }
  else
  {
    if ( !a5 )
    {
      if ( this == (WindowArrangementSequence *)8 )
        WindowArrangementSequence::TestWindowBreak(v8);
      return;
    }
    if ( !this )
    {
      if ( !WindowArrangementSequence::fWindowArrangementSequenceInProgress )
        return;
LABEL_14:
      anonymous_namespace_::NotifyShellSimplePayload(0, 3, 1, 8);
      WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
      return;
    }
    if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress && ((unsigned __int8)this & 0xE) == 0 )
      goto LABEL_14;
  }
}
