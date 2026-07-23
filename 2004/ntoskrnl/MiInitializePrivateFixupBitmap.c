/*
 * XREFs of MiInitializePrivateFixupBitmap @ 0x1405FC5E0
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1403A2C58 (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiAllocateFixupVad @ 0x1406FA068 (MiAllocateFixupVad.c)
 * Callees:
 *     RtlClearAllBits @ 0x140271930 (RtlClearAllBits.c)
 *     MiDoesPageRequireRetpolineFixups @ 0x1405FC6E4 (MiDoesPageRequireRetpolineFixups.c)
 */

__int64 __fastcall MiInitializePrivateFixupBitmap(_RTL_BITMAP *a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rsi
  __int64 v8; // r11
  unsigned __int64 i; // r11
  __int64 *v10; // r10
  __int64 v11; // rbx
  unsigned int v12; // edx
  int v13; // edx

  v2 = a2 + 16;
  v3 = a2[12];
  v5 = *(_DWORD *)(*a2 + 8LL);
  a1->Buffer = &a1[1].SizeOfBitMap;
  a1->SizeOfBitMap = v5;
  RtlClearAllBits(a1);
  v6 = 0;
  v7 = 0LL;
  do
  {
    v8 = 8LL * *((unsigned int *)v2 + 11);
    if ( v2[1] < (unsigned __int64)(v8 + v2[1]) )
    {
      for ( i = ((unsigned __int64)(v8 - 1) >> 3) + 1; i; --i )
      {
        v10 = *(__int64 **)(v3 + 32);
        v11 = *v10;
        if ( v6 >= (unsigned __int64)v10[7] )
        {
LABEL_14:
          if ( (v2[4] & 0xA) != 0xA )
            goto LABEL_10;
        }
        else
        {
          v12 = v6;
          while ( !*(_QWORD *)(v11 + 8LL * v12) && !(unsigned int)MiDoesPageRequireRetpolineFixups(v10 + 9) )
          {
            v12 = v13 + 1;
            if ( v12 != v6 )
              goto LABEL_14;
          }
          _bittestandset((signed __int32 *)a1->Buffer, v6);
        }
        ++v7;
LABEL_10:
        ++v6;
      }
    }
    v2 = (_QWORD *)v2[2];
  }
  while ( v2 );
  return v7;
}
