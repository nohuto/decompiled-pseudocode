/*
 * XREFs of VslConnectSwInterrupt @ 0x140A580D8
 * Callers:
 *     PsNotifyCoreDriversInitialized @ 0x140A57FF4 (PsNotifyCoreDriversInitialized.c)
 *     KiConnectSwInterrupt @ 0x140A8F7A4 (KiConnectSwInterrupt.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14032BC48 (HvlQueryVsmConnection.c)
 *     VslpUnlockPagesForTransfer @ 0x140390BD4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140390C28 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HvlIsCoreSharingPossible @ 0x1404EC0B0 (HvlIsCoreSharingPossible.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     KiAreCodePatchesAllowed @ 0x140A6FF74 (KiAreCodePatchesAllowed.c)
 */

__int64 __fastcall VslConnectSwInterrupt(struct _MDL *BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID Pool2; // rax
  __int64 Prcb; // rax
  int v12; // edx
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v15[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v16; // [rsp+48h] [rbp-B8h]
  int v17; // [rsp+4Ah] [rbp-B6h]
  __int16 v18; // [rsp+4Eh] [rbp-B2h]
  __int64 *v19[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[14]; // [rsp+A0h] [rbp-60h] BYREF

  v17 = 0;
  v18 = 0;
  v14 = 0;
  memset(v19, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v5 = VslpLockPagesForTransfer((__int64)v19, BugCheckParameter2, BugCheckParameter3, 0, 0);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v5);
  }
  memset(v20, 0, 0x68uLL);
  v20[1] = v19[0];
  v20[2] = v19[7];
  v20[4] = &VslpTraceLog;
  if ( (unsigned int)KiAreCodePatchesAllowed(v7, v6, v8, v9) )
  {
    Pool2 = *(PVOID *)&VslpHotpatchLog;
    if ( !*(_QWORD *)&VslpHotpatchLog )
    {
      Pool2 = ExAllocatePool2(64LL, 0x50008uLL, 0x676F4C48u);
      *(_QWORD *)&VslpHotpatchLog = Pool2;
    }
    v20[5] = Pool2;
  }
  v15[1] = (unsigned __int16 *)qword_140CFC838[0];
  v15[0] = (unsigned __int16 *)KeActiveProcessors;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v14, v15) )
  {
    Prcb = KeGetPrcb(v14);
    if ( ((*(_QWORD *)(Prcb + 33880) - 1LL) & *(_QWORD *)(Prcb + 33880)) != 0 )
    {
      LODWORD(v20[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v20[3]) = v12 | 1;
  BugCheckParameter4 = VslpEnterIumSecureMode(2u, 51, 0, (__int64)v20);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer(v19);
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
