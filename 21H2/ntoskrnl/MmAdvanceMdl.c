/*
 * XREFs of MmAdvanceMdl @ 0x140531310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall MmAdvanceMdl(PMDL Mdl, ULONG NumberOfBytes)
{
  unsigned int v4; // r10d
  ULONG ByteOffset; // ebx
  __int64 ByteCount; // r9
  unsigned __int64 v7; // r11
  __int16 v8; // cx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  struct _MDL *Next; // rdi
  PMDL v14; // rax
  unsigned int v15; // edx
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  CSHORT MdlFlags; // ax

  if ( NumberOfBytes >= Mdl->ByteCount )
    return -1073741584;
  v4 = 0;
  byte_140C4ED94 = 1;
  ByteOffset = Mdl->ByteOffset;
  ByteCount = Mdl->ByteCount;
  v7 = (((ByteOffset + LODWORD(Mdl->StartVa)) & 0xFFFuLL) + ByteCount + 4095) >> 12;
  if ( !ByteOffset )
    goto LABEL_10;
  v8 = Mdl->MdlFlags & 1;
  v9 = 4096 - ByteOffset;
  if ( NumberOfBytes >= (unsigned int)v9 )
  {
    Mdl->StartVa = (char *)Mdl->StartVa + 4096;
    LODWORD(ByteCount) = ByteCount - v9;
    NumberOfBytes -= v9;
    *(_QWORD *)&Mdl->ByteCount = (unsigned int)ByteCount;
    if ( v8 )
      Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + v9;
    v4 = 1;
LABEL_10:
    if ( NumberOfBytes )
    {
      Mdl->ByteCount = ByteCount - NumberOfBytes;
      Mdl->ByteOffset = NumberOfBytes & 0xFFF;
      v4 += NumberOfBytes >> 12;
      Mdl->StartVa = (char *)Mdl->StartVa + 4096 * (unsigned __int64)(NumberOfBytes >> 12);
      if ( (Mdl->MdlFlags & 1) != 0 )
        Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
    }
    if ( v4 )
    {
      if ( (Mdl->MdlFlags & 0x200) != 0 )
      {
        v10 = (__int64 *)(&Mdl[1].Next + v7);
        do
        {
          v11 = *v10;
          ++v7;
          ++v10;
        }
        while ( v11 >= 0 );
      }
      v12 = v4;
      do
      {
        Next = Mdl[1].Next;
        v14 = Mdl + 1;
        if ( v7 )
        {
          v15 = 1;
          do
          {
            v16 = v15;
            if ( v15 == v7 )
              v17 = (unsigned __int64)Next | 0x8000000000000000uLL;
            else
              v17 = *(_QWORD *)&v14->Size & 0x7FFFFFFFFFFFFFFFLL;
            v14->Next = (struct _MDL *)v17;
            ++v15;
            v14 = (PMDL)((char *)v14 + 8);
          }
          while ( v16 < v7 );
        }
        --v12;
      }
      while ( v12 );
      MdlFlags = Mdl->MdlFlags;
      if ( (MdlFlags & 0x200) == 0 )
        Mdl->MdlFlags = MdlFlags | 0x200;
    }
    return 0;
  }
  Mdl->ByteCount = ByteCount - NumberOfBytes;
  Mdl->ByteOffset = ByteOffset + NumberOfBytes;
  if ( v8 )
    Mdl->MappedSystemVa = (char *)Mdl->MappedSystemVa + NumberOfBytes;
  return 0;
}
