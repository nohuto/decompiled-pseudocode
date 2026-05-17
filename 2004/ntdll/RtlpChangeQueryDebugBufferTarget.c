/*
 * XREFs of RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0
 * Callers:
 *     RtlDestroyQueryDebugBuffer @ 0x1800D7590 (RtlDestroyQueryDebugBuffer.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D83C0 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenProcess @ 0x18009D2D0 (NtOpenProcess.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 */

__int64 __fastcall RtlpChangeQueryDebugBufferTarget(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r14
  __int64 result; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  HANDLE v13; // rdx
  _QWORD *v14; // rdi
  int v15; // esi
  __int128 v16; // xmm0
  _OWORD *v17; // rbx
  __int64 Handle; // [rsp+58h] [rbp-39h]
  HANDLE v19; // [rsp+F8h] [rbp+67h]

  v4 = a1 + *(_QWORD *)(a1 + 88);
  if ( *(_QWORD *)(a1 + 48) )
  {
    result = NtOpenProcess();
    if ( (int)result < 0 )
      return result;
    v10 = Handle;
  }
  else
  {
    v10 = -1LL;
    Handle = -1LL;
  }
  if ( a2 )
  {
    v11 = NtOpenProcess();
    v10 = Handle;
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( Handle != -1 )
        NtClose((HANDLE)Handle);
      return v12;
    }
    v13 = v19;
  }
  else
  {
    v13 = 0LL;
    v19 = 0LL;
  }
  v14 = (_QWORD *)(a1 + 16);
  if ( v10 == -1 )
  {
    *v14 = *(_QWORD *)(a1 + 88) + *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( *v14 )
    {
      NtUnmapViewOfSection();
      v10 = Handle;
      *v14 = 0LL;
    }
    NtClose((HANDLE)v10);
    v13 = v19;
  }
  if ( v13 )
  {
    v15 = ZwMapViewOfSection();
    if ( v15 == -1073741800 )
    {
      *v14 = 0LL;
      v15 = ZwMapViewOfSection();
    }
    if ( v15 < 0 )
    {
      NtClose(v19);
      return (unsigned int)v15;
    }
    if ( a4 )
      *a4 = v19;
    else
      NtClose(v19);
  }
  *(_QWORD *)(a1 + 48) = a2;
  *(_QWORD *)(a1 + 24) = a1 - *v14;
  if ( a3 == 1 )
  {
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = *(_DWORD *)v14;
    *(_DWORD *)(v4 + 8) = *(_DWORD *)v14;
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v4 + 24) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(v4 + 80) = *(_DWORD *)(a1 + 160);
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)a1;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(a1 + 32);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(a1 + 48);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(a1 + 64);
    *(_OWORD *)(v4 + 80) = *(_OWORD *)(a1 + 80);
    *(_OWORD *)(v4 + 96) = *(_OWORD *)(a1 + 96);
    v16 = *(_OWORD *)(a1 + 112);
    v17 = (_OWORD *)(a1 + 128);
    *(_OWORD *)(v4 + 112) = v16;
    *(_OWORD *)(v4 + 128) = *v17;
    *(_OWORD *)(v4 + 144) = v17[1];
    *(_OWORD *)(v4 + 160) = v17[2];
    *(_OWORD *)(v4 + 176) = v17[3];
    *(_OWORD *)(v4 + 192) = v17[4];
    *(_QWORD *)(v4 + 8) = *(_QWORD *)(v4 + 16);
    *(_QWORD *)v4 = 0LL;
  }
  return 0LL;
}
