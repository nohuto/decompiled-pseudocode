/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14057CAF0
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14057CA4C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14057CBB4 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int128 *v4; // rcx
  __int64 result; // rax
  __int128 *v6; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 26LL;
  if ( a2 )
  {
    if ( dword_140C1E9FC != 26 )
      qword_140C1EA80 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C1E9F8 )
      qword_140C1EA78 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140C1EB58;
    do
    {
      result = *((unsigned int *)v6 - 86);
      *(_DWORD *)v6 += result;
      v6 = (__int128 *)((char *)v6 + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( dword_140C1E9FC != 26 )
    {
      qword_140C1EA88[dword_140C1E9FC] += MEMORY[0xFFFFF78000000008] - qword_140C1EA80;
      qword_140C1EA80 = 0LL;
    }
    if ( dword_140C1E9F8 )
    {
      qword_140C1EA70 += v2 - qword_140C1EA78;
      qword_140C1EA78 = 0LL;
    }
    v4 = &xmmword_140C1EB58;
    do
    {
      result = *((unsigned int *)v4 - 86);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140C1EA68 = a2;
  return result;
}
