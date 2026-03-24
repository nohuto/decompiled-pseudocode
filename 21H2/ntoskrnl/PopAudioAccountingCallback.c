/*
 * XREFs of PopAudioAccountingCallback @ 0x140772644
 * Callers:
 *     PopWnfAudioCallback @ 0x140772380 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C4FF58 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C4FF08 )
    {
      if ( qword_140C4FF08 <= (unsigned __int64)qword_140C4FF58 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FF58;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FF08;
      qword_140C4FF60 += result;
    }
    qword_140C4FF58 = 0LL;
  }
  return result;
}
