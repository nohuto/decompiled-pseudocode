/*
 * XREFs of MiComparePteProtections @ 0x14027CFC8
 * Callers:
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x140689320 (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rsi
  __int64 v11; // rdx
  int v12; // r8d
  char v13; // r12
  int v14; // ecx
  bool v15; // zf
  int v17; // [rsp+50h] [rbp-10h] BYREF
  int v18; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-8h] BYREF
  __int16 v20; // [rsp+A8h] [rbp+48h] BYREF
  int v21; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v19 = 0LL;
  v17 = 0;
  v21 = 0;
  v18 = 0;
  v20 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = MiLockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6]);
  while ( a2 <= a3 )
  {
    LOBYTE(v12) = v13;
    MiQueryAddressState(a2, a3, v12, a1, 0LL, (__int64)&v21, (__int64)&v18, (__int64)&v20, (__int64)&v19, (__int64)&v17);
    v14 = v21;
    if ( !v21 )
    {
      if ( v17 )
        goto LABEL_13;
      v15 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
      v14 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v21 = v14;
      if ( v15 )
        goto LABEL_13;
    }
    if ( a5 == 1 )
    {
      if ( v14 != a4 )
        goto LABEL_13;
    }
    else if ( v14 == -1
           || (v14 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v15 = (v14 & 4) == 0) : (v15 = (v14 & 7) == 0), v15) )
    {
LABEL_13:
      v5 = -1073741755;
      break;
    }
    a2 = v19;
  }
  LOBYTE(v11) = v13;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessorsPadding[6], v11);
  return v5;
}
