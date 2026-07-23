/*
 * XREFs of MiIsDriverPage @ 0x140327410
 * Callers:
 *     MiRemoveWsleList @ 0x14020BD70 (MiRemoveWsleList.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiAddWorkingSetEntries @ 0x1402B6CC0 (MiAddWorkingSetEntries.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x1403274A4 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1403275D8 (MmLockLoadedModuleListShared.c)
 */

_QWORD *__fastcall MiIsDriverPage(__int64 a1)
{
  unsigned __int64 v1; // rbx
  _QWORD *v2; // rax
  unsigned __int64 v3; // r8
  _QWORD *v4; // rbx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 17;
  v1 = a1 << 25 >> 16;
  MmLockLoadedModuleListShared(&v6);
  v2 = (_QWORD *)qword_140C4CDA0;
  if ( qword_140C4CDA0 )
  {
    do
    {
      v3 = *(v2 - 23);
      if ( v1 > v3 + (unsigned int)(*((_DWORD *)v2 - 42) - 1) )
      {
        v2 = (_QWORD *)v2[1];
      }
      else
      {
        if ( v1 >= v3 )
          break;
        v2 = (_QWORD *)*v2;
      }
    }
    while ( v2 );
  }
  v4 = v2 - 29;
  if ( !v2 )
    v4 = 0LL;
  MmUnlockLoadedModuleListShared(v6);
  return v4;
}
