/*
 * XREFs of ?ResStrCmp@@YGHPAU_UNICODE_STRING@@0@Z @ 0x48902
 * Callers:
 *     ?SearchIconCache@@YGPAUtagCURSOR@@PAU1@GPAU_UNICODE_STRING@@0PAUtagCURSORFIND@@@Z @ 0x48862 (-SearchIconCache@@YGPAUtagCURSOR@@PAU1@GPAU_UNICODE_STRING@@0PAUtagCURSORFIND@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall ResStrCmp(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  USHORT Length; // ax
  PWSTR Buffer; // ecx
  UNICODE_STRING String; // [esp+10h] [ebp-2Ch] BYREF
  ULONG Value; // [esp+1Ch] [ebp-20h] BYREF
  int v8; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v8 = 0;
  Length = a1->Length;
  if ( a1->Length )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2->Length )
    {
      if ( !RtlEqualUnicodeString(a1, a2, 1u) )
        goto LABEL_11;
    }
    else
    {
      Buffer = a1->Buffer;
      if ( *Buffer != 35 )
        goto LABEL_11;
      Value = 0;
      String.Length = Length - 2;
      String.MaximumLength = Length - 2;
      String.Buffer = Buffer + 1;
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
      if ( (PWSTR)Value != a2->Buffer )
        goto LABEL_11;
    }
    v8 = 1;
LABEL_11:
    ms_exc.registration.TryLevel = -2;
    return v8;
  }
  if ( a1->Buffer != a2->Buffer )
    return v8;
  return 1;
}
