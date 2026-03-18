/*
 * XREFs of DxgkQueryProtectedSessionInfoFromNtHandle @ 0x1C02887A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionInfoFromNtHandle(ULONG64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  ULONG64 v8; // rax
  char *v9; // r14
  _QWORD *v10; // rax
  __int64 v11; // rcx
  char *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  HANDLE v17; // rsi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // r12
  __int64 v32; // rax
  __int64 v33; // rsi
  const void *v34; // rdx
  _DWORD *v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // esi
  const void *v38; // rdx
  _DWORD *v39; // rdx
  int v40; // [rsp+38h] [rbp-90h] BYREF
  __int64 v41; // [rsp+40h] [rbp-88h]
  char v42; // [rsp+48h] [rbp-80h]
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-70h]
  void *v45[2]; // [rsp+68h] [rbp-60h]
  __int64 v46; // [rsp+78h] [rbp-50h]
  unsigned int v47; // [rsp+80h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-40h] BYREF

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 530LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 2151;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2151);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 2151LL);
  HandleInformation = 0LL;
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)Handle = *(_OWORD *)v8;
  *(_OWORD *)v45 = *(_OWORD *)(v8 + 16);
  v46 = *(_QWORD *)(v8 + 32);
  v9 = (char *)Handle[1];
  if ( Handle[1] )
  {
    if ( LODWORD(v45[0]) )
      goto LABEL_14;
LABEL_13:
    v10 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v7);
    v10[3] = v9;
    v11 = LODWORD(v45[0]);
    goto LABEL_19;
  }
  if ( LODWORD(v45[0]) )
    goto LABEL_13;
LABEL_14:
  v12 = (char *)v45[1];
  if ( v45[1] )
  {
    if ( (_DWORD)v46 )
    {
LABEL_23:
      Object = 0LL;
      v17 = Handle[0];
      v18 = ObReferenceObjectByHandle(
              Handle[0],
              0x20000u,
              g_pDxgkSharedProtectedSessionObjectType,
              1,
              &Object,
              &HandleInformation);
      v22 = v18;
      if ( v18 == -1073741788 )
      {
        v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        *(_QWORD *)(v23 + 24) = v17;
        *(_QWORD *)(v23 + 32) = -1073741788LL;
        WdLogEvent5_WdWarning(v23);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v24);
        if ( v42 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v40);
        }
        return 3221225508LL;
      }
      else
      {
        if ( v18 >= 0 )
        {
          v31 = (__int64 *)Object;
          if ( !*(_QWORD *)Object )
          {
            v32 = WdLogNewEntry5_WdAssertion(v20, v19);
            *(_QWORD *)(v32 + 24) = 608LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v33 = *(unsigned int *)(*v31 + 88);
          if ( (_DWORD)v33 && LODWORD(v45[0]) >= (unsigned int)v33 )
          {
            v34 = *(const void **)(*v31 + 80);
            if ( (unsigned __int64)&v9[v33] > MmUserProbeAddress || &v9[v33] <= v9 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v9, v34, (unsigned int)v33);
          }
          v35 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v35 = (_DWORD *)MmUserProbeAddress;
          *v35 = v33;
          if ( v9 && LODWORD(v45[0]) < (unsigned int)v33 )
            LODWORD(v22) = -1073741789;
          v36 = *v31;
          v47 = *(_DWORD *)(*v31 + 104);
          v37 = v47;
          if ( v47 && (unsigned int)v46 >= v47 )
          {
            v38 = *(const void **)(v36 + 96);
            if ( (unsigned __int64)&v12[v47] > MmUserProbeAddress || &v12[v47] <= v12 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v12, v38, v37);
          }
          v39 = (_DWORD *)(a1 + 32);
          if ( a1 + 32 >= MmUserProbeAddress )
            v39 = (_DWORD *)MmUserProbeAddress;
          *v39 = v37;
          if ( v12 && (unsigned int)v46 < v37 )
            LODWORD(v22) = -1073741789;
          ObfDereferenceObject(v31);
        }
        else
        {
          v27 = WdLogNewEntry5_WdWarning(v20, v19, v21);
          *(_QWORD *)(v27 + 24) = v17;
          *(_QWORD *)(v27 + 32) = v22;
          WdLogEvent5_WdWarning(v27);
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v28);
        if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v40);
        return (unsigned int)v22;
      }
    }
  }
  else if ( !(_DWORD)v46 )
  {
    goto LABEL_23;
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v7);
  v10[3] = v12;
  v11 = (unsigned int)v46;
LABEL_19:
  v10[4] = v11;
  v10[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v13);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v40);
  return 3221225485LL;
}
