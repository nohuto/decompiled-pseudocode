/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlCopyUnicodeString@8 @ 0x4B2D5EF0 (_RtlCopyUnicodeString@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(int a1, HANDLE *a2)
{
  int v4; // edi
  int ValueKey; // eax
  WCHAR *Heap; // eax
  HANDLE v7; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-88h] BYREF
  _DWORD v10[6]; // [esp+18h] [ebp-80h] BYREF
  _DWORD v11[6]; // [esp+30h] [ebp-68h] BYREF
  _DWORD v12[6]; // [esp+48h] [ebp-50h] BYREF
  UNICODE_STRING v13; // [esp+60h] [ebp-38h] BYREF
  UNICODE_STRING v14; // [esp+68h] [ebp-30h] BYREF
  UNICODE_STRING v15; // [esp+70h] [ebp-28h] BYREF
  void *v16; // [esp+78h] [ebp-20h] BYREF
  int v17; // [esp+7Ch] [ebp-1Ch]
  _DWORD v18[2]; // [esp+80h] [ebp-18h] BYREF
  int v19; // [esp+88h] [ebp-10h] BYREF
  WCHAR *v20; // [esp+8Ch] [ebp-Ch]
  int v21; // [esp+90h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+94h] [ebp-4h] BYREF

  v17 = a1;
  if ( dword_4B3A8A50 )
  {
    RtlInitUnicodeString(&DestinationString, &word_4B3A6C68);
    v12[0] = 24;
    v12[2] = &DestinationString;
    v12[1] = 0;
    v12[3] = 576;
    v12[4] = 0;
    v12[5] = 0;
    return ZwOpenKey((int)a2, a1, (int)v12);
  }
  Handle = 0;
  RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v11[0] = 24;
  v11[2] = &v14;
  v11[1] = 0;
  v11[3] = 576;
  v11[4] = 0;
  v11[5] = 0;
  v4 = ZwOpenKey((int)&Handle, a1, (int)v11);
  if ( v4 >= 0 )
  {
    v21 = 0;
    RtlInitUnicodeString(&v13, L"RedirectedKey");
    ValueKey = ZwQueryValueKey((int)Handle, (int)&v13, 2, 0, 0, (int)&v21);
    if ( !v21 || ValueKey != -1073741789 && ValueKey != -2147483643 )
    {
      v19 = 11141120;
      v20 = &word_4B3A6C68;
      if ( v14.Length <= 0xAAu )
      {
        RtlCopyUnicodeString((unsigned __int16 *)&v19, &v14.Length);
        dword_4B3A8A50 = 1;
      }
      v4 = 0;
      *a2 = Handle;
      Handle = 0;
      goto LABEL_21;
    }
    Heap = (WCHAR *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v21);
    v20 = Heap;
    if ( Heap )
    {
      v4 = ZwQueryValueKey((int)Handle, (int)&v13, 2, (int)Heap, v21, (int)&v21);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)v20 + 1) != 1 )
        {
          v7 = Handle;
          Handle = 0;
LABEL_15:
          *a2 = v7;
          goto LABEL_16;
        }
        RtlInitUnicodeString(&v15, v20 + 6);
        v10[0] = 24;
        v10[2] = &v15;
        v10[1] = 0;
        v10[3] = 576;
        v10[4] = 0;
        v10[5] = 0;
        v4 = ZwOpenKey((int)&v16, v17, (int)v10);
        if ( v4 >= 0 )
        {
          v18[0] = 11141120;
          v18[1] = &word_4B3A6C68;
          if ( v15.Length <= 0xAAu )
          {
            RtlCopyUnicodeString((unsigned __int16 *)v18, &v15.Length);
            dword_4B3A8A50 = 1;
          }
          v7 = v16;
          goto LABEL_15;
        }
      }
LABEL_16:
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v20);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
  return v4;
}
