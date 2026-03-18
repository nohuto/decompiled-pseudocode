/*
 * XREFs of _NtUserGetKeyboardLayoutName@4 @ 0xAE4A6
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetKeyboardLayoutName(ULONG a1)
{
  int v1; // esi
  PKTHREAD CurrentThread; // eax
  int v3; // edi
  struct _UNICODE_STRING *v4; // ecx
  struct _UNICODE_STRING String; // [esp+10h] [ebp-2Ch] BYREF
  int v7; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v1 = 0;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0;
  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  v3 = *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 240);
  if ( v3 )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (struct _UNICODE_STRING *)a1;
    if ( a1 >= _MmUserProbeAddress )
      v4 = (struct _UNICODE_STRING *)_MmUserProbeAddress;
    String = *v4;
    ProbeForWrite(String.Buffer, String.MaximumLength, 1u);
    if ( (*(_WORD *)(v3 + 22) & 0xF000) == 0xE000 )
    {
      RtlIntegerToUnicodeString(*(_DWORD *)(v3 + 20), 0x10u, &String);
    }
    else
    {
      if ( String.MaximumLength < 0x12u
        || RtlIntegerToUnicode(*(_DWORD *)(v3 + 64), 0x10u, 0xFFFFFFF8, String.Buffer) < 0 )
      {
        v7 = 0;
        UserSetLastError((struct _NT_TIB *)0x57);
        goto LABEL_9;
      }
      String.Length = 16;
      String.Buffer[8] = 0;
    }
    v1 = 1;
    v7 = 1;
LABEL_9:
    ms_exc.registration.TryLevel = -2;
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
