/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x1800D8700
 * Callers:
 *     RtlDestroyQueryDebugBuffer @ 0x1800D76A0 (RtlDestroyQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D84D0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtOpenProcess @ 0x18009DAC0 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x18009DB00 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB40 (NtUnmapViewOfSection.c)
 */

NTSTATUS __fastcall RtlpChangeQueryDebugBufferTarget(__int64 a1, void *a2, int a3, HANDLE *a4)
{
  void *v4; // rax
  __int64 v5; // r14
  NTSTATUS result; // eax
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  NTSTATUS v13; // edi
  HANDLE v14; // rdx
  PVOID *v15; // rdi
  ULONG_PTR v16; // r8
  NTSTATUS v17; // esi
  HANDLE v18; // rdx
  __int128 v19; // xmm0
  _OWORD *v20; // rbx
  HANDLE ProcessHandle; // [rsp+58h] [rbp-39h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-31h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-29h] BYREF
  _CLIENT_ID ClientId; // [rsp+70h] [rbp-21h] BYREF
  _CLIENT_ID v25; // [rsp+80h] [rbp-11h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF

  v4 = *(void **)(a1 + 48);
  v5 = a1 + *(_QWORD *)(a1 + 88);
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( v4 )
  {
    ClientId.UniqueProcess = v4;
    ClientId.UniqueThread = 0LL;
    result = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
    if ( result < 0 )
      return result;
    v11 = (__int64)ProcessHandle;
  }
  else
  {
    v11 = -1LL;
    ProcessHandle = (HANDLE)-1LL;
  }
  if ( a2 )
  {
    v25.UniqueProcess = a2;
    v25.UniqueThread = 0LL;
    v12 = NtOpenProcess(&Handle, 0x1FFFFFu, &ObjectAttributes, &v25);
    v11 = (__int64)ProcessHandle;
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( ProcessHandle != (HANDLE)-1LL )
        NtClose(ProcessHandle);
      return v13;
    }
    v14 = Handle;
  }
  else
  {
    v14 = 0LL;
    Handle = 0LL;
  }
  v15 = (PVOID *)(a1 + 16);
  if ( v11 == -1 )
  {
    v16 = *(_QWORD *)(a1 + 88);
    *v15 = (PVOID)(v16 + *(_QWORD *)(a1 + 8));
  }
  else
  {
    if ( *v15 )
    {
      NtUnmapViewOfSection((HANDLE)v11, *v15);
      v11 = (__int64)ProcessHandle;
      *v15 = 0LL;
    }
    NtClose((HANDLE)v11);
    v16 = *(_QWORD *)(a1 + 88);
    v14 = Handle;
  }
  ViewSize = v16;
  SectionOffset.QuadPart = v16;
  if ( v14 )
  {
    v17 = ZwMapViewOfSection(
            *(HANDLE *)a1,
            v14,
            (PVOID *)(a1 + 16),
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v17 == -1073741800 )
    {
      v18 = Handle;
      *v15 = 0LL;
      v17 = ZwMapViewOfSection(
              *(HANDLE *)a1,
              v18,
              (PVOID *)(a1 + 16),
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
    }
    if ( v17 < 0 )
    {
      NtClose(Handle);
      return v17;
    }
    if ( a4 )
      *a4 = Handle;
    else
      NtClose(Handle);
  }
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = a1 - (_QWORD)*v15;
  if ( a3 == 1 )
  {
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = *(_DWORD *)v15;
    *(_DWORD *)(v5 + 8) = *(_DWORD *)v15;
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v5 + 16) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v5 + 28) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v5 + 32) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(v5 + 36) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v5 + 40) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v5 + 44) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 160);
  }
  else
  {
    *(_OWORD *)v5 = *(_OWORD *)a1;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v5 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v5 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v5 + 96) = *(_OWORD *)(a1 + 96);
    v19 = *(_OWORD *)(a1 + 112);
    v20 = (_OWORD *)(a1 + 128);
    *(_OWORD *)(v5 + 112) = v19;
    *(_OWORD *)(v5 + 128) = *v20;
    *(_OWORD *)(v5 + 144) = v20[1];
    *(_OWORD *)(v5 + 160) = v20[2];
    *(_OWORD *)(v5 + 176) = v20[3];
    *(_OWORD *)(v5 + 192) = v20[4];
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 16);
    *(_QWORD *)v5 = 0LL;
  }
  return 0;
}
