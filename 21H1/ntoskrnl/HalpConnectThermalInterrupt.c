/*
 * XREFs of HalpConnectThermalInterrupt @ 0x1404CC1D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14037597C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindLines @ 0x140375A70 (HalpInterruptFindLines.c)
 *     HalpInterruptSetIdtEntry @ 0x14039F18C (HalpInterruptSetIdtEntry.c)
 *     HalpInterruptGetPriority @ 0x1403A0B5C (HalpInterruptGetPriority.c)
 *     HalpInterruptGetIdentifiers @ 0x1403C5A80 (HalpInterruptGetIdentifiers.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpConnectThermalInterrupt(ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v3; // rdi
  KPCR *Pcr; // rbx
  __int64 v5; // r9
  __int128 v6; // [rsp+30h] [rbp-40h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h]
  __int128 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+60h] [rbp-10h]
  int v10; // [rsp+98h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+A0h] [rbp+30h] BYREF
  int v12; // [rsp+A4h] [rbp+34h]

  v10 = 0;
  v6 = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  result = HalpInterruptGetIdentifiers(KeGetPcr()->Prcb.Number, &v10, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = HalpInterruptController;
    v11 = *(_DWORD *)(HalpInterruptController + 232);
    v12 = -2;
    if ( *(_DWORD *)(HalpInterruptController + 216) == 2 && HalpInterruptFindLines(&v11) )
    {
      Pcr = KeGetPcr();
      if ( BYTE1(Pcr->HalReserved[5]) )
      {
        return 3221225865LL;
      }
      else
      {
        v5 = HalpInterruptThermalServiceRoutine;
        if ( HalpInterruptThermalServiceRoutine )
        {
          if ( HalpInterruptThermalServiceRoutine != BugCheckParameter4 )
          {
            HalpInterruptLastProblem = 36;
            KeBugCheckEx(0x5Cu, 0x200uLL, 0x24uLL, HalpInterruptThermalServiceRoutine, BugCheckParameter4);
          }
        }
        else
        {
          HalpInterruptThermalServiceRoutine = BugCheckParameter4;
        }
        HalpInterruptSetIdtEntry(0xCDu, (int)HalpInterruptThermalService, 12, v5, -1LL);
        *(_QWORD *)((char *)&v8 + 4) = 0LL;
        HIDWORD(v8) = 0;
        *(_QWORD *)&v7 = 0x1FFFFFFFFLL;
        LODWORD(v8) = v10;
        *(_QWORD *)&v6 = 1LL;
        *((_QWORD *)&v6 + 1) = 0x1000000001LL;
        *((_QWORD *)&v7 + 1) = 4LL;
        LODWORD(v9) = 205;
        HIDWORD(v9) = HalpInterruptGetPriority(v3, 0xCDu);
        result = HalpInterruptSetLineStateInternal(v3, (__int64)&v11, (__int64)&v6);
        if ( (int)result >= 0 )
          BYTE1(Pcr->HalReserved[5]) = 1;
      }
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
