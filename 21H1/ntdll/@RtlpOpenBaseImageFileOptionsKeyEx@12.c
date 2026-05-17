/*
 * XREFs of @RtlpOpenBaseImageFileOptionsKeyEx@12 @ 0x4B2E5F7F
 * Callers:
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     @RtlpOpenBaseImageFileOptionsKey@4 @ 0x4B2E5F35 (@RtlpOpenBaseImageFileOptionsKey@4.c)
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

int __fastcall RtlpOpenBaseImageFileOptionsKeyEx(_DWORD *a1, int a2, char a3)
{
  int result; // eax
  _DWORD v5[6]; // [esp+4h] [ebp-20h] BYREF
  _DWORD v6[2]; // [esp+1Ch] [ebp-8h] BYREF

  v5[0] = 24;
  v5[1] = 0;
  v5[3] = 576;
  v5[2] = &dword_4B281360;
  v5[4] = 0;
  v5[5] = 0;
  if ( a3 )
    result = ZwCreateKey(v6, a2, v5, 0, 0, 0, 0);
  else
    result = ZwOpenKey(v6, a2, v5);
  if ( result >= 0 )
  {
    *a1 = v6[0];
    return 0;
  }
  return result;
}
