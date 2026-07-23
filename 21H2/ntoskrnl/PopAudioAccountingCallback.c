/*
 * XREFs of PopAudioAccountingCallback @ 0x140772804
 * Callers:
 *     PopWnfAudioCallback @ 0x140772540 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C4FF98 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C4FF48 )
    {
      if ( qword_140C4FF48 <= (unsigned __int64)qword_140C4FF98 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FF98;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FF48;
      qword_140C4FFA0 += result;
    }
    qword_140C4FF98 = 0LL;
  }
  return result;
}
