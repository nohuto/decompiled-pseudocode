/*
 * XREFs of ??R?$__func@V_lambda_c77ebd57e75c5492ee747e3492d1d178_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x18003DAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000FCC0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_c77ebd57e75c5492ee747e3492d1d178_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int PersistedRegistryLocationW; // eax
  unsigned int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a4;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 16),
                                 **(_QWORD **)(a1 + 8),
                                 *a2,
                                 *a3,
                                 &v9);
  v6 = 0;
  if ( PersistedRegistryLocationW == 234 )
    PersistedRegistryLocationW = 0;
  if ( PersistedRegistryLocationW )
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x1F,
                           (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
                           (const char *)PersistedRegistryLocationW);
  else
    *v4 = (unsigned __int64)v9 >> 1;
  return v6;
}
