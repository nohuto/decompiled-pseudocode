/*
 * XREFs of _WPP_RECORDER_SF_qqS@32 @ 0xAD952
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qqS(int a1, int a2, int a3, char a4, char a5, const unsigned __int16 *a6)
{
  struct RECORDER_LOG__ *v6; // ebx
  const unsigned __int16 *v7; // esi
  unsigned int v8; // edi
  unsigned int v10; // ecx
  const wchar_t *v11; // eax

  v6 = gFullLog;
  v7 = a6;
  v8 = 10;
  if ( SLOBYTE(WPP_GLOBAL_Control->Characteristics) < 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
  {
    if ( a6 )
      v10 = 2 * wcslen(a6) + 2;
    else
      v10 = 10;
    v11 = a6;
    if ( !a6 )
      v11 = L"NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
      17,
      &a4,
      4,
      &a5,
      4,
      v11,
      v10,
      0);
  }
  if ( v7 )
    v8 = 2 * wcslen(v7) + 2;
  else
    v7 = L"NULL";
  return _WppAutoLogTrace(v6, 4, 8, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, 17, &a4, 4, &a5, 4, v7, v8, 0);
}
