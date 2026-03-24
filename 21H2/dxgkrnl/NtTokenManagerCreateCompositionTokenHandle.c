/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C0016040
 * Callers:
 *     <none>
 * Callees:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C00155B4 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     DxgkGetWin32kImportTable @ 0x1C0016488 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // r15
  int LocallyUniqueId; // edi
  PVOID PoolWithTag; // rsi
  __int64 v9; // r14
  char *v10; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  size_t v14; // r15
  SIZE_T v15; // rax
  __int64 Win32kImportTable; // rax
  __int64 v17; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  void *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  _QWORD v33[13]; // [rsp+A0h] [rbp-68h] BYREF
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+118h] [rbp+10h]
  unsigned int v36; // [rsp+120h] [rbp+18h]

  v36 = a3;
  v35 = a2;
  Src = a1;
  v6 = a2;
  LocallyUniqueId = 0;
  Handle = (HANDLE)-1LL;
  PoolWithTag = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v9 = 0LL;
  v27 = 0LL;
  KeEnterCriticalRegion();
  v10 = (char *)Src;
  if ( !Src || !(_DWORD)v6 || !v36 || !a4 )
    LocallyUniqueId = -1073741811;
  if ( LocallyUniqueId >= 0 )
  {
    v11 = v6;
    v13 = v6;
    v12 = 24 * v6;
    v31 = (v6 * (unsigned __int128)0x18uLL) >> 64;
    v14 = 24 * v6;
    if ( is_mul_ok(v13, 0x18uLL) )
    {
      v32 = v12;
      LocallyUniqueId = 0;
    }
    else
    {
      v14 = -1LL;
      v32 = -1LL;
      LocallyUniqueId = -1073741675;
    }
    if ( LocallyUniqueId >= 0 )
    {
      v15 = 24 * v11;
      if ( !is_mul_ok(v11, 0x18uLL) )
        v15 = -1LL;
      if ( !v15 )
        v15 = 1LL;
      if ( v15 <= 0x7FFFFFFF )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x62634D54u);
        v10 = (char *)Src;
      }
      v26 = PoolWithTag;
      if ( !PoolWithTag )
        LocallyUniqueId = -1073741801;
    }
    if ( LocallyUniqueId < 0 )
    {
      LODWORD(v6) = v35;
    }
    else
    {
      if ( &v10[v14] < v10 || (unsigned __int64)&v10[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(PoolWithTag, v10, v14);
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        a4 = (__int64 *)MmUserProbeAddress;
      v9 = *a4;
      v27 = *a4;
      LocallyUniqueId = 0;
      LODWORD(v6) = v35;
    }
  }
  if ( LocallyUniqueId >= 0 )
  {
    Win32kImportTable = DxgkGetWin32kImportTable();
    LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(Win32kImportTable + 192))(0x80000000LL, &v25);
    if ( LocallyUniqueId >= 0 )
    {
      v33[0] = 48LL;
      memset(&v33[1], 0, 24);
      v33[4] = v25;
      v33[5] = 0LL;
      *(_QWORD *)&v29 = PoolWithTag;
      *((_QWORD *)&v29 + 1) = __PAIR64__(v36, v6);
      v30 = v9;
      Src = 0LL;
      LOBYTE(v17) = 1;
      LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v33, v17, 0LL, 136, 0, 0, &Src);
      if ( LocallyUniqueId >= 0 )
      {
        CurrentProcess = PsGetCurrentProcess();
        ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
        *((_DWORD *)Src + 2) = ProcessSessionId;
        LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Src + 3);
        v20 = Src;
        if ( LocallyUniqueId < 0
          || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                  (struct DxgkCompositionObject *)Src,
                                  (const struct CompositionTokenInitInfo *)&v29,
                                  (struct IDxgkCompositionObject **)Src + 2),
              v20 = Src,
              LocallyUniqueId < 0) )
        {
          ObfDereferenceObject(v20);
        }
        else
        {
          LocallyUniqueId = ObInsertObject(Src, 0LL, 3u, 0, 0LL, &Handle);
        }
      }
      if ( LocallyUniqueId >= 0 )
      {
        v21 = (_QWORD *)a5;
        if ( a5 )
        {
          if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v21 = Handle;
        }
        else
        {
          LocallyUniqueId = -1073741811;
        }
        if ( LocallyUniqueId >= 0 && v9 )
        {
          v22 = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(__int64, _QWORD))(v22 + 32))(v9, 0LL);
        }
      }
    }
  }
  if ( v25 )
  {
    v23 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64))(v23 + 312))(v25);
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
