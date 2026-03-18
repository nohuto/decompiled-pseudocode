/*
 * XREFs of PopAudioAccountingCallback @ 0x14075DB48
 * Callers:
 *     PopWnfAudioCallback @ 0x14075D8A0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C4FE98 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C4FE48 )
    {
      if ( qword_140C4FE48 <= (unsigned __int64)qword_140C4FE98 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FE98;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FE48;
      qword_140C4FEA0 += result;
    }
    qword_140C4FE98 = 0LL;
  }
  return result;
}
