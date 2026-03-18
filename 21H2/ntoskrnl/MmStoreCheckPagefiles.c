/*
 * XREFs of MmStoreCheckPagefiles @ 0x14084BD8C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140261354 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x14084A7D0 (MmStoreRegister.c)
 * Callees:
 *     <none>
 */

__int64 MmStoreCheckPagefiles()
{
  int v0; // ecx
  char *i; // r8
  __int16 v2; // r9

  v0 = 0;
  if ( Count )
  {
    for ( i = (char *)&unk_140C590E0; ; i += 8 )
    {
      v2 = *(_WORD *)(*(_QWORD *)i + 204LL);
      if ( (v2 & 0x400) != 0 || (v2 & 0x800) != 0 )
        break;
      if ( ++v0 >= Count )
        return 1LL;
    }
  }
  return 0LL;
}
