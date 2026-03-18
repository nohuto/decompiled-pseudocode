/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14057AEA0
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14057ADFC (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14057AF64 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
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
    if ( dword_140C1E8BC != 26 )
      qword_140C1E940 = MEMORY[0xFFFFF78000000008];
    if ( dword_140C1E8B8 )
      qword_140C1E938 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140C1EA18;
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
    if ( dword_140C1E8BC != 26 )
    {
      qword_140C1E948[dword_140C1E8BC] += MEMORY[0xFFFFF78000000008] - qword_140C1E940;
      qword_140C1E940 = 0LL;
    }
    if ( dword_140C1E8B8 )
    {
      qword_140C1E930 += v2 - qword_140C1E938;
      qword_140C1E938 = 0LL;
    }
    v4 = &xmmword_140C1EA18;
    do
    {
      result = *((unsigned int *)v4 - 86);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140C1E928 = a2;
  return result;
}
