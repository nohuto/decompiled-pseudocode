/*
 * XREFs of ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0153C80
 * Callers:
 *     <none>
 * Callees:
 *     SfnDWORD @ 0x1C004CB10 (SfnDWORD.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C01206E8 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r10

  v6 = a2;
  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  v9 = HMValidateHandleNoRip(a5, 7);
  v10 = v6 & 0x1FFFF;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 40);
    v12 = *(_QWORD *)(v11 + 16);
    if ( v10 >= 0x400 )
      return SfnDWORD((__int64 *)a1, v6, a3, a4, v12, *(_QWORD *)(gpsi + 752LL));
    else
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
               a1,
               v6,
               a3,
               a4,
               v12,
               *(_QWORD *)(gpsi + 752LL),
               (*(_WORD *)(v11 + 24) & 2) != 0,
               0LL);
  }
  else if ( v10 < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, unsigned __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v6]])(
             a1,
             v6,
             a3,
             a4,
             a5,
             *(_QWORD *)(gpsi + 560LL),
             a5 == *(_QWORD *)(gpsi + 480LL),
             0LL);
  }
  else
  {
    return SfnDWORD((__int64 *)a1, v6, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
