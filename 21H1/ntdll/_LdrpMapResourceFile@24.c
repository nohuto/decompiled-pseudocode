/*
 * XREFs of _LdrpMapResourceFile@24 @ 0x4B2B961A
 * Callers:
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 * Callees:
 *     _LdrpNtOpenFileUnredirected@12 @ 0x4B2B925A (_LdrpNtOpenFileUnredirected@12.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 */

int __fastcall LdrpMapResourceFile(int a1, int *a2, char a3, HANDLE *a4, _DWORD *a5, _DWORD *a6)
{
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  NTSTATUS v10; // esi
  void *v11; // eax
  volatile signed __int32 *v12; // edi
  OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-50h] BYREF
  _DWORD v15[3]; // [esp+28h] [ebp-38h] BYREF
  volatile signed __int32 *v16; // [esp+34h] [ebp-2Ch]
  _DWORD v17[2]; // [esp+38h] [ebp-28h] BYREF
  int v18; // [esp+40h] [ebp-20h] BYREF
  int v19; // [esp+44h] [ebp-1Ch]
  char v20[4]; // [esp+48h] [ebp-18h]
  int v21; // [esp+4Ch] [ebp-14h] BYREF
  int v22; // [esp+50h] [ebp-10h]
  int v23; // [esp+54h] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+58h] [ebp-8h] BYREF
  HANDLE FileHandle; // [esp+5Ch] [ebp-4h] BYREF

  v7 = 0;
  *(_DWORD *)v20 = a1;
  FileHandle = 0;
  Handle = 0;
  v23 = 0;
  v21 = 0;
  if ( a1 && a2 && a5 )
  {
    v8 = RtlImageNtHeader(a1 & 0xFFFFFFFC);
    if ( !v8 )
    {
      v10 = -1073741701;
      goto LABEL_27;
    }
    v9 = *(_WORD *)(v8 + 72) < 6u ? 8 : 2;
    if ( a3 )
    {
      v18 = *a2;
      v19 = a2[1];
      v22 = 0;
      ObjectAttributes.Length = 24;
    }
    else
    {
      v10 = RtlpDosPathNameToRelativeNtPathName_U(&v18, 0, v15);
      if ( v10 < 0 )
        goto LABEL_27;
      v7 = v19;
      v22 = v19;
      if ( LOWORD(v15[0]) )
      {
        v18 = v15[0];
        v19 = v15[1];
        v11 = (void *)v15[2];
      }
      else
      {
        v11 = 0;
      }
      ObjectAttributes.Length = 24;
      if ( v7 )
      {
        ObjectAttributes.RootDirectory = v11;
        goto LABEL_11;
      }
    }
    ObjectAttributes.RootDirectory = 0;
LABEL_11:
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
    v10 = LdrpNtOpenFileUnredirected(&FileHandle, &ObjectAttributes, v20[0]);
    if ( v7 )
    {
      v12 = v16;
      if ( v16 && !_InterlockedExchangeAdd(v16, 0xFFFFFFFF) )
      {
        NtClose(*((HANDLE *)v12 + 1));
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v22);
    }
    if ( v10 >= 0 )
    {
      v10 = NtCreateSection(&Handle, 983045, 0, 0, v9, 0x8000000, FileHandle);
      if ( v10 >= 0 )
      {
        v17[0] = 0;
        v17[1] = 0;
        v10 = ZwMapViewOfSection(Handle, -1, &v23, 0, 0, v17, &v21, 1, 0, v9);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0;
        }
        if ( v10 >= 0 )
        {
          if ( !RtlImageNtHeader(v23) )
            v10 = -1073741701;
          if ( v10 >= 0 )
          {
            *a5 = v23;
            if ( a6 )
              *a6 = v21;
            if ( a4 )
            {
              *a4 = FileHandle;
            }
            else if ( FileHandle )
            {
              NtClose(FileHandle);
            }
            return v10;
          }
        }
      }
    }
LABEL_27:
    if ( FileHandle )
    {
      NtClose(FileHandle);
      FileHandle = 0;
    }
    if ( v23 )
      NtUnmapViewOfSection(-1, v23);
    return v10;
  }
  return -1073741811;
}
