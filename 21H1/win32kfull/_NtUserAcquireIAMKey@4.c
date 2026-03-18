/*
 * XREFs of _NtUserAcquireIAMKey@4 @ 0xE87FA
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserAcquireIAMKey(_DWORD *Address)
{
  int v1; // edi
  _DWORD *v2; // ebx
  int v3; // edx
  int v4; // ecx

  v1 = 0;
  EnterCrit(0, 1);
  v2 = *(_DWORD **)(_gptiCurrent + 248);
  v3 = v2[1];
  v4 = *(_DWORD *)(v3 + 88);
  if ( !v4 || !*(_DWORD *)(v3 + 84) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 20, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    goto LABEL_16;
  }
  if ( *(_DWORD *)(_gptiCurrent + 232) != v4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 21, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    goto LABEL_16;
  }
  if ( v2[44] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 22, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
    goto LABEL_16;
  }
  if ( !v2[40] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 23, &WPP_8d5a59efe0a33d1aba6a7f19e91869d8_Traceguids);
LABEL_16:
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_7;
  }
  ProbeForWrite(Address, 8u, 4u);
  *Address = v2[42];
  Address[1] = v2[43];
  v2[40] = 0;
  v2[44] = _gptiCurrent;
  v1 = 1;
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v1;
}
