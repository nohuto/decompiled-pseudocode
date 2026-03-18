/*
 * XREFs of _WPP_RECORDER_SF_qS@28 @ 0x824F6
 * Callers:
 *     ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432 (-DestroyDesktop@@YGHPAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qS(int a1, int a2, int a3, char a4, const unsigned __int16 *a5)
{
  struct RECORDER_LOG__ *v5; // ebx
  const unsigned __int16 *v6; // esi
  unsigned int v7; // edi
  unsigned int v9; // ecx
  const wchar_t *v10; // eax
  int v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+4h] [ebp-Ch]

  v5 = gFullLog;
  v6 = a5;
  v7 = 10;
  if ( SLOBYTE(WPP_GLOBAL_Control->Characteristics) < 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
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
      &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids,
      23,
      &a4,
      4,
      v10,
      v9,
      0);
  }
  if ( v6 )
    v7 = 2 * wcslen(v6) + 2;
  else
    v6 = L"NULL";
  return _WppAutoLogTrace(v5, 4, 8, &WPP_a30ede561e3e317e1a4494e99a1f5b97_Traceguids, 23, &a4, 4, v6, v7, 0, v11, v12);
}
