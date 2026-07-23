/*
 * XREFs of HalpConnectThermalInterrupt @ 0x1404D17F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptSetIdtEntry @ 0x1403A27FC (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptGetPriority @ 0x1403A41CC (HalpInterruptGetPriority.c)
 *     HalpInterruptGetIdentifiers @ 0x1403CA1C0 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalpInterruptSetProblemEx @ 0x1404D1CC8 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  unsigned int Number; // ecx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r9
  KPCR *Pcr; // rdi
  ULONG_PTR v7; // r10
  int v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+34h] [rbp-3Ch]
  int v10; // [rsp+38h] [rbp-38h]
  int v11; // [rsp+3Ch] [rbp-34h]
  int v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]
  int Priority; // [rsp+64h] [rbp-Ch]
  int v21; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+A4h] [rbp+34h]

  v9 = 0;
  v15 = 0;
  v17 = 0LL;
  v18 = 0;
  Number = KeGetPcr()->Prcb.Number;
  v21 = 0;
  result = HalpInterruptGetIdentifiers(Number, &v21, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = HalpInterruptController;
    v22 = *(_DWORD *)(HalpInterruptController + 232);
    v23 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 216) == 2 && HalpInterruptFindLines(&v22) )
    {
      Pcr = KeGetPcr();
      if ( !BYTE1(Pcr->HalReserved[5]) )
      {
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != BugCheckParameter4 )
          {
            HalpInterruptSetProblemEx(
              0,
              36,
              0,
              (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
              3391);
            KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, BugCheckParameter4);
          }
        }
        else
        {
          HalpInterruptThermalServiceRoutine = BugCheckParameter4;
        }
        HalpInterruptSetIdtEntry(0xCDu, (int)HalpInterruptThermalService, 12, v5, -1LL);
        BYTE1(Pcr->HalReserved[5]) = 1;
        goto LABEL_8;
      }
      if ( HalpInterruptThermalServiceRoutine == BugCheckParameter4 )
      {
LABEL_8:
        v9 = 0;
        v15 = 0;
        v17 = 0LL;
        v18 = 0;
        v12 = -1;
        v16 = v21;
        v8 = 1;
        v10 = 1;
        v11 = 16;
        v13 = 1;
        v14 = 4;
        v19 = 205;
        Priority = HalpInterruptGetPriority(v4, 0xCDu);
        return HalpInterruptSetLineStateInternal(v4, (__int64)&v22, (__int64)&v8);
      }
      HalpInterruptSetProblemEx(0, 36, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3421);
      return 3221226021LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
