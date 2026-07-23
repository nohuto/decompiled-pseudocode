/*
 * XREFs of _RtlpDetermineDosPathNameType4@16 @ 0x4B2E400E
 * Callers:
 *     _RtlpGetLengthWithoutLastPathElement@16 @ 0x4B2E3F17 (_RtlpGetLengthWithoutLastPathElement@16.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 *     _RtlPrefixUnicodeString@12 @ 0x4B2E40C0 (_RtlPrefixUnicodeString@12.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 */

int __fastcall RtlpDetermineDosPathNameType4(int a1, _UNICODE_STRING *a2, int *a3, int *a4)
{
  char v4; // bl
  int v6; // eax
  bool v7; // zf
  int v8; // ecx
  int v10; // eax
  int v11; // eax
  _DWORD v12[2]; // [esp+Ch] [ebp-Ch] BYREF
  char v13; // [esp+15h] [ebp-3h]
  bool v14; // [esp+16h] [ebp-2h]
  char v15; // [esp+17h] [ebp-1h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v4 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a2 || !a3 || !a4 )
    return -1073741811;
  v6 = RtlDetermineDosPathNameType_Ustr(a2);
  v7 = a2->Length == 4;
  *a3 = v6;
  if ( v7 )
    goto LABEL_15;
  v4 = 1;
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    v15 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtRootSlash, a2, 1u) )
  {
    return 0;
  }
  if ( RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRoot, a2, 1u)
    || RtlEqualUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    v15 = 1;
  }
  else if ( !RtlPrefixUnicodeString((PUNICODE_STRING)&RtlpWin32NtUncRootSlash, a2, 1u) )
  {
    if ( !v15 )
    {
      v12[0] = *(_DWORD *)&a2->Length;
      v12[1] = a2->Buffer + 4;
      LOWORD(v12[0]) -= 8;
      HIWORD(v12[0]) -= 8;
      v10 = RtlDetermineDosPathNameType_Ustr(v12);
      v14 = v10 == 2;
      if ( v10 == 2 )
      {
        v8 = 0;
LABEL_28:
        *a4 |= 0x10u;
        v11 = *a4;
        goto LABEL_29;
      }
      *a4 |= 0x200u;
      v8 = 0;
      v14 = v10 == 2;
      goto LABEL_26;
    }
LABEL_15:
    v8 = 0;
    goto LABEL_27;
  }
  v8 = 0;
  v13 = 1;
  v14 = 0;
LABEL_26:
  if ( !v15 )
    goto LABEL_28;
LABEL_27:
  *a4 |= 0x400u;
  v11 = *a4;
  if ( v4 )
    goto LABEL_28;
LABEL_29:
  if ( v13 )
  {
    v11 |= 0x40u;
    *a4 = v11;
  }
  if ( v14 )
    *a4 = v11 | 0x20;
  return v8;
}
