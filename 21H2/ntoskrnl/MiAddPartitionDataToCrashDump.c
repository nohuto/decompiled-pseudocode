/*
 * XREFs of MiAddPartitionDataToCrashDump @ 0x140537B78
 * Callers:
 *     MmAddPrivateDataToCrashDump @ 0x1405386D0 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     MiAddPartitionToCrashDump @ 0x140537D90 (MiAddPartitionToCrashDump.c)
 *     MmAddRangeToCrashDump @ 0x140538818 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall MiAddPartitionDataToCrashDump(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // r10d
  unsigned int v6; // edx
  int v7; // r11d
  char *v8; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // edx
  char *v11; // rdx
  __int64 i; // r9
  unsigned __int64 v13; // rax
  unsigned int SizeOfBitMap; // edx
  unsigned int v15; // eax
  int v16; // eax

  v1 = 0;
  LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C4E688, 8LL);
  if ( (int)v3 >= 0 )
  {
    LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C4E668, 16LL);
    if ( (int)v3 >= 0 )
    {
      v4 = MmAddRangeToCrashDump(
             a1,
             qword_140C4E668->Buffer,
             8
           * (((unsigned __int64)qword_140C4E668->SizeOfBitMap >> 6) + ((qword_140C4E668->SizeOfBitMap & 0x3F) != 0)));
      v3 = (unsigned int)v4;
      if ( v4 >= 0 )
      {
        do
        {
          v5 = v1 < qword_140C4E668->SizeOfBitMap ? v1 : 0;
          v6 = qword_140C4E668->SizeOfBitMap - 1;
          v7 = ((__int64)qword_140C4E668->Buffer & 4) != 0LL ? 0x20 : 0;
          v8 = (char *)qword_140C4E668->Buffer - (((__int64)qword_140C4E668->Buffer & 4) != 0 ? 4 : 0);
          while ( 1 )
          {
            v9 = v7 + v6;
            if ( v6 - v5 == -1 )
              goto LABEL_6;
            v11 = &v8[8 * ((unsigned __int64)(v7 + v5) >> 6)];
            for ( i = ~*(_QWORD *)v11 | ((1LL << ((v7 + v5) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v11 )
            {
              v11 += 8;
              if ( v11 > &v8[8 * ((unsigned __int64)v9 >> 6)] )
                goto LABEL_6;
            }
            _BitScanForward64(&v13, ~i);
            v10 = v13 + ((unsigned int)((v11 - v8) >> 3) << 6);
            if ( v10 > v9 )
            {
LABEL_6:
              v10 = -1;
            }
            else if ( v10 != -1 )
            {
              break;
            }
            if ( !v5 )
              break;
            SizeOfBitMap = v1 + 1;
            if ( v1 + 1 > qword_140C4E668->SizeOfBitMap )
              SizeOfBitMap = qword_140C4E668->SizeOfBitMap;
            v6 = SizeOfBitMap - 1;
            v5 = 0;
          }
          v15 = v10 - v7;
          if ( v10 == -1 )
            v15 = -1;
          if ( v15 < v1 )
            break;
          if ( v15 == -1 )
            break;
          v1 = v15 + 1;
          v16 = MiAddPartitionToCrashDump(a1, *(_QWORD *)(qword_140C4E688 + 8LL * v15), v3);
          v3 = (unsigned int)v16;
        }
        while ( v16 >= 0 );
        if ( (int)v3 >= 0 )
        {
          if ( qword_140C4E6A8 )
            LODWORD(v3) = MmAddRangeToCrashDump(
                            a1,
                            qword_140C4E6A8,
                            8 * (((unsigned __int64)qword_140C4E6A0 >> 6) + ((qword_140C4E6A0 & 0x3F) != 0)));
          if ( (int)v3 >= 0 && qword_140C4E6B0 )
            LODWORD(v3) = MmAddRangeToCrashDump(a1, qword_140C4E6B0, 0x200000LL);
        }
      }
    }
  }
  return (unsigned int)v3;
}
