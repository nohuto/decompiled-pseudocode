/*
 * XREFs of PortPassThroughExValidateNormalizedRequest @ 0x1C007C68C
 * Callers:
 *     PortPassThroughExValidate @ 0x1C0058760 (PortPassThroughExValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughExValidateNormalizedRequest(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r9
  char v14; // r8
  bool v15; // zf
  unsigned __int64 v16; // r8
  bool v17; // cc
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  char v21; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v15 = *(_BYTE *)(a1 + 56) == 72;
  v5 = *(_QWORD *)(a2 + 184);
  DestinationString = 0LL;
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(unsigned int *)(v5 + 8);
  if ( v15 )
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
  if ( (_BYTE)v10 )
  {
    v11 = *(_DWORD *)(a1 + 28);
    if ( v11 < v9 )
      return 3221225485LL;
    v9 = v11 + v10;
    if ( v11 + v10 > (unsigned int)v6 || v9 > (unsigned int)v7 )
      return 3221225485LL;
  }
  v12 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v12 )
  {
    if ( !*(_QWORD *)(a1 + 40) )
      return 3221225485LL;
  }
  v13 = *(unsigned int *)(a1 + 36);
  if ( (_DWORD)v13 )
  {
    if ( !*(_QWORD *)(a1 + 48) )
      return 3221225485LL;
  }
  v14 = *(_BYTE *)(a1 + 18);
  if ( v14 == 2 )
  {
    if ( (_DWORD)v13 || (_DWORD)v12 || *(_QWORD *)(a1 + 48) )
      return 3221225485LL;
    v15 = *(_QWORD *)(a1 + 40) == 0LL;
  }
  else
  {
    if ( (!v14 || v14 == 3) && !(_DWORD)v12 || ((v14 - 1) & 0xFD) == 0 && !(_DWORD)v13 )
      return 3221225485LL;
    if ( v14 )
    {
      if ( v14 == 1 && ((_DWORD)v12 || *(_QWORD *)(a1 + 40)) )
        return 3221225485LL;
      goto LABEL_31;
    }
    if ( (_DWORD)v13 )
      return 3221225485LL;
    v15 = *(_QWORD *)(a1 + 48) == 0LL;
  }
  if ( !v15 )
    return 3221225485LL;
LABEL_31:
  if ( a3 )
    goto LABEL_51;
  if ( v14 )
  {
    if ( v14 != 1 )
    {
      if ( v14 == 3 )
      {
        if ( !(_DWORD)v12 )
          return 3221225485LL;
        v19 = *(_QWORD *)(a1 + 40);
        if ( v19 < v9 )
          return 3221225485LL;
        if ( v19 + v12 > v6 )
          return 3221225485LL;
        if ( v19 + v12 > v7 )
          return 3221225485LL;
        if ( !(_DWORD)v13 )
          return 3221225485LL;
        v20 = *(_QWORD *)(a1 + 48);
        if ( v20 < (unsigned int)(v12 + *(_DWORD *)(a1 + 40)) || v20 + v13 > v7 || v20 + v13 > v6 )
          return 3221225485LL;
      }
      goto LABEL_51;
    }
    if ( !(_DWORD)v13 )
      return 3221225485LL;
    v18 = *(_QWORD *)(a1 + 48);
    if ( v18 < v9 )
      return 3221225485LL;
    v17 = v18 + v13 <= v7;
  }
  else
  {
    if ( !(_DWORD)v12 )
      return 3221225485LL;
    v16 = *(_QWORD *)(a1 + 40);
    if ( v16 < v9 )
      return 3221225485LL;
    v17 = v16 + v12 <= v6;
  }
  if ( !v17 )
    return 3221225485LL;
LABEL_51:
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) - 1) > 0x1A5DF )
    return 3221225485LL;
  v21 = *(_BYTE *)(a1 + 56);
  if ( v21 == 24 || (unsigned __int8)(v21 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
