/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C0052BB0
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012520 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // rcx

  v4 = *((_DWORD *)this + 5);
  if ( v4 == 1 )
    return 128LL;
  v7 = *((_QWORD *)this + 6);
  v8 = 2 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v4 >> 1;
  v9 = operator new[](v8, 0x4B677844u, v7, a4);
  v10 = v9;
  if ( v9 )
  {
    memmove(
      (void *)(v9 + *((unsigned int *)this + 8)),
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 7)),
      (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8)));
    v14 = *((_DWORD *)this + 9);
    if ( v14 < *((_DWORD *)this + 8) )
    {
      memmove((void *)(v10 + *((unsigned int *)this + 4)), *((const void **)this + 7), v14);
      *((_DWORD *)this + 9) += *((_DWORD *)this + 4);
    }
    v15 = *((_QWORD *)this + 1);
    if ( v15 )
    {
      v16 = *((_QWORD *)this + 7);
      if ( v15 < v16 + (unsigned __int64)*((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = v10 + v15 + *((unsigned int *)this + 4) - v16;
      else
        *((_QWORD *)this + 1) = v10 + v15 - v16;
    }
    v17 = (void *)*((_QWORD *)this + 7);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    *((_QWORD *)this + 7) = v10;
    result = 0LL;
    *((_DWORD *)this + 4) = v8;
  }
  else
  {
    WdLogSingleEntry1(6LL, v8);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0LL,
          1,
          -1,
          L"Unable to allocate diagnosability buffer for new size 0x%I64x",
          v8,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 3221225626LL;
  }
  return result;
}
