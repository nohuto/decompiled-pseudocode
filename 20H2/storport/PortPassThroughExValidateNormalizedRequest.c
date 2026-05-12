/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C007DBD8
 * Callers:
 *     PortPassThroughExValidate @ 0x1C0059DD4 (PortPassThroughExValidate.c)
 * Callees:
 *     RtlULongAdd @ 0x1C0045C80 (RtlULongAdd.c)
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v9; // r9d
  ULONG v10; // eax
  ULONG v11; // ecx
  ULONG v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // dl
  bool v17; // zf
  unsigned __int64 v18; // rdx
  bool v19; // cc
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  char v25; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v17 = *(_BYTE *)(a1 + 56) == 72;
  v5 = *(_QWORD *)(a2 + 184);
  DestinationString = 0LL;
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( v17 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
      return 3221225659LL;
    ZwClose(KeyHandle);
  }
  v9 = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 24);
  v10 = *(unsigned __int8 *)(a1 + 17);
  LODWORD(KeyHandle) = v9;
  if ( (_BYTE)v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v12 = v10;
    v13 = v11 + v10;
    if ( v13 > (unsigned int)v6 || v13 > (unsigned int)v7 || RtlULongAdd(v11, v12, (ULONG *)&KeyHandle) < 0 )
      return 3221225485LL;
    v9 = (unsigned int)KeyHandle;
  }
  v14 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v14 && !*(_QWORD *)(a1 + 40) )
    return 3221225485LL;
  v15 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v15 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v16 = *(_BYTE *)(a1 + 18);
  if ( v16 == 2 )
  {
    if ( (_DWORD)v15 || (_DWORD)v14 || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 40) == 0LL;
  }
  else
  {
    if ( (!v16 || v16 == 3) && !(_DWORD)v14 || ((v16 - 1) & 0xFD) == 0 && !(_DWORD)v15 )
      return 3221225485LL;
    if ( v16 )
    {
      if ( v16 == 1 && ((_DWORD)v14 || *(_QWORD *)(a1 + 40)) )
        return 3221225485LL;
      goto LABEL_33;
    }
    if ( (_DWORD)v15 )
      return 3221225485LL;
    v17 = *(_QWORD *)(a1 + 48) == 0LL;
  }
  if ( !v17 )
    return 3221225485LL;
LABEL_33:
  if ( a3 )
    goto LABEL_53;
  if ( v16 )
  {
    if ( v16 != 1 )
    {
      if ( v16 == 3 )
      {
        if ( !(_DWORD)v14 )
          return 3221225485LL;
        v21 = *(_QWORD *)(a1 + 40);
        if ( v21 < v9 )
          return 3221225485LL;
        if ( v21 + v14 > v6 )
          return 3221225485LL;
        if ( v21 + v14 > v7 )
          return 3221225485LL;
        v22 = v14 + v21;
        if ( !(_DWORD)v15 )
          return 3221225485LL;
        v23 = *(_QWORD *)(a1 + 48);
        if ( v23 < v22 )
          return 3221225485LL;
        v24 = v15 + v23;
        if ( v24 > v7 || v24 > v6 )
          return 3221225485LL;
      }
      goto LABEL_53;
    }
    if ( !(_DWORD)v15 )
      return 3221225485LL;
    v20 = *(_QWORD *)(a1 + 48);
    if ( v20 < v9 )
      return 3221225485LL;
    v19 = v20 + v15 <= v7;
  }
  else
  {
    if ( !(_DWORD)v14 )
      return 3221225485LL;
    v18 = *(_QWORD *)(a1 + 40);
    if ( v18 < v9 )
      return 3221225485LL;
    v19 = v18 + v14 <= v6;
  }
  if ( !v19 )
    return 3221225485LL;
LABEL_53:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v25 = *(_BYTE *)(a1 + 56);
  if ( v25 == 24 || (unsigned __int8)(v25 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
