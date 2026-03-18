/*
 * XREFs of _WPP_RECORDER_SF_DS@28 @ 0x7C908
 * Callers:
 *     _SetAppCompatFlags@4 @ 0x7C302 (_SetAppCompatFlags@4.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_DS(int a1, int a2, int a3, char a4, const unsigned __int16 *a5)
{
  const unsigned __int16 *v5; // esi
  struct RECORDER_LOG__ *v6; // edi
  unsigned int v7; // ecx
  unsigned int v9; // ecx
  const wchar_t *v10; // eax
  int v11; // [esp+0h] [ebp-Ch]
  int v12; // [esp+4h] [ebp-8h]

  v5 = a5;
  v6 = gFullLog;
  if ( (WPP_GLOBAL_Control->Characteristics & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
  {
    if ( a5 )
      v9 = 2 * wcslen(a5) + 2;
    else
      v9 = 10;
    v10 = a5;
    if ( !a5 )
      v10 = L"NULL";
    ((void (__cdecl *)(struct _DEVICE_OBJECT *, struct _IRP *, int, void *, int, char *, int, const wchar_t *, unsigned int, _DWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_811a652833763f23ebf15cc2f37cd811_Traceguids,
      10,
      &a4,
      4,
      v10,
      v9,
      0);
  }
  if ( v5 )
    v7 = 2 * wcslen(v5) + 2;
  else
    v7 = 10;
  if ( !v5 )
    v5 = L"NULL";
  return _WppAutoLogTrace(v6, 4, 5, &WPP_811a652833763f23ebf15cc2f37cd811_Traceguids, 10, &a4, 4, v5, v7, 0, v11, v12);
}
