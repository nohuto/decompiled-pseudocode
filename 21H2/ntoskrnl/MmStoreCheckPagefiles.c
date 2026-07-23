/*
 * XREFs of MmStoreCheckPagefiles @ 0x1407B7C20
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1402A2388 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     MmStoreRegister @ 0x1407B6890 (MmStoreRegister.c)
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
    for ( i = (char *)&unk_140C528E0; ; i += 8 )
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
