/*
 * XREFs of SshpStopBlockerAccounting @ 0x14057A69C
 * Callers:
 *     SshpSetBlockerActive @ 0x14030BA60 (SshpSetBlockerActive.c)
 *     SshpSetCollectionActive @ 0x14057A3BC (SshpSetCollectionActive.c)
 *     SshpWriteBlocker @ 0x14057A74C (SshpWriteBlocker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SshpStopBlockerAccounting(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rdx
  __int64 *v8; // r11
  unsigned int v9; // r8d

  result = *(_QWORD *)(a1 + 16);
  v5 = a2;
  v6 = a1 + ((unsigned __int64)((*(_DWORD *)(a1 + 8) & 1) == 0) << 7);
  if ( a2 >= result )
  {
    v7 = a2 - result;
    *(_QWORD *)(v6 + 24) += v7;
    v8 = SshpAccountingBucketLimits;
    v9 = 0;
    while ( 1 )
    {
      if ( v7 >= *v8 )
      {
        result = v9 + 1;
        if ( v7 < SshpAccountingBucketLimits[result] )
          break;
      }
      ++v9;
      ++v8;
      if ( v9 >= 5 )
        goto LABEL_10;
    }
    result = v9;
    if ( a3 )
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 132);
      *(_QWORD *)(v6 + 8LL * v9 + 72) += v7;
    }
    else
    {
      ++*(_DWORD *)(v6 + 4LL * v9 + 112);
      *(_QWORD *)(v6 + 8LL * v9 + 32) += v7;
    }
  }
LABEL_10:
  if ( a3 == 1 )
    v5 = 0LL;
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}
