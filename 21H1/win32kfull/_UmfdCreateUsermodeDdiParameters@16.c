/*
 * XREFs of _UmfdCreateUsermodeDdiParameters@16 @ 0x8B614
 * Callers:
 *     ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08 (-UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 */

int __fastcall UmfdCreateUsermodeDdiParameters(_DWORD *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  struct UmfdTls *v5; // eax
  int v6; // esi
  int result; // eax
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v5 = UmfdTls::EnsureTls();
  if ( !v5 )
    return -1073741801;
  v6 = *((_DWORD *)v5 + 3);
  if ( !v6 )
    return -1073740032;
  v9 = 0;
  result = (*(int (__thiscall **)(int, struct UmfdTls *, int *))(*(_DWORD *)v6 + 12))(v6, v5, &v9);
  if ( result >= 0 )
  {
    *a1 = v9;
    *a2 = *(_DWORD *)(v6 + 4);
    *a3 = *(_DWORD *)(v6 + 12);
    a3[1] = *(_DWORD *)(v6 + 16);
    *a4 = *(_BYTE *)(v6 + 20);
  }
  return result;
}
