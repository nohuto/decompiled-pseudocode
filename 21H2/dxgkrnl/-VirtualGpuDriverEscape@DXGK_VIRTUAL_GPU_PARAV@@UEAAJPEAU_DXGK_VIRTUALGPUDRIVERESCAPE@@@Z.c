/*
 * XREFs of ?VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGK_VIRTUALGPUDRIVERESCAPE@@@Z @ 0x1C035F150
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005BFAC (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ @ 0x1C0358FC8 (-VgpuTraceFrequentRead@@YAXEJPEAXPEBG1ZZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::VirtualGpuDriverEscape(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGK_VIRTUALGPUDRIVERESCAPE *a2)
{
  unsigned __int64 InputBufferSize; // rdx
  unsigned int v5; // r14d
  const wchar_t *v6; // r9
  __int64 v7; // rax
  _DWORD *pInputBuffer; // rsi
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rbx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  ULONG OutputBufferSize; // eax
  int v21; // eax
  __int64 v22; // [rsp+28h] [rbp-48h]
  PVOID pOutputBuffer; // [rsp+50h] [rbp-20h] BYREF
  int v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+5Ch] [rbp-14h]
  int v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+64h] [rbp-Ch]

  InputBufferSize = a2->InputBufferSize;
  v5 = 0;
  if ( (unsigned int)InputBufferSize < 0xC )
  {
    WdLogSingleEntry1(2LL, InputBufferSize);
    v6 = L"Invalid input buffer size: 0x%I64x";
    v22 = 0LL;
LABEL_3:
    v7 = a2->InputBufferSize;
LABEL_4:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v7, v22, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  pInputBuffer = a2->pInputBuffer;
  v10 = pInputBuffer[2];
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( !v11 )
    {
      if ( (unsigned int)InputBufferSize >= 0x14 )
      {
        v19 = (unsigned int)pInputBuffer[4];
        if ( (unsigned int)v19 < 0xFFFF && InputBufferSize >= v19 + 20 )
        {
          v27 = 0;
          pOutputBuffer = pInputBuffer + 5;
          v24 = *((_DWORD *)this + 6);
          v25 = pInputBuffer[3];
          v26 = pInputBuffer[4];
          v5 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 56LL))(
                 this,
                 &pOutputBuffer);
          if ( bTracingEnabled )
            VgpuTraceFrequentRead(
              1,
              v5,
              this,
              L"DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG",
              (wchar_t *)L"(offset, size)  %d %d",
              pInputBuffer[3],
              pInputBuffer[4]);
          return v5;
        }
        v18 = 459LL;
      }
      else
      {
        v18 = 453LL;
      }
      WdLogSingleEntry2(2LL, InputBufferSize, v18);
      v6 = L"Invalid input buffer size to write PCI config: 0x%I64x";
      v22 = v18;
      goto LABEL_3;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            WdLogSingleEntry2(2LL, (int)pInputBuffer[2], 537LL);
            v7 = (int)pInputBuffer[2];
            v6 = L"Invalid escape type: 0x%I64x";
            v22 = 537LL;
            goto LABEL_4;
          }
          if ( (unsigned int)InputBufferSize < 0x10 )
          {
            v15 = 526LL;
LABEL_20:
            WdLogSingleEntry2(2LL, InputBufferSize, v15);
            v6 = L"Invalid input/output buffer size: 0x%I64x";
            v22 = v15;
            goto LABEL_3;
          }
          v16 = bTracingEnabled == 0;
          v17 = pInputBuffer[3];
          *((_DWORD *)this + 42) = v17;
          if ( !v16 )
            VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE", (wchar_t *)L"%d", v17);
        }
        else
        {
          if ( a2->OutputBufferSize != 4 )
          {
            v15 = 478LL;
            goto LABEL_20;
          }
          *(_DWORD *)a2->pOutputBuffer = 1;
        }
      }
      else
      {
        if ( bTracingEnabled )
          VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_RELEASE", 0LL);
        *((_BYTE *)this + 172) = 0;
      }
    }
    else
    {
      if ( (unsigned int)InputBufferSize < 0x1C )
      {
        v15 = 488LL;
        goto LABEL_20;
      }
      if ( *((_BYTE *)this + 172) )
      {
        WdLogSingleEntry2(2LL, this, 493LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE called twice for vGPU 0x%I64x",
          (__int64)this,
          493LL,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      if ( bTracingEnabled )
        VgpuTrace(1, 0, this, L"DXGKVGPU_ESCAPE_TYPE_INITIALIZE", 0LL);
      *((_BYTE *)this + 172) = 1;
      *((_OWORD *)this + 22) = *(_OWORD *)((char *)a2->pInputBuffer + 12);
    }
  }
  else
  {
    if ( (unsigned int)InputBufferSize < 0x14 )
    {
      WdLogSingleEntry2(2LL, InputBufferSize, 428LL);
      v6 = L"Invalid input buffer size to read PCI config: 0x%I64x";
      v22 = 428LL;
      goto LABEL_3;
    }
    OutputBufferSize = a2->OutputBufferSize;
    if ( OutputBufferSize < pInputBuffer[4] )
    {
      WdLogSingleEntry2(2LL, OutputBufferSize, 434LL);
      v7 = a2->OutputBufferSize;
      v6 = L"Invalid output buffer size to read PCI config: 0x%I64x";
      v22 = 434LL;
      goto LABEL_4;
    }
    pOutputBuffer = a2->pOutputBuffer;
    v24 = *((_DWORD *)this + 6);
    v27 = 0;
    v25 = pInputBuffer[3];
    v26 = pInputBuffer[4];
    v21 = (*(__int64 (__fastcall **)(DXGK_VIRTUAL_GPU_PARAV *, PVOID *))(*(_QWORD *)this + 48LL))(this, &pOutputBuffer);
    v5 = v21;
    if ( bTracingEnabled )
      VgpuTraceFrequentRead(
        1,
        v21,
        this,
        L"DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG",
        (wchar_t *)L"(offset, size) %d %d",
        pInputBuffer[3],
        pInputBuffer[4]);
  }
  return v5;
}
