/*
 * XREFs of BiConvertRegistryDataToElement @ 0x140784F70
 * Callers:
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140782794 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiResolveLocateDevice @ 0x14096F7E8 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14096FB28 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14096FC10 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiConvertRegistryDataToElement(
        HANDLE BcdObjectHandle,
        unsigned int *SourceString,
        size_t Size,
        unsigned int a4,
        char a5,
        GUID *Guid,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // edi
  PCWSTR v9; // r15
  unsigned int v11; // esi
  char v12; // r12
  __int64 v13; // rbx
  NTSTATUS v14; // ebx
  WCHAR *v15; // rcx
  int v16; // eax
  unsigned int *v17; // rdi
  GUID *v19; // rdi
  GUID *v20; // rbx
  GUID *v21; // rcx
  GUID *v22; // rcx
  unsigned int v23; // ecx
  GUID *v24; // r13
  unsigned int v25; // r12d
  __int64 v26; // rax
  __int64 v27; // rdx
  PVOID P; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  size_t Sizea; // [rsp+98h] [rbp+48h] BYREF

  v7 = a7;
  v8 = Size;
  P = 0LL;
  LODWORD(Sizea) = 0;
  v9 = (PCWSTR)SourceString;
  v11 = 0;
  DestinationString = 0LL;
  if ( (HIBYTE(a4) & 0xF) == 1 )
  {
    if ( (unsigned int)Size < 0x1C || SourceString[6] + 16LL != (unsigned int)Size )
      return (unsigned int)-1073741788;
    v15 = (WCHAR *)(SourceString + 4);
    if ( (a5 & 1) != 0 )
    {
      v16 = BiConvertBootEnvironmentDeviceToQualifiedPartition(v15, &P, &Sizea);
    }
    else if ( (a5 & 2) != 0 )
    {
      v16 = BiConvertBootEnvironmentDeviceToUnknown(v15);
    }
    else
    {
      v16 = BiConvertBootEnvironmentDeviceToNt((char *)v15, a4, a5, (wchar_t **)&P, (unsigned int *)&Sizea);
    }
    v14 = v16;
    if ( v16 >= 0 )
    {
      v17 = (unsigned int *)P;
      if ( *(_DWORD *)P == 8 && (int)BiResolveLocateDevice(BcdObjectHandle) >= 0 )
      {
        v27 = v17[6];
        v11 = Sizea - v27;
        memmove(v17, (char *)v17 + v27, (unsigned int)(Sizea - v27));
      }
      else
      {
        v11 = Sizea;
      }
      if ( v11 <= *v7 )
      {
        v20 = Guid;
        memmove(Guid, v17, v11);
        *(GUID *)&v20->Data2 = *(GUID *)v9;
        ExFreePoolWithTag(v17, 0x4B444342u);
        v14 = 0;
      }
      else
      {
        v14 = -1073741789;
        ExFreePoolWithTag(v17, 0x4B444342u);
      }
      goto LABEL_25;
    }
    v11 = Sizea;
    goto LABEL_67;
  }
  if ( (HIBYTE(a4) & 0xF) == 2 )
  {
    if ( (_DWORD)Size && (Size & 1) == 0 )
    {
      v12 = 0;
      v11 = Size;
      v13 = (unsigned int)Size;
      if ( *(_WORD *)((char *)SourceString + (unsigned int)Size - 2) )
      {
        v11 = Size + 2;
        v12 = 1;
        v8 = Size + 2;
      }
      if ( v8 > *a7 )
        goto LABEL_8;
      v19 = Guid;
      memmove(Guid, SourceString, (unsigned int)Size);
      if ( v12 )
        *(_WORD *)((char *)&v19->Data1 + v13) = 0;
LABEL_24:
      v14 = 0;
      goto LABEL_25;
    }
    return (unsigned int)-1073741788;
  }
  if ( (HIBYTE(a4) & 0xF) != 3 )
  {
    if ( (HIBYTE(a4) & 0xF) == 4 )
    {
      v23 = 0;
      v24 = Guid;
      v14 = 0;
      LODWORD(Sizea) = 0;
      if ( (unsigned int)Size >= 2 && (Size & 1) == 0 )
      {
        v25 = 0;
        *((_WORD *)SourceString + ((unsigned __int64)(unsigned int)Size >> 1) - 1) = 0;
        if ( *(_WORD *)SourceString )
        {
          do
          {
            if ( v23 >= v8 )
              break;
            v11 += 16;
            v25 = v11;
            if ( v11 <= *v7 )
            {
              RtlInitUnicodeString(&DestinationString, v9);
              v14 = RtlGUIDFromString(&DestinationString, v24);
              if ( v14 < 0 )
                goto LABEL_67;
              v23 = Sizea;
              ++v24;
            }
            v26 = -1LL;
            do
              ++v26;
            while ( v9[v26] );
            v23 += 2 * v26 + 2;
            LODWORD(Sizea) = v23;
            v9 += (unsigned int)(v26 + 1);
          }
          while ( *v9 );
        }
        if ( v25 <= *v7 )
          goto LABEL_25;
        goto LABEL_8;
      }
      return (unsigned int)-1073741788;
    }
    if ( (HIBYTE(a4) & 0xF) == 5 )
    {
      v11 = 8;
      if ( (unsigned int)Size > 8 )
        return (unsigned int)-1073741788;
      if ( *a7 < 8 )
        goto LABEL_8;
      v21 = Guid;
      *(_QWORD *)&Guid->Data1 = 0LL;
    }
    else
    {
      if ( (HIBYTE(a4) & 0xF) == 6 )
      {
        if ( (_DWORD)Size != 1 )
          return (unsigned int)-1073741788;
        v11 = 2;
        if ( *a7 >= 2 )
        {
          v22 = Guid;
          BYTE1(Guid->Data1) = 0;
          LOBYTE(v22->Data1) = *(_BYTE *)SourceString != 0;
          goto LABEL_24;
        }
        goto LABEL_8;
      }
      if ( (HIBYTE(a4) & 0xF) == 7 )
      {
        if ( !(_DWORD)Size || (Size & 7) != 0 )
          return (unsigned int)-1073741788;
        v11 = Size;
        if ( *a7 < (unsigned int)Size )
          goto LABEL_8;
      }
      else
      {
        if ( !(_DWORD)Size )
          return (unsigned int)-1073741788;
        v11 = Size;
        if ( (unsigned int)Size > *a7 )
          goto LABEL_8;
      }
      v21 = Guid;
    }
    memmove(v21, SourceString, (unsigned int)Size);
    goto LABEL_24;
  }
  v11 = 16;
  if ( *a7 >= 0x10 )
  {
    if ( (unsigned int)Size < 2 || (Size & 1) != 0 )
      return (unsigned int)-1073741788;
    *((_WORD *)SourceString + ((unsigned __int64)(unsigned int)Size >> 1) - 1) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)SourceString);
    v14 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v14 >= 0 )
      goto LABEL_24;
LABEL_67:
    if ( v14 != -1073741789 )
      return (unsigned int)v14;
    goto LABEL_25;
  }
LABEL_8:
  v14 = -1073741789;
LABEL_25:
  *v7 = v11;
  return (unsigned int)v14;
}
