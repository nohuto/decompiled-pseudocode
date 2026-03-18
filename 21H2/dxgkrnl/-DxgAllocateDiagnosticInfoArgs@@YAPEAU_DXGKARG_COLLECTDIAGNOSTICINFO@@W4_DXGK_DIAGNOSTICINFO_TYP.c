/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02CE778
 * Callers:
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgAllocateDiagnosticInfoArgs(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax

  v5 = operator new[](0xE8uLL, 0x4B677844u, 256LL, a4);
  if ( !v5 )
    goto LABEL_9;
  if ( a1 == 1 || a1 == 2 || (v7 = 0x100000, a1 != 3) )
    v7 = 0x80000;
  v8 = operator new[](v7, 0x4B677844u, 256LL, v6);
  *(_QWORD *)(v5 + 224) = v8;
  if ( !v8 )
  {
    operator delete((void *)v5);
    v5 = 0LL;
LABEL_9:
    WdLogSingleEntry1(6LL, 10822LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating DxgAllocateDiagnosticInfoArgs",
      10822LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v5;
  }
  *(_DWORD *)(v5 + 220) = 0;
  *(_DWORD *)(v5 + 216) = v7;
  *(_DWORD *)(v5 + 8) = a1;
  return v5;
}
