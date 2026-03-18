/*
 * XREFs of MiComparePteProtections @ 0x1402F5EE0
 * Callers:
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     MiSecureVad @ 0x1406BAAC8 (MiSecureVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14021E510 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rsi
  unsigned __int8 v11; // r12
  int v12; // ecx
  bool v13; // zf
  int v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+54h] [rbp-Ch] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-8h] BYREF
  __int16 v18; // [rsp+A8h] [rbp+48h] BYREF
  int v19; // [rsp+B0h] [rbp+50h] BYREF

  v5 = 0;
  v17 = 0LL;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v18 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6]);
  while ( a2 <= a3 )
  {
    MiQueryAddressState(a2, a3, v11, a1, 0LL, &v19, &v16, &v18, (__int64 *)&v17, &v15);
    v12 = v19;
    if ( !v19 )
    {
      if ( v15 )
        goto LABEL_13;
      v13 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
      v12 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
      v19 = v12;
      if ( v13 )
        goto LABEL_13;
    }
    if ( a5 == 1 )
    {
      if ( v12 != a4 )
        goto LABEL_13;
    }
    else if ( v12 == -1
           || (v12 & 0xFFFFFFF8) == 0x10
           || (a4 != 1 ? (v13 = (v12 & 4) == 0) : (v13 = (v12 & 7) == 0), v13) )
    {
LABEL_13:
      v5 = -1073741755;
      break;
    }
    a2 = v17;
  }
  MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessorsPadding[6], v11);
  return v5;
}
