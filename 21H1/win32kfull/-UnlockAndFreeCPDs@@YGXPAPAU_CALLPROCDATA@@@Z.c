/*
 * XREFs of ?UnlockAndFreeCPDs@@YGXPAPAU_CALLPROCDATA@@@Z @ 0xC541C
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 * Callees:
 *     <none>
 */

void __thiscall UnlockAndFreeCPDs(int *this)
{
  int v2; // edx
  int v3; // [esp+4h] [ebp-4h] BYREF

  while ( 1 )
  {
    v2 = *this;
    v3 = v2;
    if ( !v2 )
      break;
    *this = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 28) = 0;
    if ( (*(_BYTE *)(_HMPheFromObject(v3) + 13) & 1) == 0 )
      HMMarkObjectDestroy(v3);
    HMAssignmentUnlock(&v3);
  }
}
