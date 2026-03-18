/*
 * XREFs of PopAudioAccountingCallback @ 0x14075FE58
 * Callers:
 *     PopWnfAudioCallback @ 0x14075FBB0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140C4FD58 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140C4FD08 )
    {
      if ( qword_140C4FD08 <= (unsigned __int64)qword_140C4FD58 )
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FD58;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140C4FD08;
      qword_140C4FD60 += result;
    }
    qword_140C4FD58 = 0LL;
  }
  return result;
}
