/*
 * XREFs of _NtUserfnINSTRINGNULL@28 @ 0x1D04A
 * Callers:
 *     ?_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z @ 0x15F954 (-_InBoxString@@YGJJPAUtagWND@@IIJKKH@Z.c)
 * Callees:
 *     _RtlInitLargeAnsiString@8 @ 0x1D5FC (_RtlInitLargeAnsiString@8.c)
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINSTRINGNULL(int a1, int a2, int a3, int *a4, int a5, char a6, int a7)
{
  int *v7; // ecx
  int v9; // [esp+0h] [ebp-38h]
  int v10; // [esp+4h] [ebp-34h]
  int v11; // [esp+8h] [ebp-30h]
  int v12; // [esp+Ch] [ebp-2Ch]
  int v13; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+14h] [ebp-24h]
  int v15; // [esp+18h] [ebp-20h]
  int v16; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v7 = a4;
  if ( a4 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a7 )
      RtlInitLargeAnsiString(&v13, a4);
    else
      RtlInitLargeUnicodeString(&v13, a4);
    v7 = &v13;
    ms_exc.registration.TryLevel = -2;
  }
  return ((int (__stdcall *)(int, int, int, int *, int, int, int, int, int, int, int, int, int, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5,
           v9,
           v10,
           v11,
           v12,
           v13,
           v14,
           v15,
           v16,
           ms_exc.old_esp,
           ms_exc.exc_ptr,
           ms_exc.registration.Next);
}
