/*
 * XREFs of _NtUserfnINSTRING@28 @ 0x16CB33
 * Callers:
 *     ?_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z @ 0x15F954 (-_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z.c)
 * Callees:
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINSTRING(int a1, int a2, int a3, char *a4, int a5, char a6, int a7)
{
  int v8; // [esp+0h] [ebp-3Ch]
  int v9; // [esp+4h] [ebp-38h]
  int v10; // [esp+8h] [ebp-34h]
  int v11; // [esp+Ch] [ebp-30h]
  unsigned int v12[3]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  memset(v12, 0, sizeof(v12));
  v13 = 0;
  if ( a2 == 325 || a2 == 397 )
  {
    a3 &= ~0x2000u;
  }
  else if ( a2 != 406 )
  {
    goto LABEL_7;
  }
  v13 = -1;
LABEL_7:
  ms_exc.registration.TryLevel = 0;
  if ( a7 )
    RtlInitLargeAnsiString(v12, a4);
  else
    RtlInitLargeUnicodeString(v12, a4);
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, unsigned int *, int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v12,
           a5,
           v8,
           v9,
           v10,
           v11);
}
