/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C002F3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024E00 (McTemplateK0q_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall VidSchiDeferredVisibilityThread(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  _QWORD *v11; // rax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  char v18; // [rsp+40h] [rbp-28h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C0051010 & 2) != 0 )
  {
    v18 = 1;
    v16 = 4024;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 4024);
  }
  else
  {
    v18 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[73])(&v16, 4024LL);
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[14])(a1, 3LL);
  if ( *(_DWORD *)(a1 + 200) == 1 )
  {
    v5 = 0;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 2680) + 624LL);
    _InterlockedExchange((volatile __int32 *)(v6 + 2368), 0);
    if ( *(_DWORD *)(v6 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8LL * v5 + 3104) + 66432LL), 0, 3) == 3 )
        {
          LOBYTE(v4) = 1;
          LOBYTE(v15) = 0;
          v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int))DxgCoreInterface[29])(
                 *(_QWORD *)(a1 + 2672),
                 v5,
                 v4,
                 0x2000LL,
                 v15);
          v10 = v7;
          if ( v7 < 0 )
          {
            v11 = (_QWORD *)WdLogNewEntry5_WdAssertion(v9, v8, v4);
            v11[3] = v5;
            v11[4] = a1;
            v11[5] = v10;
            WdLogEvent5_WdAssertion(v11);
          }
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(v6 + 40) );
    }
  }
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[15])(a1, 3LL);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ((void (__fastcall *)(_QWORD, __int64))DxgCoreInterface[4])(*(_QWORD *)(a1 + 16), a1);
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[74])(&v16);
  if ( v18 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      return McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v16);
  }
  return result;
}
