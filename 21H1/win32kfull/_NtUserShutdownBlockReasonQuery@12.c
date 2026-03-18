/*
 * XREFs of _NtUserShutdownBlockReasonQuery@12 @ 0xD31E4
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserShutdownBlockReasonQuery(int a1, volatile void *Address, ULONG a3)
{
  int v3; // esi
  int v4; // eax
  unsigned __int16 *Prop; // edi
  _DWORD *v7; // ecx
  unsigned int *v8; // ebx
  unsigned int v9; // ebx
  _DWORD *v10; // edx
  unsigned __int16 *v11; // edx
  unsigned int v13; // [esp+0h] [ebp-44h]
  const unsigned __int16 *v14; // [esp+4h] [ebp-40h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    Prop = (unsigned __int16 *)_GetProp(v4, (unsigned __int16)gatomShutdownBlockingReason, 1);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError((struct _NT_TIB *)0x57);
      goto LABEL_4;
    }
    v7 = (_DWORD *)a3;
    v8 = (unsigned int *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v8 = (unsigned int *)_MmUserProbeAddress;
    v9 = *v8;
    if ( v9 > 0x101 )
      v9 = 257;
    if ( Address )
    {
      if ( !v9 )
        goto LABEL_3;
      ProbeForWrite(Address, 2 * v9, 1u);
      RtlStringCchCopyW(v9, (char *)Address, Prop, v13, v14);
      v7 = (_DWORD *)a3;
    }
    v10 = v7;
    if ( (unsigned int)v7 >= _MmUserProbeAddress )
      v10 = (_DWORD *)_MmUserProbeAddress;
    *v10 = *v10;
    v11 = Prop + 1;
    while ( *Prop++ )
      ;
    *v7 = Prop - v11 + 1;
    v3 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit();
  return v3;
}
