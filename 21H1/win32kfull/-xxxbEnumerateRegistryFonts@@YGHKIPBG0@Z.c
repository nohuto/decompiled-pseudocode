/*
 * XREFs of ?xxxbEnumerateRegistryFonts@@YGHKIPBG0@Z @ 0xD6F2C
 * Callers:
 *     ?xxxLoadUserAndNetworkFonts@@YGXXZ @ 0xD6E00 (-xxxLoadUserAndNetworkFonts@@YGXXZ.c)
 *     ?xxxLoadPermanentFonts@@YGHXZ @ 0xD6ED6 (-xxxLoadPermanentFonts@@YGHXZ.c)
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z @ 0xD7046 (-xxxbEnumerateRegistryFontsInternal@@YGHPAXK@Z.c)
 */

int __userpurge xxxbEnumerateRegistryFonts@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        unsigned int a3,
        unsigned int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6)
{
  int ProfileUserName; // esi
  void *v8; // edi
  int v9; // esi
  _DWORD *v10; // ebx
  ULONG i; // ecx
  NTSTATUS v12; // eax
  void *v14; // eax
  __int16 v15; // ax
  void *v16; // [esp+0h] [ebp-60h]
  void *v17; // [esp+0h] [ebp-60h]
  unsigned int v18; // [esp+4h] [ebp-5Ch]
  unsigned int v19; // [esp+4h] [ebp-5Ch]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-50h] BYREF
  _BYTE v21[12]; // [esp+28h] [ebp-38h] BYREF
  _DWORD v22[3]; // [esp+34h] [ebp-2Ch] BYREF
  int v23; // [esp+40h] [ebp-20h] BYREF
  _DWORD *v24; // [esp+44h] [ebp-1Ch]
  PVOID KeyInformation; // [esp+48h] [ebp-18h]
  int v26; // [esp+4Ch] [ebp-14h]
  ULONG v27; // [esp+50h] [ebp-10h]
  ULONG Index; // [esp+54h] [ebp-Ch]
  void *KeyHandle; // [esp+58h] [ebp-8h] BYREF
  ULONG ResultLength; // [esp+5Ch] [ebp-4h] BYREF

  v26 = a2;
  v27 = 544;
  memset(v21, 0, sizeof(v21));
  ProfileUserName = 0;
  KeyHandle = 0;
  v23 = 0;
  v24 = 0;
  ResultLength = 0;
  memset(v22, 0, sizeof(v22));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  if ( a1 == 56 )
  {
    ProfileUserName = CreateProfileUserName(v21);
    if ( !ProfileUserName )
      return 0;
  }
  v8 = (void *)OpenCacheKeyEx(ProfileUserName, a1, 131097, 0);
  if ( ProfileUserName )
    FreeProfileUserName(ProfileUserName, v21);
  if ( !v8 )
    return 0;
  v9 = xxxbEnumerateRegistryFontsInternal(v16, v18);
  v10 = (_DWORD *)Win32AllocPool(544, 1919972181);
  if ( !v10 )
    return v9;
  PushW32ThreadLock((int)v10, v22, (int)Win32FreePool);
  for ( i = 0; ; i = Index + 1 )
  {
    Index = i;
    v12 = ZwEnumerateKey(v8, i, KeyBasicInformation, v10, v27 - 2, &ResultLength);
    if ( v12 != -2147483643 && v12 != -1073741789 )
      break;
    ResultLength += 2;
    v14 = (void *)Win32AllocPool(ResultLength, 1919972181);
    KeyInformation = v14;
    if ( v14 )
    {
      ThreadLockExchange((int)v14, (int)v22);
      Win32FreePool(v10);
      v10 = KeyInformation;
      v27 = ResultLength;
      v12 = ZwEnumerateKey(v8, Index, KeyBasicInformation, KeyInformation, ResultLength - 2, &ResultLength);
      if ( v12 != -2147483643 && v12 != -1073741789 )
        break;
    }
LABEL_20:
    ;
  }
  if ( v12 >= 0 )
  {
    *((_WORD *)v10 + (v10[3] >> 1) + 8) = 0;
    v24 = v10 + 4;
    v15 = *((_WORD *)v10 + 6);
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    LOWORD(v23) = v15;
    HIWORD(v23) = v15;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v23;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = v8;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 |= xxxbEnumerateRegistryFontsInternal(v17, v19);
      ZwClose(KeyHandle);
    }
    goto LABEL_20;
  }
  PopAndFreeAlwaysW32ThreadLock((int)v22);
  ZwClose(v8);
  return v9;
}
