/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C0236380
 * Callers:
 *     <none>
 * Callees:
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C0230ED0 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned int v3; // r14d
  unsigned __int64 InputBufferSize; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int *pInputBuffer; // rsi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rax
  __int64 OutputBufferSize; // rcx
  char *pOutputBuffer; // rax
  int v22; // eax
  char *v23; // [rsp+40h] [rbp-20h] BYREF
  int v24; // [rsp+48h] [rbp-18h]
  unsigned int v25; // [rsp+4Ch] [rbp-14h]
  unsigned int v26; // [rsp+50h] [rbp-10h]
  int v27; // [rsp+54h] [rbp-Ch]

  v3 = 0;
  InputBufferSize = a2->InputBufferSize;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    v6 = WdLogNewEntry5_WdError(this, InputBufferSize);
    v7 = a2->InputBufferSize;
LABEL_3:
    *(_QWORD *)(v6 + 24) = v7;
LABEL_4:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  pInputBuffer = (unsigned int *)a2->pInputBuffer;
  v10 = pInputBuffer[2];
  if ( !(_DWORD)v10 )
  {
    if ( (unsigned int)InputBufferSize >= 0x14 )
    {
      if ( a2->OutputBufferSize >= pInputBuffer[4] )
      {
        pOutputBuffer = (char *)a2->pOutputBuffer;
        v27 = 0;
        v23 = pOutputBuffer;
        v24 = *((_DWORD *)this + 6);
        v25 = pInputBuffer[3];
        v26 = pInputBuffer[4];
        v22 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, char **))(*(_QWORD *)this + 48LL))(this, &v23);
        v3 = v22;
        if ( bTracingEnabled )
          VgpuTraceFrequentRead(
            1,
            v22,
            this,
            L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
            (wchar_t *)L"(offset, size) %d %d",
            pInputBuffer[3],
            pInputBuffer[4]);
        return v3;
      }
      v17 = WdLogNewEntry5_WdError(v10, InputBufferSize);
      OutputBufferSize = a2->OutputBufferSize;
      *(_QWORD *)(v17 + 32) = 435LL;
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v10, InputBufferSize);
      OutputBufferSize = a2->InputBufferSize;
      *(_QWORD *)(v17 + 32) = 429LL;
    }
LABEL_40:
    *(_QWORD *)(v17 + 24) = OutputBufferSize;
    goto LABEL_41;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( !(_DWORD)v11 )
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      v6 = WdLogNewEntry5_WdError(v11, InputBufferSize);
      v7 = a2->InputBufferSize;
      *(_QWORD *)(v6 + 32) = 454LL;
      goto LABEL_3;
    }
    v18 = pInputBuffer[4];
    if ( (unsigned int)v18 < 0xFFFF )
    {
      v11 = v18 + 20;
      if ( InputBufferSize >= v18 + 20 )
      {
        if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
        {
          v19 = (char *)a2->pInputBuffer;
          v27 = 0;
          v23 = v19 + 20;
          v24 = *((_DWORD *)this + 6);
          v25 = pInputBuffer[3];
          v26 = pInputBuffer[4];
          v3 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, char **))(*(_QWORD *)this + 56LL))(this, &v23);
        }
        if ( bTracingEnabled )
          VgpuTraceFrequentRead(
            1,
            v3,
            this,
            L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
            (wchar_t *)L"(offset, size)  %d %d",
            pInputBuffer[3],
            pInputBuffer[4]);
        return v3;
      }
    }
    v17 = WdLogNewEntry5_WdError(v11, InputBufferSize);
    OutputBufferSize = a2->InputBufferSize;
    *(_QWORD *)(v17 + 32) = 460LL;
    goto LABEL_40;
  }
  v12 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v12 )
  {
    if ( (unsigned int)InputBufferSize < 0x1C )
    {
      v6 = WdLogNewEntry5_WdError(v12, InputBufferSize);
      v7 = a2->InputBufferSize;
      *(_QWORD *)(v6 + 32) = 493LL;
      goto LABEL_3;
    }
    if ( !*((_BYTE *)this + 164) )
    {
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
      *((_BYTE *)this + 164) = 1;
      *(_OWORD *)((char *)this + 328) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
      return v3;
    }
    v17 = WdLogNewEntry5_WdError(v12, InputBufferSize);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = 498LL;
LABEL_41:
    v6 = v17;
    goto LABEL_4;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
      {
        v6 = WdLogNewEntry5_WdError(v14, InputBufferSize);
        v7 = (int)pInputBuffer[2];
        *(_QWORD *)(v6 + 32) = 542LL;
        goto LABEL_3;
      }
      if ( (unsigned int)InputBufferSize < 0x10 )
      {
        v6 = WdLogNewEntry5_WdError(v14, InputBufferSize);
        v7 = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 531LL;
        goto LABEL_3;
      }
      v15 = bTracingEnabled == 0;
      v16 = pInputBuffer[3];
      *((_DWORD *)this + 40) = v16;
      if ( !v15 )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v16);
    }
    else
    {
      if ( a2->OutputBufferSize != 4 )
      {
        v6 = WdLogNewEntry5_WdError(v14, InputBufferSize);
        v7 = a2->InputBufferSize;
        *(_QWORD *)(v6 + 32) = 483LL;
        goto LABEL_3;
      }
      *(_DWORD *)a2->pOutputBuffer = 1;
    }
  }
  else
  {
    if ( bTracingEnabled )
      VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
    *((_BYTE *)this + 164) = 0;
  }
  return v3;
}
