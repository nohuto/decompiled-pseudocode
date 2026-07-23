/*
 * XREFs of KiIntSteerSetDestination @ 0x140241BFC
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1402CE560 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x140377774 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x140241C8C (KiIntSteerVerifyDestination.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIntSteerSetDestination(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v5; // r9
  ULONG_PTR v6; // r8
  int v7; // ecx
  __int64 v8; // rcx

  v3 = KiIntSteerVerifyDestination(a1, a2, a3, a1);
  v6 = 0LL;
  if ( v3 < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, v5, BugCheckParameter4);
  v7 = *(_DWORD *)(v5 + 128);
  if ( ((v7 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(v5 + 200);
      *(_WORD *)(v8 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      *(_QWORD *)v8 = *(_QWORD *)BugCheckParameter4;
    }
    else
    {
      LODWORD(v6) = -1073741637;
    }
  }
  else
  {
    if ( *(_DWORD *)(v5 + 32) != -1 )
      v6 = v5 + 32;
    LODWORD(v6) = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, ULONG_PTR))off_140C00868[0])(
                    v5 + 40,
                    BugCheckParameter4,
                    v6);
  }
  return (unsigned int)v6;
}
