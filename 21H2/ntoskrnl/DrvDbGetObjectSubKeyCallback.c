/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x140A2F0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406994BC (_PnpCtxRegQueryInfoKey.c)
 *     _SysCtxRegOpenKey @ 0x14077FFEC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x14083EAEC (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v6; // rsi
  unsigned int v9; // r15d
  wchar_t *Pool2; // r14
  wchar_t *v11; // rcx
  int v12; // eax
  NTSTRSAFE_PWSTR v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _OWORD *v17; // rcx
  _OWORD *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm1
  unsigned __int8 (__fastcall *v21)(__int64, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v22; // eax
  unsigned int v23; // edi
  int v25; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  int v30; // [rsp+B8h] [rbp+48h] BYREF

  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v30 = 0;
  v25 = 0;
  DestinationString = 0LL;
  if ( wcsicmp(a3, L"Properties") )
  {
    v9 = 256;
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 512LL, 1111770192LL);
    if ( Pool2 )
    {
      v11 = Pool2;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( RtlStringCchCopyExW(Pool2, 0x100uLL, (NTSTRSAFE_PCWSTR)(a4 + 8), &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
          goto LABEL_26;
        v12 = pcchRemaining;
        if ( pcchRemaining < 2 )
          goto LABEL_26;
        v13 = ppszDestEnd;
        *ppszDestEnd = 92;
        v11 = v13 + 1;
        *v11 = 0;
        v9 = v12 - 2;
      }
      if ( RtlStringCchCopyW(v11, v9, a3) < 0 )
        goto LABEL_26;
      v14 = 0LL;
      if ( a1 )
        v14 = *(_QWORD *)(a1 + 224);
      if ( (int)SysCtxRegOpenKey(v14, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0
        || (int)PnpCtxRegQueryInfoKey(v15, (int)Handle, (int)&v30, 0, (__int64)&v25, 0LL, 0LL) < 0 )
      {
        goto LABEL_26;
      }
      if ( !v30 || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
        goto LABEL_18;
      v16 = ExAllocatePool2(256LL, 552LL, 1111770192LL);
      v6 = v16;
      if ( v16 )
      {
        v17 = (_OWORD *)v16;
        v18 = (_OWORD *)a4;
        v19 = 4LL;
        do
        {
          *v17 = *v18;
          v17[1] = v18[1];
          v17[2] = v18[2];
          v17[3] = v18[3];
          v17[4] = v18[4];
          v17[5] = v18[5];
          v17[6] = v18[6];
          v17 += 8;
          v20 = v18[7];
          v18 += 8;
          *(v17 - 1) = v20;
          --v19;
        }
        while ( v19 );
        *v17 = *v18;
        v17[1] = v18[1];
        *((_QWORD *)v17 + 4) = *((_QWORD *)v18 + 4);
        ++*(_DWORD *)(v6 + 4);
        RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v6 + 8), 0x100uLL, Pool2, 0LL, 0LL, 0x900u);
        PnpCtxRegEnumKeyWithCallback(a1, Handle, (__int64)&DrvDbGetObjectSubKeyCallback, v6);
        *(_QWORD *)(a4 + 536) = *(_QWORD *)(v6 + 536);
        *(_DWORD *)(a4 + 544) = *(_DWORD *)(v6 + 544);
        *(_DWORD *)(a4 + 548) = *(_DWORD *)(v6 + 548);
LABEL_18:
        if ( v25 )
        {
          v21 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, _QWORD, _QWORD))(a4 + 520);
          if ( (!v21 || v21(a1, Pool2, 0LL, *(_QWORD *)(a4 + 528)))
            && RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
          {
            v22 = *(_DWORD *)(a4 + 544);
            v23 = DestinationString.MaximumLength >> 1;
            *(_DWORD *)(a4 + 548) += v23;
            if ( v22 > v23 )
            {
              RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v22, Pool2, 0LL, 0LL, 0x900u);
              *(_QWORD *)(a4 + 536) += 2LL * v23;
              *(_DWORD *)(a4 + 544) -= v23;
            }
          }
        }
        if ( v6 )
          ExFreePoolWithTag((PVOID)v6, 0);
      }
LABEL_26:
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
