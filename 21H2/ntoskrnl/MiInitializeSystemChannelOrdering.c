/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x140B52168
 * Callers:
 *     MiInitializeChannelOrdering @ 0x14081DB30 (MiInitializeChannelOrdering.c)
 * Callees:
 *     MiPageToChannel @ 0x1403B76EC (MiPageToChannel.c)
 */

unsigned __int64 __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  char *i; // rcx
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r8d
  _BYTE *v9; // r9
  unsigned int v10; // r8d
  _BYTE *v11; // r9
  unsigned int v12; // r8d
  _BYTE *v13; // r9

  result = (unsigned __int64)MxBootFreeDescriptor;
  v4 = *(_QWORD *)(a1 + 16) + 24512LL * a2;
  if ( MxBootFreeDescriptor[5 * a2 + 1] )
  {
    result = (unsigned int)MiPageToChannel(MxBootFreeDescriptor[5 * a2]);
    *(_BYTE *)((unsigned int)result + v4 + 22825) = 2;
  }
  for ( i = (char *)qword_140C50710; *(_QWORD *)i != -1LL; i += 16 )
  {
    result = *((unsigned __int16 *)i + 5);
    if ( (_DWORD)result == a2 )
    {
      result = *((unsigned __int16 *)i + 6);
      if ( i[14] )
      {
        if ( *(_BYTE *)(result + v4 + 22825) != 2 )
          *(_BYTE *)(result + v4 + 22825) = 1;
      }
      else
      {
        *(_BYTE *)(result + v4 + 22825) = 2;
      }
    }
  }
  v6 = MmNumberOfChannels;
  v7 = 0LL;
  v8 = 0;
  if ( MmNumberOfChannels )
  {
    v9 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( *v9 == 2 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v8;
        *(_BYTE *)(v7 + v4 + 22821) = v8;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  v10 = 0;
  if ( v6 )
  {
    v11 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( *v11 == 1 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v10;
        *(_BYTE *)(v7 + v4 + 22821) = v10;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v10;
      ++v11;
    }
    while ( v10 < v6 );
  }
  v12 = 0;
  if ( v6 )
  {
    v13 = (_BYTE *)(v4 + 22825);
    do
    {
      if ( !*v13 )
      {
        *(_BYTE *)(v7 + v4 + 22817) = v12;
        *(_BYTE *)(v7 + v4 + 22821) = v12;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v12;
      ++v13;
    }
    while ( v12 < v6 );
  }
  return result;
}
