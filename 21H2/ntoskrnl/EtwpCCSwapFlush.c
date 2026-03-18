/*
 * XREFs of EtwpCCSwapFlush @ 0x1403AC3AC
 * Callers:
 *     EtwpCCSwapTrace @ 0x1403ABFD0 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x1403860B0 (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall EtwpCCSwapFlush(_DWORD *a1, int a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v11[0] = 0;
  v12 = a1 + 4;
  LODWORD(v3) = *a1 - 16;
  v14 = 0;
  v13 = v3;
  LOBYTE(v3) = EtwpHostSiloState;
  v4 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward(&v7, v4) )
  {
    v4 &= v4 - 1;
    v8 = v7;
    v3 = 32LL * v7;
    v9 = v3 + EtwpHostSiloState + 4284;
    if ( v9 )
    {
      LODWORD(v3) = *(_DWORD *)(v9 + 4);
      if ( (v3 & 4) != 0 && (v3 & 0x100) != 0 )
      {
        v5 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4232);
        v3 = EtwpOpenLogger(v5, EtwpHostSiloState, 0, v11);
        if ( v3 )
        {
          if ( *(_DWORD *)(v3 + 200) == a2 )
            EtwpLogKernelEvent((__int64)&v12, EtwpHostSiloState, v5, 1u, 0x525u, 0x202u);
          LOBYTE(v3) = EtwpCloseLogger(v5, EtwpHostSiloState, v11[0]);
        }
      }
    }
  }
  return v3;
}
