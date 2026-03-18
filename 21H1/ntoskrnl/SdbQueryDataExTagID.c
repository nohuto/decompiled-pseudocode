/*
 * XREFs of SdbQueryDataExTagID @ 0x1407AC2C8
 * Callers:
 *     PiIsDriverBlocked @ 0x140769384 (PiIsDriverBlocked.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x14036E300 (RtlStringCchCopyNW.c)
 *     RtlStringCchCopyW @ 0x14036E430 (RtlStringCchCopyW.c)
 *     wcschr @ 0x1403CFAD0 (wcschr.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140742864 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x1407428D4 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x140742E10 (SdbGetTagDataSize.c)
 *     AslAlloc @ 0x140743A84 (AslAlloc.c)
 *     SdbReadQWORDTag @ 0x14079B704 (SdbReadQWORDTag.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbQueryDataExTagID(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int DWORDTag; // r12d
  const wchar_t *v8; // rbx
  __int64 v11; // rax
  size_t v12; // r15
  wchar_t *v13; // rax
  wchar_t *Str1; // r14
  wchar_t *v15; // rax
  wchar_t *v16; // rbp
  unsigned int FirstNamedTag; // eax
  unsigned int FirstTag; // eax
  unsigned int TagDataSize; // ebp
  __int64 *StringTagPtr; // r15
  __int16 v21; // ax
  unsigned int v22; // r14d
  unsigned int v23; // ebx
  size_t v25; // r14
  __int64 v26; // rax
  wchar_t *P; // [rsp+30h] [rbp-48h]
  __int64 QWORDTag; // [rsp+38h] [rbp-40h] BYREF
  int Src; // [rsp+90h] [rbp+18h] BYREF
  int v30; // [rsp+94h] [rbp+1Ch]
  _DWORD *v31; // [rsp+98h] [rbp+20h]

  v31 = a4;
  v30 = HIDWORD(a3);
  DWORDTag = 0;
  v8 = L"Policy";
  Src = 0;
  QWORDTag = 0LL;
  if ( !a5 && !a6 )
  {
    AslLogCallPrintf(1LL);
    return 87;
  }
  v11 = -1LL;
  do
    ++v11;
  while ( aPolicy[v11] );
  v12 = (int)v11 + 1;
  v13 = (wchar_t *)AslAlloc(a1, 2 * v12);
  P = v13;
  if ( !v13 )
  {
    AslLogCallPrintf(1LL);
    return 8;
  }
  Str1 = v13;
  while ( 1 )
  {
    v15 = wcschr(v8, 0x5Cu);
    v16 = v15;
    if ( v15 )
    {
      v25 = v15 - v8;
      if ( RtlStringCchCopyNW(P, v12, v8, v25) < 0 )
      {
LABEL_62:
        v23 = 122;
        goto LABEL_33;
      }
      P[v25] = 0;
      v8 = v16 + 1;
      Str1 = P;
    }
    else
    {
      if ( RtlStringCchCopyW(Str1, v12, v8) < 0 )
        goto LABEL_62;
      v8 = 0LL;
    }
    FirstNamedTag = SdbFindFirstNamedTag(a1, a2, 28687, 24577, Str1);
    a2 = FirstNamedTag;
    if ( !v8 || !*v8 )
      break;
    if ( !FirstNamedTag )
      goto LABEL_45;
  }
  if ( !FirstNamedTag )
  {
LABEL_45:
    v23 = 1168;
    goto LABEL_33;
  }
  FirstTag = SdbFindFirstTag(a1, FirstNamedTag, 16408);
  if ( FirstTag )
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0);
  else
    AslLogCallPrintf(1LL);
  TagDataSize = 0;
  StringTagPtr = 0LL;
  switch ( DWORDTag )
  {
    case 0:
      goto LABEL_54;
    case 1:
      v21 = 24606;
      break;
    case 3:
      v21 = -28667;
      break;
    case 4:
      v21 = 16409;
      break;
    case 11:
      v21 = 20487;
      break;
    default:
      AslLogCallPrintf(1LL);
      v23 = 1358;
      goto LABEL_33;
  }
  v22 = SdbFindFirstTag(a1, a2, v21);
  if ( !v22 )
  {
LABEL_44:
    AslLogCallPrintf(1LL);
    goto LABEL_45;
  }
  switch ( DWORDTag )
  {
    case 1:
      StringTagPtr = (__int64 *)SdbGetStringTagPtr(a1, v22);
      if ( StringTagPtr )
      {
        v26 = -1LL;
        do
          ++v26;
        while ( *((_WORD *)StringTagPtr + v26) );
        TagDataSize = 2 * v26 + 2;
        goto LABEL_54;
      }
      goto LABEL_44;
    case 3:
      TagDataSize = SdbGetTagDataSize(a1, v22);
      StringTagPtr = (__int64 *)SdbpGetMappedTagData(a1, v22);
      if ( StringTagPtr )
        goto LABEL_54;
      goto LABEL_44;
    case 4:
      Src = SdbReadDWORDTag(a1, v22, 0);
      StringTagPtr = (__int64 *)&Src;
      TagDataSize = 4;
      goto LABEL_23;
  }
  QWORDTag = SdbReadQWORDTag(a1, v22, 0LL);
  StringTagPtr = &QWORDTag;
  TagDataSize = 8;
LABEL_54:
  v23 = 0;
  if ( TagDataSize )
  {
LABEL_23:
    if ( a5 && a6 && *a6 >= TagDataSize )
    {
      memmove(a5, StringTagPtr, *a6);
      v23 = 0;
    }
    else
    {
      v23 = 122;
    }
  }
  if ( a6 )
    *a6 = TagDataSize;
  if ( v31 )
    *v31 = DWORDTag;
  if ( a7 )
    *a7 = a2;
LABEL_33:
  ExFreePoolWithTag(P, 0x74705041u);
  return v23;
}
