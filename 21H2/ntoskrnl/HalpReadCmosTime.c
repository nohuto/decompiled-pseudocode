/*
 * XREFs of HalpReadCmosTime @ 0x140234148
 * Callers:
 *     HalQueryRealTimeClock @ 0x140233750 (HalQueryRealTimeClock.c)
 * Callees:
 *     HalpAcquireCmosSpinLockAndWait @ 0x1402342DC (HalpAcquireCmosSpinLockAndWait.c)
 */

__int64 __fastcall HalpReadCmosTime(_WORD *a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // al
  __int16 v11; // dx
  __int16 v12; // cx
  __int64 result; // rax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // al

  HalpAcquireCmosSpinLockAndWait();
  a1[6] = 500;
  __outbyte(0x70u, 0);
  v2 = __inbyte(0x71u);
  a1[5] = (unsigned __int8)((v2 & 0xF) + 10 * (v2 >> 4));
  __outbyte(0x70u, 2u);
  v3 = __inbyte(0x71u);
  a1[4] = (unsigned __int8)((v3 & 0xF) + 10 * (v3 >> 4));
  __outbyte(0x70u, 4u);
  v4 = __inbyte(0x71u);
  a1[3] = (unsigned __int8)((v4 & 0xF) + 10 * (v4 >> 4));
  __outbyte(0x70u, 6u);
  v5 = __inbyte(0x71u);
  a1[7] = (unsigned __int8)((v5 & 0xF) + 10 * (v5 >> 4));
  __outbyte(0x70u, 7u);
  v6 = __inbyte(0x71u);
  a1[2] = (unsigned __int8)((v6 & 0xF) + 10 * (v6 >> 4));
  __outbyte(0x70u, 8u);
  v7 = __inbyte(0x71u);
  a1[1] = (unsigned __int8)((v7 & 0xF) + 10 * (v7 >> 4));
  if ( (HalpCmosCenturyOffset & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v14 = __inbyte(0x71u);
    v15 = v14;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v14 | 0x10);
    __outbyte(0x70u, HalpCmosCenturyOffset);
    v16 = __inbyte(0x71u);
    v9 = v16;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v15);
  }
  else
  {
    __outbyte(0x70u, HalpCmosCenturyOffset);
    v8 = __inbyte(0x71u);
    v9 = v8;
  }
  __outbyte(0x70u, 9u);
  v10 = __inbyte(0x71u);
  v11 = (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4)) + 100 * (unsigned __int8)((v9 & 0xF) + 10 * (v9 >> 4));
  v12 = v11 + 100;
  if ( (unsigned __int16)(v11 - 1900) > 0x13u )
    v12 = (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4)) + 100 * (unsigned __int8)((v9 & 0xF) + 10 * (v9 >> 4));
  *a1 = v12;
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
