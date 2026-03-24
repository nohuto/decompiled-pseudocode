/*
 * XREFs of DxgkWaitForVerticalBlankEvent2 @ 0x1C0157060
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0157380 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEvent2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID v13; // rcx
  struct _KEVENT **v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // esi
  PVOID *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v21; // rax
  HANDLE v22; // rcx
  PVOID *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-E0h]
  char v29; // [rsp+40h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v31[4]; // [rsp+50h] [rbp-C8h]
  HANDLE Handle[2]; // [rsp+60h] [rbp-B8h]
  __int128 v33; // [rsp+70h] [rbp-A8h]
  __int128 v34; // [rsp+80h] [rbp-98h]
  __int128 v35; // [rsp+90h] [rbp-88h]
  _QWORD v36[10]; // [rsp+A0h] [rbp-78h] BYREF

  v3 = (_OWORD *)a1;
  v4 = 0;
  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2083;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2083);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2083LL);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v31 = *v3;
  *(_OWORD *)Handle = v3[1];
  v33 = v3[2];
  v34 = v3[3];
  v35 = v3[4];
  if ( v31[3] > 8 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v6);
    v22 = (HANDLE)v31[3];
    v21[4] = 32LL;
    v21[5] = -1073741811LL;
  }
  else
  {
    memset(v36, 0, 0x48uLL);
    v7 = 0LL;
    v8 = v31[3];
    if ( !v31[3] )
    {
LABEL_11:
      v14 = (struct _KEVENT **)v36;
      if ( !v4 )
        v14 = 0LL;
      v16 = DxgkWaitForVerticalBlankEventInternal(v31[0], v31[1], v31[2], v4, v14);
      if ( (_DWORD)v8 )
      {
        v17 = (PVOID *)&v36[1];
        do
        {
          ObfDereferenceObject(*v17++);
          --v8;
        }
        while ( v8 );
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v15);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v27);
      }
      return v16;
    }
    while ( 1 )
    {
      Object = 0LL;
      v9 = (unsigned int)v7;
      v10 = ObReferenceObjectByHandle(Handle[v7], 0x100000u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v12 = (unsigned int)(v7 + 1);
      v13 = Object;
      v36[v12] = Object;
      if ( v10 < 0 )
        break;
      v7 = (unsigned int)v12;
      if ( (unsigned int)v12 >= (unsigned int)v8 )
      {
        if ( (_DWORD)v8 )
          v4 = v8 + 1;
        goto LABEL_11;
      }
    }
    if ( (_DWORD)v7 )
    {
      v23 = (PVOID *)&v36[1];
      v9 = (unsigned int)v7;
      do
      {
        ObfDereferenceObject(*v23++);
        --v7;
      }
      while ( v7 );
    }
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v11, v12);
    v22 = Handle[v9];
    v21[4] = -1073741811LL;
  }
  v21[3] = v22;
  WdLogEvent5_WdWarning(v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v24);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v27);
  return 3221225485LL;
}
