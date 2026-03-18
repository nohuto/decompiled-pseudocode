/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C0124010
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00AE624 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  __int64 v11; // rdx
  char *Prop; // r15
  unsigned int *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax

  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1LL);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v11, v9);
      goto LABEL_4;
    }
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (unsigned int *)MmUserProbeAddress;
    v15 = *v14;
    if ( (unsigned int)v15 > 0x101 )
      v15 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v15 )
        goto LABEL_3;
      v16 = v15;
      ProbeForWrite(a2, 2 * v15, 2u);
      RtlStringCchCopyW((char *)a2, v16, Prop);
    }
    v8 = MmUserProbeAddress;
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)&Prop[2 * v17] );
    *a3 = v17 + 1;
    v10 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v10;
}
