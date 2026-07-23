/*
 * XREFs of KiIntSteerUpdateDeviceInterruptMask @ 0x14023F2BC
 * Callers:
 *     KiIntSteerDistributeInterrupts @ 0x1402CE560 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerDisable @ 0x14037696C (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x140377774 (KiIntSteerConnect.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 */

__int64 __fastcall KiIntSteerUpdateDeviceInterruptMask(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 Prcb; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+32h] [rbp-16h]
  __int16 v10; // [rsp+36h] [rbp-12h]
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+64h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v8 = *(_WORD *)(a1 + 8);
  v7[1] = *(_QWORD *)a1;
  v7[0] = 0LL;
  while ( 1 )
  {
    result = KeEnumerateNextProcessor(&v11, v7);
    if ( (_DWORD)result )
      break;
    Prcb = KeGetPrcb(v11);
    if ( a2 )
    {
      if ( a2 == 1 && (*(_DWORD *)(Prcb + 11672))-- == 1 )
        _interlockedbittestandset64(
          (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 96LL),
          *(unsigned __int8 *)(Prcb + 209));
    }
    else if ( ++*(_DWORD *)(Prcb + 11672) == 1 )
    {
      _interlockedbittestandreset64(
        (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 96LL),
        *(unsigned __int8 *)(Prcb + 209));
    }
  }
  return result;
}
