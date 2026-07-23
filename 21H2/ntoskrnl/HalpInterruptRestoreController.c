/*
 * XREFs of HalpInterruptRestoreController @ 0x14038B700
 * Callers:
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 *     HalpInterruptPowerChange @ 0x1404D1BB4 (HalpInterruptPowerChange.c)
 *     HalpInterruptRestoreAllControllerState @ 0x140998CA0 (HalpInterruptRestoreAllControllerState.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 */

__int64 __fastcall HalpInterruptRestoreController(__int64 a1, char a2)
{
  int v3; // eax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  int v7; // r14d
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD *v10; // rbx
  __int64 result; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = *(_DWORD *)(a1 + 224);
  if ( (v3 & 2) != 0 )
    return 3221225473LL;
  if ( (v3 & 1) == 0 )
    return 3221225860LL;
  v5 = (_QWORD *)(a1 + 240);
  v6 = *(_QWORD **)(a1 + 240);
  while ( 1 )
  {
LABEL_7:
    if ( v6 == v5 )
      return 0LL;
    v10 = v6;
    v6 = (_QWORD *)*v6;
    if ( v10[5] && (!a2 || ((*((_DWORD *)v10 + 8) - 3) & 0xFFFFFFFD) == 0) )
    {
      v7 = 0;
      if ( *((_DWORD *)v10 + 6) - *((_DWORD *)v10 + 5) > 0 )
        break;
    }
  }
  v9 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(v8 + v10[5] + 12) & 0x10) != 0 || *(_BYTE *)(v9 + v10[6]) )
    {
      LODWORD(v12) = *(_DWORD *)(a1 + 232);
      HIDWORD(v12) = v7 + *((_DWORD *)v10 + 5);
      result = HalpInterruptSetLineStateInternal(a1, (__int64)&v12, v10[5] + 56LL * v7);
      if ( (int)result < 0 )
        return result;
    }
    ++v7;
    v8 += 56LL;
    v9 += 16LL;
    if ( v7 >= *((_DWORD *)v10 + 6) - *((_DWORD *)v10 + 5) )
      goto LABEL_7;
  }
}
