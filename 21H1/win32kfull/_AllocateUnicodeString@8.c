/*
 * XREFs of _AllocateUnicodeString@8 @ 0xAB0D2
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8 (-_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     ?Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z @ 0x1B44C8 (-Initialize@SimpleHapticsController@@QAEJPAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _UShortAdd@12 @ 0xAB166 (_UShortAdd@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __fastcall AllocateUnicodeString(struct _UNICODE_STRING *a1, const void **a2)
{
  USHORT v4; // bx
  WCHAR *v5; // ecx
  unsigned int v6; // eax
  USHORT v8; // [esp+0h] [ebp-34h]
  USHORT *v9; // [esp+4h] [ebp-30h]
  USHORT usAugend[2]; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  *(_DWORD *)usAugend = 0;
  if ( !a2 )
  {
    RtlInitUnicodeString(a1, 0);
    return 1;
  }
  if ( UShortAdd((USHORT)usAugend, v8, v9) >= 0 )
  {
    v4 = usAugend[0];
    v5 = (WCHAR *)Win32AllocPoolWithQuota(usAugend[0], 2020897621);
    a1->Buffer = v5;
    if ( v5 )
    {
      ms_exc.registration.TryLevel = 0;
      memcpy(v5, a2[1], *(unsigned __int16 *)a2);
      ms_exc.registration.TryLevel = -2;
      a1->MaximumLength = v4;
      v6 = *(unsigned __int16 *)a2;
      a1->Length = v6;
      a1->Buffer[v6 >> 1] = 0;
      return 1;
    }
  }
  return 0;
}
