/*
 * XREFs of _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4
 * Callers:
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtCreateFile@44 @ 0x4B2F2ED0 (_NtCreateFile@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __thiscall RtlpFileIsWin32WithRCManifest(void *this)
{
  char v1; // bl
  int v2; // edi
  int v3; // ecx
  NTSTATUS v4; // eax
  volatile signed __int32 *v5; // esi
  int v6; // esi
  int v7; // esi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+Ch] [ebp-74h] BYREF
  int v10; // [esp+14h] [ebp-6Ch] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+18h] [ebp-68h] BYREF
  _DWORD v12[3]; // [esp+30h] [ebp-50h] BYREF
  volatile signed __int32 *v13; // [esp+3Ch] [ebp-44h]
  _DWORD v14[2]; // [esp+40h] [ebp-40h] BYREF
  unsigned int *v15; // [esp+48h] [ebp-38h] BYREF
  int v16; // [esp+4Ch] [ebp-34h] BYREF
  NTSTATUS v17; // [esp+50h] [ebp-30h]
  int v18; // [esp+54h] [ebp-2Ch] BYREF
  int v19; // [esp+58h] [ebp-28h]
  _DWORD *v20; // [esp+5Ch] [ebp-24h] BYREF
  HANDLE Handle; // [esp+60h] [ebp-20h] BYREF
  HANDLE FileHandle; // [esp+64h] [ebp-1Ch] BYREF
  int v23; // [esp+68h] [ebp-18h] BYREF
  char v24; // [esp+6Fh] [ebp-11h]
  _DWORD v25[3]; // [esp+70h] [ebp-10h] BYREF

  v1 = 0;
  v24 = 0;
  FileHandle = 0;
  v23 = 0;
  v20 = 0;
  if ( RtlDosPathNameToRelativeNtPathName_U((int)this, (unsigned __int16 *)&v18, 0, v12) )
  {
    v2 = v19;
    if ( LOWORD(v12[0]) )
    {
      v3 = v12[2];
      v18 = v12[0];
      v19 = v12[1];
    }
    else
    {
      v3 = 0;
    }
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.RootDirectory = v2 != 0 ? (HANDLE)v3 : 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    v4 = NtCreateFile(&FileHandle, 0x80100080, &ObjectAttributes, &IoStatusBlock, 0, 0, 5u, 1u, 0, 0, 0);
    v17 = v4;
    if ( v2 )
    {
      v5 = v13;
      if ( v13 && !_InterlockedExchangeAdd(v13, 0xFFFFFFFF) )
      {
        NtClose(*((HANDLE *)v5 + 1));
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v5);
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v2);
      v4 = v17;
    }
    if ( v4 >= 0 )
    {
      v24 = 1;
      if ( NtCreateSection((int)&Handle, 983045, 0, 0, 2, 0x8000000, (int)FileHandle) >= 0 )
      {
        v14[0] = 0;
        v14[1] = 0;
        v16 = 0;
        v6 = ZwMapViewOfSection((int)Handle, -1, (int)&v23, 0, 0, (int)v14, (int)&v16, 1, 0, 8);
        NtClose(Handle);
        if ( v6 >= 0 )
        {
          if ( RtlImageNtHeader(v23) )
          {
            v25[0] = L"MUI";
            v25[2] = 0;
            v7 = v23 | 1;
            v25[1] = 1;
            if ( LdrpSearchResourceSection_U(v23 | 1, (int)v25, 3u, 48, (int **)&v15) >= 0
              && LdrpAccessResourceDataNoMultipleLanguage(v7, v15, (unsigned int *)&v20, &v10) >= 0
              && *v20 == -20054323 )
            {
              v1 = 1;
            }
          }
        }
      }
    }
  }
  if ( v23 )
    NtUnmapViewOfSection(-1, v23);
  if ( v24 )
    NtClose(FileHandle);
  return v1;
}
