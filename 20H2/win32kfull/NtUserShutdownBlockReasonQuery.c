/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C0125300
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  ULONG64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  char *Prop; // r15
  unsigned int *v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _DWORD *v16; // rdx
  __int64 v17; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v9, v10);
      goto LABEL_4;
    }
    v13 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v13 = (unsigned int *)MmUserProbeAddress;
    v14 = *v13;
    if ( (unsigned int)v14 > 0x101 )
      v14 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_3;
      v15 = v14;
      ProbeForWrite(a2, 2 * v14, 2u);
      RtlStringCchCopyW((char *)a2, v15, Prop);
    }
    v7 = MmUserProbeAddress;
    v16 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)&Prop[2 * v17] );
    *a3 = v17 + 1;
    v8 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
