/*
 * XREFs of ?ApplyResourceManagerPolicyToRenderAdapters@@YAXW4_GLOBAL_RM_POLICY_TYPE@@PEAX@Z @ 0x1C0283FF8
 * Callers:
 *     DxgkSetMemoryBudgetTarget @ 0x1C0286B70 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetYieldPercentage @ 0x1C0287730 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ApplyResourceManagerPolicyToRenderAdapters(__int64 a1, __int64 a2)
{
  int v3; // ebp
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _QWORD **v9; // r14
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // r9
  struct DXGGLOBAL *v13; // rax
  __int64 v14; // rdx
  _BYTE v15[16]; // [rsp+20h] [rbp-38h] BYREF
  char v16[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-20h]
  char v18; // [rsp+40h] [rbp-18h]

  v3 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGGLOBAL *)((char *)Global + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v9 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal(v6, v5) + 664);
  v10 = *v9;
  while ( v10 != v9 && v10 )
  {
    v11 = v10;
    v10 = (_QWORD *)*v10;
    if ( v11[338] && (*((_DWORD *)v11 + 87) & 0x4000) == 0 )
    {
      v17 = v11;
      v18 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
      if ( *((_DWORD *)v11 + 50) == 1 )
      {
        v8 = (_QWORD *)v11[338];
        v12 = v8[81];
        if ( v3 )
        {
          if ( v3 == 1 )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[80] + 8LL) + 1160LL))(
              v8[81],
              *(unsigned int *)(a2 + 8),
              *(unsigned int *)(a2 + 12),
              v12);
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(v8[77] + 8LL) + 952LL))(
            v8[78],
            *(unsigned int *)(a2 + 8),
            *(unsigned int *)(a2 + 12),
            v12);
        }
      }
      if ( v18 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v16);
    }
  }
  v13 = DXGGLOBAL::GetGlobal((__int64)v8, v7);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      *((_DWORD *)v13 + 76075) = *(_DWORD *)(a2 + 8);
      *((_DWORD *)v13 + 76076) = *(_DWORD *)(a2 + 12);
    }
  }
  else
  {
    *((_DWORD *)v13 + 76074) = *(_DWORD *)(a2 + 12);
    v14 = (*((_DWORD *)v13 + 76077) ^ *(_DWORD *)(a2 + 8)) & 1;
    *((_DWORD *)v13 + 76077) ^= v14;
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v14);
}
