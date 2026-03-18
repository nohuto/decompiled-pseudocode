/*
 * XREFs of _WPP_RECORDER_SF_SL@28 @ 0xB2490
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_SL(int a1, int a2, int a3, const unsigned __int16 *a4, char a5)
{
  struct RECORDER_LOG__ *v5; // ebx
  const wchar_t *v6; // esi
  unsigned int v7; // edi
  unsigned int v9; // ecx
  const wchar_t *v10; // eax
  int v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+4h] [ebp-Ch]

  v5 = gFullLog;
  v6 = a4;
  v7 = 10;
  if ( (WPP_GLOBAL_Control->Characteristics & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
  {
    if ( a4 )
      v9 = 2 * wcslen(a4) + 2;
    else
      v9 = 10;
    v10 = a4;
    if ( !a4 )
      v10 = L"NULL";
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, const wchar_t *, unsigned int, char *, int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
      26,
      v10,
      v9,
      &a5,
      4,
      0);
  }
  if ( a4 )
    v7 = 2 * wcslen(a4) + 2;
  else
    v6 = L"NULL";
  return _WppAutoLogTrace(v5, 4, 3, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, 26, v6, v7, &a5, 4, 0, v11, v12);
}
