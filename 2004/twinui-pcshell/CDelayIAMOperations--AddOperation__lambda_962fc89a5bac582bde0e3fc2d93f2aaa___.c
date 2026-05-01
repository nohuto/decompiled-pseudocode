/*
 * XREFs of CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___ @ 0x180142B18
 * Callers:
 *     ?SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180151550 (-SetForegroundWindowSafe@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x18004947C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18004DA44 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDelayIAMOperations::AddOperation__lambda_962fc89a5bac582bde0e3fc2d93f2aaa___(int *a1, HWND a2)
{
  unsigned int v4; // edi
  void (__fastcall ***v5)(_QWORD, __int64); // rax
  void *v6; // r8
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  int v8; // ebp
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  LPARAM v11; // r9
  HWND v12; // rcx

  v4 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a1 + 2), a2) )
  {
    v5 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v5;
    v8 = 1;
    if ( v5 )
    {
      *((_DWORD *)v5 + 2) = *a1;
      *v5 = (void (__fastcall **)(_QWORD, __int64))off_180491880;
      *((_DWORD *)v5 + 3) = 1;
      v5[2] = *(void (__fastcall ***)(_QWORD, __int64))a2;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v9 = *((_QWORD *)a1 + 4);
      if ( v9 == *((_QWORD *)a1 + 6)
        && CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
             (__int64)(a1 + 6),
             v9 + 1,
             v6) < 0 )
      {
        (**v7)(v7, 1LL);
      }
      else
      {
        v10 = (_QWORD *)(*((_QWORD *)a1 + 3) + 8 * (*((_QWORD *)a1 + 4))++);
        if ( v10 )
          *v10 = v7;
        v11 = (unsigned int)*a1;
        v12 = (HWND)*((_QWORD *)a1 + 2);
        ++a1[14];
        v4 = v11;
        PostMessageW(v12, 0x402u, 0LL, v11);
        if ( *a1 != -1 )
          v8 = *a1 + 1;
        *a1 = v8;
      }
    }
  }
  return v4;
}
