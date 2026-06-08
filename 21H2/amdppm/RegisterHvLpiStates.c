/*
 * XREFs of RegisterHvLpiStates @ 0x1C002476C
 * Callers:
 *     RegisterHvIdleStates @ 0x1C0024390 (RegisterHvIdleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     DecodeAcpiIdleState @ 0x1C00040D4 (DecodeAcpiIdleState.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EF40 (memset.c)
 *     RegisterHvPepContext @ 0x1C0024ABC (RegisterHvPepContext.c)
 *     RegisterIdleComplete @ 0x1C00301C0 (RegisterIdleComplete.c)
 */

__int64 __fastcall RegisterHvLpiStates(__int64 a1)
{
  __int64 v1; // rbx
  _DWORD *v2; // rdi
  _DWORD *PoolWithTag; // rax
  int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 528);
  v2 = 0LL;
  v14 = 0LL;
  if ( !v1 || !*(_DWORD *)(v1 + 16) )
    goto LABEL_27;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x188uLL, 0x72637250u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x188uLL);
  v6 = 0LL;
  DWORD1(v14) = *(_DWORD *)(a1 + 48);
  LODWORD(v14) = 62;
  for ( *((_QWORD *)&v14 + 1) = v2; (unsigned int)v6 < *(_DWORD *)(v1 + 16); v6 = (unsigned int)(v6 + 1) )
  {
    v7 = (unsigned int)*v2;
    if ( (unsigned int)v7 >= 0x10 )
      break;
    v8 = (__int64 *)&v2[4 * v7 + 2 + 2 * v7];
    v9 = 80 * v6;
    if ( (*(_DWORD *)(80 * v6 + v1 + 32) & 1) != 0 )
    {
      v10 = v6 + 1;
      if ( (unsigned int)v6 >= 3 )
        v10 = 3;
      *((_DWORD *)v8 + 2) = v10;
      *(__int64 *)((char *)v8 + 12) = *(unsigned int *)(v9 + v1 + 28);
      if ( (int)DecodeAcpiIdleState(
                  a1,
                  (char *)(v9 + v1 + 48),
                  0xFFFFFFFF,
                  *(unsigned int *)(v9 + v1 + 36),
                  v8,
                  0LL,
                  0LL,
                  0LL) < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x80000u);
      else
        ++*v2;
    }
  }
  if ( *v2 )
  {
    if ( qword_1C0014680 )
      v11 = qword_1C0014680(&v14);
    else
      v11 = -1073741822;
    v5 = 0;
    if ( v11 != -1073741637 )
      v5 = v11;
    if ( v5 >= 0 )
    {
      v5 = RegisterHvPepContext(a1);
      if ( v5 >= 0 )
      {
        if ( !*(_BYTE *)(a1 + 704) )
        {
          *(_BYTE *)(a1 + 704) = 1;
          RegisterIdleComplete(a1);
        }
        v5 = 0;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v13) = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
        v13);
    }
  }
  else
  {
LABEL_27:
    v5 = -1073741823;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72637250u);
  return (unsigned int)v5;
}
