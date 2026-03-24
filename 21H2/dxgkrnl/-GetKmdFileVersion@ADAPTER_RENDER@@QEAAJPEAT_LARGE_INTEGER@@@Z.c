/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01997B0
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C0126EB0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     DpiGetDriverFullPath @ 0x1C01830CC (DpiGetDriverFullPath.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C019985C (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(ADAPTER_RENDER *this, union _LARGE_INTEGER *a2)
{
  union _LARGE_INTEGER *v2; // rsi
  bool v3; // zf
  int DriverFullPath; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  int FileVersion; // eax
  __int64 v12; // rax
  struct _UNICODE_STRING v13; // [rsp+20h] [rbp-18h] BYREF

  v2 = (union _LARGE_INTEGER *)((char *)this + 608);
  v3 = *((_QWORD *)this + 76) == -1LL;
  v13 = 0LL;
  if ( !v3 )
  {
    LODWORD(v9) = 0;
LABEL_4:
    *a2 = *v2;
    goto LABEL_5;
  }
  DriverFullPath = DpiGetDriverFullPath(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL), &v13);
  v9 = DriverFullPath;
  if ( DriverFullPath >= 0 )
  {
    FileVersion = DxgkpGetFileVersion(&v13, v2, 0LL);
    v9 = FileVersion;
    if ( FileVersion >= 0 )
      goto LABEL_4;
  }
  v12 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v12 + 24) = *((_QWORD *)this + 2);
  *(_QWORD *)(v12 + 32) = v9;
  WdLogEvent5_WdError(v12);
LABEL_5:
  if ( v13.Buffer )
    ExFreePoolWithTag(v13.Buffer, 0);
  return (unsigned int)v9;
}
