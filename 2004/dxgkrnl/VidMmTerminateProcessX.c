/*
 * XREFs of VidMmTerminateProcessX @ 0x1C0114C28
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *__fastcall VidMmTerminateProcessX(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct DXGGLOBAL *result; // rax
  __int64 v6; // rsi

  v2 = a1;
  v3 = 0;
  v4 = 216LL;
  do
  {
    result = *(struct DXGGLOBAL **)((char *)DXGGLOBAL::GetGlobal(a1, a2) + v4);
    if ( result )
    {
      result = DXGGLOBAL::GetGlobal(a1, a2);
      v6 = *(_QWORD *)((char *)result + v4);
      a1 = *(_QWORD *)(v2 + 64);
      if ( a1 )
      {
        result = (struct DXGGLOBAL *)(unsigned int)(*(_DWORD *)v6 - 1);
        a1 = *(_QWORD *)(a1 + 8LL * (_QWORD)result);
      }
      if ( a1 )
      {
        (*(void (**)(void))(*(_QWORD *)(v6 + 8) + 368LL))();
        result = *(struct DXGGLOBAL **)(v2 + 64);
        a1 = (unsigned int)(*(_DWORD *)v6 - 1);
        *((_QWORD *)result + a1) = 0LL;
      }
    }
    ++v3;
    v4 += 8LL;
  }
  while ( v3 < 2 );
  return result;
}
