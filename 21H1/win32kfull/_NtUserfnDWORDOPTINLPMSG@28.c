/*
 * XREFs of _NtUserfnDWORDOPTINLPMSG@28 @ 0x16B68E
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnDWORDOPTINLPMSG(int a1, int a2, int a3, ULONG a4, int a5, char a6, int a7)
{
  _DWORD *v7; // ecx
  const void *v8; // esi
  int v10; // [esp+0h] [ebp-48h]
  int v11; // [esp+4h] [ebp-44h]
  int v12; // [esp+8h] [ebp-40h]
  int v13; // [esp+Ch] [ebp-3Ch]
  _DWORD v14[8]; // [esp+10h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  memset(v14, 0, 0x1Cu);
  ms_exc.registration.TryLevel = 0;
  v7 = (_DWORD *)a4;
  if ( a4 )
  {
    v8 = (const void *)_MmUserProbeAddress;
    if ( a4 < _MmUserProbeAddress )
      v8 = (const void *)a4;
    qmemcpy(v14, v8, 0x1Cu);
    v7 = v14;
  }
  ms_exc.registration.TryLevel = -2;
  return ((int (__stdcall *)(int, int, int, _DWORD *, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, DWORD, EXCEPTION_POINTERS *, struct _EH3_EXCEPTION_REGISTRATION *))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v7,
           a5,
           v10,
           v11,
           v12,
           v13,
           v14[0],
           v14[1],
           v14[2],
           v14[3],
           v14[4],
           v14[5],
           v14[6],
           v14[7],
           ms_exc.old_esp,
           ms_exc.exc_ptr,
           ms_exc.registration.Next);
}
