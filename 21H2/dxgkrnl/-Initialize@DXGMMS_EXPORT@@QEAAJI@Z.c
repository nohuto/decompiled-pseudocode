/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C019B6E8
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019B53C (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C019B848 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, __int64 a2)
{
  char *v2; // rbx
  int v3; // r14d
  const WCHAR *v5; // rdx
  unsigned int i; // ebp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // esi
  void *ExportAddress; // rbp
  void *v12; // rax
  void *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // esi
  _QWORD *v20; // rax
  bool v21; // zf
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rax

  v2 = (char *)this + 8;
  *(_OWORD *)((char *)this + 8) = 0LL;
  v3 = a2;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
    {
LABEL_24:
      v26 = WdLogNewEntry5_WdError(this, a2);
      v25 = -1073741811;
      *(_QWORD *)(v26 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v26);
      return v25;
    }
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v5 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 8), v5);
  for ( i = 0; ; ++i )
  {
    v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
    v10 = v7;
    if ( v7 >= 0 || v7 == -1073741554 )
      break;
    if ( i >= 0xA )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8);
      v23[7] = 0LL;
      v23[5] = v10;
      v23[6] = i;
      v23[3] = 275LL;
      v23[4] = 27LL;
      WdLogEvent5_WdCriticalError(v23);
    }
    else
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
        "We broke into the  debugger to allow a chance for debugging this issue.\n"
        "Another attempt to load it will be made now.\n",
        v7);
      __debugbreak();
    }
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v12 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v13 = v12;
  if ( !ExportAddress || !v12 )
    goto LABEL_24;
  v14 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  v19 = v3 + 1;
  if ( v14 )
  {
    *(_DWORD *)v14 = v19;
    v14[1] = ExportAddress;
  }
  *((_QWORD *)this + 9) = v14;
  if ( v14 )
  {
    v20 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v20 )
    {
      *(_DWORD *)v20 = v19;
      v20[1] = v13;
    }
    v21 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v20;
    if ( !v21 )
      return 0LL;
  }
  v24 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
  v25 = -1073741801;
  *(_QWORD *)(v24 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v24);
  return v25;
}
