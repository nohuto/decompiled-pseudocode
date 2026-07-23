/*
 * XREFs of FsRtlDissectDbcs @ 0x14088C610
 * Callers:
 *     FsRtlIsFatDbcsLegal @ 0x140603A60 (FsRtlIsFatDbcsLegal.c)
 *     FsRtlIsHpfsDbcsLegal @ 0x14088CD90 (FsRtlIsHpfsDbcsLegal.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlDissectDbcs(ANSI_STRING *Path, PANSI_STRING FirstName, PANSI_STRING RemainingName)
{
  __int64 v3; // r9
  unsigned int Length; // r8d
  char *Buffer; // rdi
  char v9; // si
  __int64 i; // rdx
  char v11; // cl
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // r8

  v3 = 0LL;
  *(_DWORD *)&FirstName->Length = 0;
  FirstName->Buffer = 0LL;
  *(_DWORD *)&RemainingName->Length = 0;
  RemainingName->Buffer = 0LL;
  Length = Path->Length;
  if ( Path->Length )
  {
    Buffer = Path->Buffer;
    v9 = *Buffer;
    for ( i = *Buffer == 92; (unsigned int)i < Length; LODWORD(i) = i + 1 )
    {
      v11 = Buffer[(unsigned int)i];
      if ( v11 == 92 )
        break;
      if ( (unsigned __int8)v11 >= 0x80u
        && (_BYTE)NlsMbOemCodePageTag
        && NlsOemLeadByteInfoTable[(unsigned __int8)Buffer[(unsigned int)i]] )
      {
        LODWORD(i) = i + 1;
      }
    }
    v12 = i - (*Buffer == 92);
    FirstName->Length = v12;
    FirstName->MaximumLength = v12;
    LOBYTE(v3) = v9 == 92;
    FirstName->Buffer = &Path->Buffer[v3];
    if ( (unsigned int)i < Length )
    {
      v13 = Length - i - 1;
      RemainingName->Length = v13;
      RemainingName->MaximumLength = v13;
      RemainingName->Buffer = &Path->Buffer[(unsigned int)(i + 1)];
    }
  }
}
