/*
 * XREFs of RegisterHiddenIdleStates @ 0x1C0030050
 * Callers:
 *     <none>
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C00040D4 (DecodeAcpiIdleState.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 *     DecodeAcpi2CState @ 0x1C00226C0 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHiddenIdleStates(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // r9
  int v5; // r8d
  __int64 v6; // r8
  _DWORD *i; // r10
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = -1073741823;
  if ( *(_DWORD *)(a1 + 80) != 2 )
    return (unsigned int)-1073741811;
  if ( !HalPrivateDispatchTable[147] )
    return (unsigned int)-1073741637;
  v3 = *(_QWORD *)(a1 + 272);
  if ( (v3 & 0xE0000000000LL) == 0 )
  {
    if ( (v3 & 0x7F077) == 0 )
      return v2;
    v10 = *(_DWORD **)(a1 + 512);
    if ( !v10 || !*v10 )
      return v2;
    v9 = DecodeAcpi2CState(a1, (__int64)&v10[4 * (*v10 - 1) + 1 + *v10 - 1], &v12, 0LL, 0LL);
    goto LABEL_19;
  }
  v4 = *(_QWORD *)(a1 + 528);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    if ( v5 )
    {
      v6 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v6 )
      {
        for ( i = (_DWORD *)(80LL * (unsigned int)v6 + v4 + 32); (*i & 1) == 0; i -= 20 )
        {
          v6 = (unsigned int)(v6 - 1);
          if ( !(_DWORD)v6 )
            return v2;
        }
        v8 = 80 * v6 + v4 + 24;
        if ( v8 )
        {
          v9 = DecodeAcpiIdleState(a1, (char *)(v8 + 24), 0xFFFFFFFF, *(unsigned int *)(v8 + 12), &v12, 0LL, 0LL, 0LL);
LABEL_19:
          v2 = v9;
          if ( v9 >= 0 && v12 )
            return ((unsigned int (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[147])(
                     *(unsigned int *)(a1 + 84),
                     v12);
        }
      }
    }
  }
  return v2;
}
