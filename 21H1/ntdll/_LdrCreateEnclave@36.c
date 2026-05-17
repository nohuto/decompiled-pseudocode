/*
 * XREFs of _LdrCreateEnclave@36 @ 0x4B32DC50
 * Callers:
 *     <none>
 * Callees:
 *     _ZwCreateEnclave@36 @ 0x4B2F3400 (_ZwCreateEnclave@36.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12 @ 0x4B330BDE (_LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry@12.c)
 */

int __stdcall LdrCreateEnclave(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int Enclave; // [esp+10h] [ebp-20h]
  int v11; // [esp+14h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+18h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v11 = *a2;
  ms_exc.registration.TryLevel = -2;
  Enclave = ZwCreateEnclave(a1, (int)&v11, a3, a4, a5, a6, a7, a8, a9);
  if ( Enclave >= 0 )
  {
    *a2 = v11;
    ms_exc.registration.TryLevel = -2;
  }
  if ( a6 == 16 )
    LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry(16, 0);
  return Enclave;
}
