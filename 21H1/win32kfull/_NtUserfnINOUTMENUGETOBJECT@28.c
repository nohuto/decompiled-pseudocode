/*
 * XREFs of _NtUserfnINOUTMENUGETOBJECT@28 @ 0x16C6F1
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserfnINOUTMENUGETOBJECT(int a1, int a2, int a3, void *a4, int a5, char a6, int a7)
{
  const void *v7; // esi
  _BYTE v9[20]; // [esp+10h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]
  int v11; // [esp+60h] [ebp+1Ch]

  memset(v9, 0, sizeof(v9));
  ms_exc.registration.TryLevel = 0;
  v7 = (const void *)_MmUserProbeAddress;
  if ( (unsigned int)a4 < _MmUserProbeAddress )
    v7 = a4;
  qmemcpy(v9, v7, sizeof(v9));
  ms_exc.registration.TryLevel = -2;
  v11 = ((int (__stdcall *)(int, int, int, _BYTE *, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, v9, a5);
  qmemcpy(a4, v9, 0x14u);
  return v11;
}
