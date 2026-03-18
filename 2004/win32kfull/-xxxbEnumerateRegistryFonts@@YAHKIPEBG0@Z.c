/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C004893C
 * Callers:
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0048AD4 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0048C2C (-xxxLoadPermanentFonts@@YAHXZ.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0044BB8 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ThreadLockExchange @ 0x1C00B2F7C (ThreadLockExchange.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFonts(
        __int64 a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // rbx
  ULONG v6; // r12d
  void *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int *v10; // rsi
  ULONG i; // r14d
  NTSTATUS v12; // eax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int128 v16; // [rsp+30h] [rbp-49h] BYREF
  __int128 v17; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+50h] [rbp-29h]
  __int128 v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+E8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  KeyHandle = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  ResultLength = 0;
  v5 = 0LL;
  v6 = 544;
  v19 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a2 == 56 )
  {
    v5 = CreateProfileUserName(&v19);
    if ( !v5 )
      return 0LL;
  }
  v7 = (void *)OpenCacheKeyEx(v5, a2, 131097LL, 0LL);
  if ( v5 )
    FreeProfileUserName(v5, &v19);
  if ( !v7 )
    return 0LL;
  v8 = xxxbEnumerateRegistryFontsInternal(v7);
  v9 = Win32AllocPool(544LL, 1919972181LL);
  v10 = (unsigned int *)v9;
  if ( !v9 )
    return v8;
  PushW32ThreadLock(v9, &v17, (__int64)Win32FreePool);
  for ( i = 0; ; ++i )
  {
    v12 = ZwEnumerateKey(v7, i, KeyBasicInformation, v10, v6 - 2, &ResultLength);
    if ( v12 != -2147483643 && v12 != -1073741789 )
      break;
    ResultLength += 2;
    v14 = Win32AllocPool(ResultLength, 1919972181LL);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      ThreadLockExchange(v14, &v17);
      Win32FreePool(v10);
      v6 = ResultLength;
      v10 = v15;
      v12 = ZwEnumerateKey(v7, i, KeyBasicInformation, v15, ResultLength - 2, &ResultLength);
      if ( v12 != -2147483643 && v12 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v12 >= 0 )
  {
    *((_WORD *)v10 + ((unsigned __int64)v10[3] >> 1) + 8) = 0;
    *((_QWORD *)&v16 + 1) = v10 + 4;
    LOWORD(v16) = *((_WORD *)v10 + 6);
    WORD1(v16) = v16;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v16;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = v7;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v8 |= xxxbEnumerateRegistryFontsInternal(KeyHandle);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v17);
  ZwClose(v7);
  return v8;
}
