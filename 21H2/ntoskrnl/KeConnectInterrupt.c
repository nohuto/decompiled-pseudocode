/*
 * XREFs of KeConnectInterrupt @ 0x14037731C
 * Callers:
 *     IopConnectInterrupt @ 0x14076238C (IopConnectInterrupt.c)
 * Callees:
 *     KeDisconnectInterrupt @ 0x140376884 (KeDisconnectInterrupt.c)
 *     KiConnectInterrupt @ 0x14037748C (KiConnectInterrupt.c)
 *     HalEnableInterrupt @ 0x140377680 (HalEnableInterrupt.c)
 *     KiIntSteerConnect @ 0x140377774 (KiIntSteerConnect.c)
 *     KiIsInterruptTypeSecondary @ 0x140377CE4 (KiIsInterruptTypeSecondary.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KiConnectSecondaryInterrupt @ 0x140519294 (KiConnectSecondaryInterrupt.c)
 *     KiUnmaskSecondaryInterruptInternal @ 0x140519A54 (KiUnmaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeConnectInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  char v6; // bp
  unsigned __int8 v7; // di
  char IsInterruptTypeSecondary; // r12
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rdx
  int v21; // eax
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v22 = 0;
  v4 = a2;
  v5 = a3;
  v6 = 0;
  v7 = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  if ( (_BYTE)v4 )
  {
    do
    {
      *(_DWORD *)(a1[v7] + 104) |= 1u;
      v9 = IsInterruptTypeSecondary ? KiConnectSecondaryInterrupt() : KiConnectInterrupt();
      v11 = v9;
      if ( v9 < 0 )
        goto LABEL_35;
      if ( v9 == 295 )
        v6 = 1;
    }
    while ( ++v7 < (unsigned __int8)v4 );
  }
  v11 = KiIntSteerConnect(a1, (unsigned int)v4, v5 + 8);
  if ( v11 < 0 )
    goto LABEL_34;
  v7 = 0;
  if ( (_BYTE)v4 )
  {
    v12 = a1;
    v7 = v4;
    v13 = v4;
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(*v12++ + 104), 0xFFFFFFFE);
      --v13;
    }
    while ( v13 );
  }
  if ( v6 )
  {
    if ( ((int (__fastcall *)(__int64, unsigned int *))off_140C008E0[0])(v5 + 8, &v22) < 0 )
      return 295;
    v21 = IsInterruptTypeSecondary
        ? KiUnmaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), v22)
        : ((__int64 (__fastcall *)(_QWORD, _QWORD))off_140C00778[0])(v22, 0LL);
    v11 = v21;
    if ( v21 >= 0 )
      return 295;
LABEL_34:
    v5 = v23;
LABEL_35:
    if ( v7 )
    {
      LOBYTE(v10) = v7;
      KeDisconnectInterrupt(a1, v10, v5);
    }
    return (unsigned int)v11;
  }
  v5 = v23;
  v11 = HalEnableInterrupt(v23);
  if ( v11 < 0 )
    goto LABEL_35;
  v14 = *(_QWORD *)(*a1 + 168);
  if ( v14 && *(_BYTE *)(v14 + 56) )
  {
    v15 = *(_QWORD *)(v14 + 16);
    v16 = *(_DWORD *)(v15 + 128);
    if ( v16 == 2 )
    {
      if ( !(_BYTE)v4 || (v17 = *(_QWORD *)(*a1 + 272)) == 0 )
        __fastfail(5u);
      *(_BYTE *)(v17 + 16) = 1;
    }
    else if ( v16 != 1 )
    {
      return (unsigned int)v11;
    }
    *(_BYTE *)(v15 + 132) = 1;
    _InterlockedExchange(&KiIntTrackRootEnabled, 1);
    if ( (_BYTE)v4 )
    {
      v18 = a1;
      v19 = v4;
      do
      {
        _InterlockedOr((volatile signed __int32 *)(*v18++ + 104), 4u);
        --v19;
      }
      while ( v19 );
    }
  }
  return (unsigned int)v11;
}
