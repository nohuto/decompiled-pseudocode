/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x140A93620
 * Callers:
 *     MiInitializeChannelOrdering @ 0x14079CEFC (MiInitializeChannelOrdering.c)
 * Callees:
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 */

void __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  ULONG_PTR *v4; // rcx
  char *i; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  _BYTE *v10; // r9
  unsigned int v11; // r8d
  _BYTE *v12; // r9
  unsigned int v13; // r8d
  _BYTE *v14; // r9

  v3 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  v4 = (ULONG_PTR *)MxFreeDescriptor[a2];
  if ( v4[1] )
    *(_BYTE *)((unsigned int)MiPageToChannel(*v4) + v3 + 4321) = 2;
  for ( i = (char *)qword_140C4DF10; *(_QWORD *)i != -1LL; i += 16 )
  {
    if ( *((unsigned __int16 *)i + 5) == a2 )
    {
      v6 = *((unsigned __int16 *)i + 6);
      if ( i[14] )
      {
        if ( *(_BYTE *)(v6 + v3 + 4321) != 2 )
          *(_BYTE *)(v6 + v3 + 4321) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + v3 + 4321) = 2;
      }
    }
  }
  v7 = MmNumberOfChannels;
  v8 = 0LL;
  v9 = 0;
  if ( MmNumberOfChannels )
  {
    v10 = (_BYTE *)(v3 + 4321);
    do
    {
      if ( *v10 == 2 )
      {
        *(_BYTE *)(v8 + v3 + 4313) = v9;
        *(_BYTE *)(v8 + v3 + 4317) = v9;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v9;
      ++v10;
    }
    while ( v9 < v7 );
  }
  v11 = 0;
  if ( v7 )
  {
    v12 = (_BYTE *)(v3 + 4321);
    do
    {
      if ( *v12 == 1 )
      {
        *(_BYTE *)(v8 + v3 + 4313) = v11;
        *(_BYTE *)(v8 + v3 + 4317) = v11;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v11;
      ++v12;
    }
    while ( v11 < v7 );
  }
  v13 = 0;
  if ( v7 )
  {
    v14 = (_BYTE *)(v3 + 4321);
    do
    {
      if ( !*v14 )
      {
        *(_BYTE *)(v8 + v3 + 4313) = v13;
        *(_BYTE *)(v8 + v3 + 4317) = v13;
        v8 = (unsigned int)(v8 + 1);
      }
      ++v13;
      ++v14;
    }
    while ( v13 < v7 );
  }
}
