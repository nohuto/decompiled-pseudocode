/*
 * XREFs of ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18016F5FC
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18016F9DC (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x180048A4C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18012BF14 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18016F058 (-CheckBorderWindowAttributes@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicati.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ChromeWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND *v2; // rbx
  HWND v5; // rcx
  signed int Error; // eax
  unsigned int v7; // ebx
  HWND *v9; // rbp
  HWND *v10; // r14
  HWND v11; // rdi
  void *v12; // r8
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  HWND v16; // rbp
  HWND *v17; // rdx
  int v18[4]; // [rsp+30h] [rbp-478h] BYREF
  RECT v19; // [rsp+40h] [rbp-468h] BYREF
  WCHAR ClassName[264]; // [rsp+50h] [rbp-458h] BYREF
  WCHAR String2[264]; // [rsp+260h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+0h]

  v2 = (HWND *)(a1 + 32);
  if ( !*(_QWORD *)(a1 + 32) )
    return 0LL;
  memset_0(ClassName, 0, 0x208uLL);
  v5 = *v2;
  v18[0] = 0;
  if ( GetClassNameW(v5, ClassName, 260) )
  {
    v9 = v2 + 4;
    v10 = v2;
    do
    {
      v11 = *v10;
      if ( !GetClassNameW(*v10, String2, 260) )
        break;
      if ( CompareStringOrdinal(ClassName, -1, String2, -1, 0) != 2 )
        break;
      v19 = *(RECT *)(a1 + 16);
      if ( (int)ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAttributes(
                  &v19,
                  v11,
                  (__int64)v12,
                  v18) < 0 )
        break;
      ++v10;
    }
    while ( v10 != v9 );
    if ( (v18[0] & 0xF) == 0xF )
    {
      v13 = 0LL;
      v14 = v9 >= v2 ? 4 : 0;
      if ( v2 <= v9 )
      {
        do
        {
          v15 = a2[1];
          v16 = *v2;
          if ( v15 != a2[3]
            || CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                 (__int64)a2,
                 v15 + 1,
                 v12) >= 0 )
          {
            v17 = (HWND *)(*a2 + 8 * a2[1]++);
            if ( v17 )
              *v17 = v16;
          }
          ++v2;
          ++v13;
        }
        while ( v13 != v14 );
      }
    }
    return 0LL;
  }
  Error = ResultFromKnownLastError();
  v7 = Error;
  if ( Error < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
      (const char *)(unsigned int)Error);
  return v7;
}
