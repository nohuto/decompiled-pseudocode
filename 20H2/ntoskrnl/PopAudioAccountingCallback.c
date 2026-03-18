/*
 * XREFs of PopAudioAccountingCallback @ 0x14076E4C8
 * Callers:
 *     PopWnfAudioCallback @ 0x14076E220 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C4FDD8 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C4FD88 )
    {
      if ( qword_140C4FD88 <= (unsigned __int64)qword_140C4FDD8 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FDD8;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FD88;
      qword_140C4FDE0 += result;
    }
    qword_140C4FDD8 = 0LL;
  }
  return result;
}
