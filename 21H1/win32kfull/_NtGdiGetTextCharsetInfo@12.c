/*
 * XREFs of _NtGdiGetTextCharsetInfo@12 @ 0x83E66
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetTextCharsetInfo@12 @ 0x83EE0 (_GreGetTextCharsetInfo@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtGdiGetTextCharsetInfo(HDC a1, ULONG a2, int a3)
{
  void *v3; // edi
  int TextCharsetInfo; // edx
  _DWORD v6[6]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v3 = (void *)a2;
  memset(v6, 0, sizeof(v6));
  TextCharsetInfo = GreGetTextCharsetInfo(a1, (int)a1);
  if ( TextCharsetInfo != -1 && a2 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 >= _MmUserProbeAddress )
      v3 = (void *)_MmUserProbeAddress;
    qmemcpy(v3, v6, 0x18u);
    ms_exc.registration.TryLevel = -2;
  }
  return TextCharsetInfo;
}
