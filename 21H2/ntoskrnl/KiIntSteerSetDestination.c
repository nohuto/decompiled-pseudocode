/*
 * XREFs of KiIntSteerSetDestination @ 0x14024D740
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1402FF4D0 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerConnect @ 0x1403AFA58 (KiIntSteerConnect.c)
 * Callees:
 *     KiIntSteerVerifyDestination @ 0x14024D7B8 (KiIntSteerVerifyDestination.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KiIntSteerSetDestination(ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR BugCheckParameter4; // rdx
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax
  ULONG_PTR v6; // r8

  if ( (int)KiIntSteerVerifyDestination() < 0 )
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x101uLL, BugCheckParameter3, BugCheckParameter4);
  v3 = *(_DWORD *)(BugCheckParameter3 + 128);
  if ( ((v3 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 == 2 )
    {
      v4 = *(_QWORD *)(BugCheckParameter3 + 200);
      *(_WORD *)(v4 + 8) = *(_WORD *)(BugCheckParameter4 + 8);
      result = *(_QWORD *)BugCheckParameter4;
      *(_QWORD *)v4 = *(_QWORD *)BugCheckParameter4;
      return result;
    }
    LODWORD(result) = -1073741637;
LABEL_12:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x102uLL, BugCheckParameter3, (int)result);
  }
  v6 = 0LL;
  if ( *(_DWORD *)(BugCheckParameter3 + 32) != -1 )
    v6 = BugCheckParameter3 + 32;
  result = ((__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, ULONG_PTR))off_140C01EB8[0])(
             BugCheckParameter3 + 40,
             BugCheckParameter4,
             v6);
  if ( (int)result < 0 )
    goto LABEL_12;
  return result;
}
