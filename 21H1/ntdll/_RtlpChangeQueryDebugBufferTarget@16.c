/*
 * XREFs of _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2
 * Callers:
 *     _RtlDestroyQueryDebugBuffer@4 @ 0x4B3369C0 (_RtlDestroyQueryDebugBuffer@4.c)
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlSetProcessDebugInformation@12 @ 0x4B337540 (_RtlSetProcessDebugInformation@12.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenProcess@16 @ 0x4B2F2BE0 (_ZwOpenProcess@16.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 */

NTSTATUS __fastcall RtlpChangeQueryDebugBufferTarget(int a1, void *a2, int a3, HANDLE *a4)
{
  HANDLE v5; // ecx
  void *v7; // eax
  _DWORD *v8; // ebx
  NTSTATUS result; // eax
  int v10; // eax
  NTSTATUS v11; // edi
  PVOID *v12; // edi
  unsigned int v13; // edx
  NTSTATUS v14; // eax
  int v15; // eax
  SIZE_T v16; // [esp-14h] [ebp-6Ch]
  SIZE_T v17; // [esp-14h] [ebp-6Ch]
  ULONG v18; // [esp+0h] [ebp-58h]
  ULONG v19; // [esp+0h] [ebp-58h]
  ULONG v20; // [esp+4h] [ebp-54h]
  ULONG v21; // [esp+4h] [ebp-54h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-48h] BYREF
  _CLIENT_ID v23; // [esp+28h] [ebp-30h] BYREF
  _CLIENT_ID ClientId; // [esp+30h] [ebp-28h] BYREF
  SIZE_T CommitSize; // [esp+38h] [ebp-20h] BYREF
  void *v26; // [esp+44h] [ebp-14h]
  NTSTATUS v27; // [esp+48h] [ebp-10h]
  unsigned int v28; // [esp+4Ch] [ebp-Ch] BYREF
  HANDLE ProcessHandle; // [esp+50h] [ebp-8h] BYREF
  HANDLE Handle; // [esp+54h] [ebp-4h] BYREF

  ObjectAttributes.Length = 24;
  v5 = 0;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  v7 = *(void **)(a1 + 24);
  v8 = (_DWORD *)(a1 + *(_DWORD *)(a1 + 44));
  v26 = a2;
  if ( v7 )
  {
    ClientId.UniqueProcess = v7;
    ClientId.UniqueThread = 0;
    result = ZwOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( result < 0 )
      return result;
    v10 = (int)ProcessHandle;
    v5 = 0;
  }
  else
  {
    v10 = -1;
    ProcessHandle = (HANDLE)-1;
  }
  if ( a2 )
  {
    v23.UniqueProcess = a2;
    v23.UniqueThread = 0;
    v11 = ZwOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v23);
    if ( v11 < 0 )
    {
      if ( ProcessHandle != (HANDLE)-1 )
        NtClose(ProcessHandle);
      return v11;
    }
    v10 = (int)ProcessHandle;
    v5 = Handle;
  }
  else
  {
    Handle = 0;
  }
  v12 = (PVOID *)(a1 + 8);
  if ( v10 == -1 )
  {
    v13 = *(_DWORD *)(a1 + 44);
    *v12 = (PVOID)(v13 + *(_DWORD *)(a1 + 4));
  }
  else
  {
    if ( *v12 )
    {
      NtUnmapViewOfSection((HANDLE)v10, *v12);
      v10 = (int)ProcessHandle;
      *v12 = 0;
    }
    NtClose((HANDLE)v10);
    v13 = *(_DWORD *)(a1 + 44);
    v5 = Handle;
  }
  v28 = v13;
  CommitSize = v13;
  if ( v5 )
  {
    HIDWORD(v16) = &v28;
    LODWORD(v16) = &CommitSize;
    v14 = ZwMapViewOfSection(
            *(HANDLE *)a1,
            v5,
            (PVOID *)(a1 + 8),
            0LL,
            v16,
            (PLARGE_INTEGER)2,
            0,
            (SECTION_INHERIT)4,
            v18,
            v20);
    v27 = v14;
    if ( v14 == -1073741800 )
    {
      HIDWORD(v17) = &v28;
      *v12 = 0;
      LODWORD(v17) = &CommitSize;
      v14 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              Handle,
              (PVOID *)(a1 + 8),
              0LL,
              v17,
              (PLARGE_INTEGER)2,
              0,
              (SECTION_INHERIT)4,
              v19,
              v21);
      v27 = v14;
    }
    if ( v14 < 0 )
    {
      NtClose(Handle);
      return v27;
    }
    if ( a4 )
      *a4 = Handle;
    else
      NtClose(Handle);
  }
  *(_DWORD *)(a1 + 24) = v26;
  *(_DWORD *)(a1 + 12) = a1 - (_DWORD)*v12;
  if ( a3 == 1 )
  {
    *v8 = 0;
    v8[1] = *v12;
    v8[2] = *v12;
    v8[3] = *(_DWORD *)(a1 + 12);
    v8[4] = *(_DWORD *)(a1 + 16);
    v8[5] = *(_DWORD *)(a1 + 20);
    v8[6] = *(_DWORD *)(a1 + 24);
    v8[7] = *(_DWORD *)(a1 + 28);
    v8[8] = *(_DWORD *)(a1 + 32);
    v8[9] = *(_DWORD *)(a1 + 36);
    v8[10] = *(_DWORD *)(a1 + 40);
    v8[11] = *(_DWORD *)(a1 + 44);
    v8[20] = *(_DWORD *)(a1 + 80);
  }
  else
  {
    qmemcpy(v8, (const void *)a1, 0x68u);
    v15 = v8[2];
    *v8 = 0;
    v8[1] = v15;
  }
  return 0;
}
