/*
 * XREFs of ?EnumDriverFileLinks@CDriverStoreCopy@@IEAAJPEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C0262DFC
 * Callers:
 *     ?EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x1C02631CC (-EnumSingleRegistry@CDriverStoreCopy@@IEAAJPEAU_UNICODE_STRING@@PEAGW4DXGKP_HARDLINKTYPE@@W4DXGK.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

__int64 __fastcall CDriverStoreCopy::EnumDriverFileLinks(__int64 a1, const WCHAR *a2, int a3, int a4)
{
  NTSTATUS v5; // ebx
  ULONG v6; // r13d
  _DWORD *v7; // rsi
  ULONG v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  _WORD *v13; // r14
  __int64 v14; // rax
  char *v15; // rax
  _QWORD *v16; // rdi
  _WORD *v17; // r15
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  _WORD *v21; // rax
  _WORD *v22; // rdx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-71h] BYREF
  int v28; // [rsp+40h] [rbp-69h]
  int v29; // [rsp+44h] [rbp-65h]
  __int64 v30; // [rsp+48h] [rbp-61h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-49h] BYREF
  _OWORD KeyInformation[2]; // [rsp+90h] [rbp-19h] BYREF
  __int128 v34; // [rsp+B0h] [rbp+7h]

  v30 = a1;
  v29 = a4;
  DestinationString = 0LL;
  v28 = a3;
  RtlInitUnicodeString(&DestinationString, a2);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  ResultLength = 0;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v34 = 0LL;
  v5 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x30u, &ResultLength);
  if ( v5 < 0 || !(_DWORD)v34 )
    goto LABEL_36;
  v6 = DWORD2(v34) + 26 + DWORD1(v34);
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  if ( !v7 )
  {
    v5 = -1073741801;
    goto LABEL_36;
  }
  v8 = 0;
  if ( !(_DWORD)v34 )
    goto LABEL_34;
  while ( 1 )
  {
    v5 = ZwEnumerateValueKey(KeyHandle, v8, KeyValueFullInformation, v7, v6, &ResultLength);
    if ( v5 < 0 )
      goto LABEL_29;
    v12 = v7[1];
    if ( v12 != 7 && v12 != 1 )
      goto LABEL_29;
    v13 = (_WORD *)((char *)v7 + (unsigned int)v7[2]);
    if ( *v13 == 46 || *v13 == 92 )
    {
      v14 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v14 + 24) = 1547LL;
      WdLogEvent5_WdWarning(v14);
      v5 = -1073741811;
    }
    v15 = (char *)operator new[]((unsigned int)v7[3] + 42LL, 0x4B677844u, PagedPool);
    v16 = v15;
    if ( !v15 )
      break;
    v17 = v15 + 36;
    v18 = v7[3] + 2;
    *((_DWORD *)v15 + 8) = v18;
    memmove(v15 + 36, v13, v18);
    v21 = v17;
    v22 = (_WORD *)v16 + ((unsigned __int64)(unsigned int)v7[3] >> 1) + 18;
    *v22 = 0;
    if ( v17 != v22 )
    {
      do
      {
        v19 = (unsigned __int16)*v21++;
        if ( (_WORD)v19 == 92 )
        {
          v17 = v21;
        }
        else if ( !(_WORD)v19 )
        {
          if ( v21 == v22 )
            break;
          do
          {
            if ( *v21 != 32 )
              break;
            ++v21;
          }
          while ( v21 != v22 );
          if ( v21 == v22 )
            break;
          if ( *v21 )
            v17 = v21++;
        }
      }
      while ( v21 != v22 );
    }
    if ( !*v17 || *v17 == 46 )
    {
      v25 = WdLogNewEntry5_WdWarning(v19, v22, v20);
      *(_QWORD *)(v25 + 24) = 1601LL;
      WdLogEvent5_WdWarning(v25);
      v5 = -1073741811;
      operator delete[](v16);
      goto LABEL_34;
    }
    *((_DWORD *)v16 + 4) = v28;
    *((_DWORD *)v16 + 5) = v29;
    v23 = (__int64 *)(v30 + 1608);
    v16[3] = v17;
    v24 = *v23;
    if ( *(__int64 **)(*v23 + 8) != v23 )
      __fastfail(3u);
    *v16 = v24;
    v16[1] = v23;
    *(_QWORD *)(v24 + 8) = v16;
    *v23 = (__int64)v16;
LABEL_29:
    if ( ++v8 >= (unsigned int)v34 )
      goto LABEL_34;
  }
  v5 = -1073741801;
LABEL_34:
  operator delete[](v7);
LABEL_36:
  ZwClose(KeyHandle);
  return (unsigned int)v5;
}
