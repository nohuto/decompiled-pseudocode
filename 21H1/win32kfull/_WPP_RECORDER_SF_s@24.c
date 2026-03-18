/*
 * XREFs of _WPP_RECORDER_SF_S@24 @ 0xB075A
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_S(int a1, int a2, int a3, const unsigned __int16 *a4)
{
  struct RECORDER_LOG__ *v4; // ebx
  const wchar_t *v5; // esi
  unsigned int v6; // edi
  unsigned int v8; // ecx
  const wchar_t *v9; // eax
  int v10; // [esp+0h] [ebp-10h]
  int v11; // [esp+4h] [ebp-Ch]
  int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v4 = gFullLog;
  v5 = a4;
  v13 = 0;
  v6 = 10;
  if ( (WPP_GLOBAL_Control->Characteristics & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
  {
    if ( a4 )
      v8 = 2 * wcslen(a4) + 2;
    else
      v8 = 10;
    v9 = a4;
    if ( !a4 )
      v9 = L"NULL";
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, const wchar_t *, unsigned int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
      27,
      v9,
      v8,
      0);
  }
  if ( a4 )
    v6 = 2 * wcslen(a4) + 2;
  else
    v5 = L"NULL";
  return _WppAutoLogTrace(v4, 4, 3, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, 27, v5, v6, 0, v10, v11, v12, v13);
}
