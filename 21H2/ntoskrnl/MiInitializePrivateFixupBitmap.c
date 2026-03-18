/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x1406F3738
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403B529C (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiInitializeFixupVad @ 0x1406D0AD8 (MiInitializeFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     MiPageHasRelocations @ 0x1406F3800 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(RTL_BITMAP *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  unsigned int v7; // r9d
  unsigned int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rbx
  unsigned __int64 i; // rbx

  v3 = a2 + 16;
  v4 = a2[12];
  v7 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v7;
  RtlClearAllBits(a1);
  v8 = 0;
  v9 = 0LL;
  do
  {
    v10 = *((unsigned int *)v3 + 11);
    if ( v3[1] < (unsigned __int64)(v3[1] + 8 * v10) )
    {
      for ( i = ((unsigned __int64)(8 * v10 - 1) >> 3) + 1; i; --i )
      {
        if ( (unsigned int)MiPageHasRelocations(v4, v8, a3) )
        {
          _bittestandset((signed __int32 *)a1->Buffer, v8);
        }
        else if ( (v3[4] & 0xA) != 0xA )
        {
          goto LABEL_7;
        }
        ++v9;
LABEL_7:
        ++v8;
      }
    }
    v3 = (_QWORD *)v3[2];
  }
  while ( v3 );
  return v9;
}
