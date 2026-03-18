/*
 * XREFs of MiComparePteProtections @ 0x14022A470
 * Callers:
 *     MiSecureVad @ 0x1406A2588 (MiSecureVad.c)
 *     MiCheckSecuredVad @ 0x1407A4C90 (MiCheckSecuredVad.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 */

__int64 __fastcall MiComparePteProtections(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, int a5)
{
  unsigned int v5; // ebx
  _KPROCESS *Process; // rsi
  unsigned __int8 v11; // r14
  int v12; // ecx
  bool v13; // zf
  int v15; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+54h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-30h] BYREF
  __int16 v18; // [rsp+98h] [rbp+10h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF

  v5 = 0;
  v17 = 0LL;
  v15 = 0;
  v19 = 0;
  v16 = 0;
  v18 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  if ( a2 <= a3 )
  {
    while ( 1 )
    {
      MiQueryAddressState(
        a2,
        a3,
        v11,
        a1,
        0LL,
        (__int64)&v19,
        (__int64)&v16,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v15);
      v12 = v19;
      if ( !v19 )
      {
        if ( v15 )
          break;
        v13 = ((*(_DWORD *)(a1 + 48) >> 7) & 0x1F) == 0;
        v12 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
        v19 = v12;
        if ( v13 )
          break;
      }
      if ( a5 )
      {
        if ( v12 != a4 )
          break;
      }
      else
      {
        if ( v12 == -1 || (v12 & 0xFFFFFFF8) == 0x10 )
          break;
        v13 = a4 == 1 ? (v12 & 7) == 0 : (v12 & 4) == 0;
        if ( v13 )
          break;
      }
      LODWORD(a2) = v17;
      if ( v17 > a3 )
        goto LABEL_10;
    }
    v5 = -1073741755;
  }
LABEL_10:
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], v11);
  return v5;
}
