/*
 * XREFs of _NtGdiCreateServerMetaFile@24 @ 0x21EDF3
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiCreateServerMetaFile(int a1, size_t MaxCount, char *Src, int a4, int a5, int a6)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  int v10; // [esp+10h] [ebp-1Ch]

  if ( a1 != 1480934989 && a1 != 1599096397 || !Src || MaxCount > 0xFFFFFFD7 || MaxCount + 40 > 0x2710000 )
    return 0;
  v6 = (_DWORD *)HmgAlloc(MaxCount + 40, 21, 9);
  v7 = v6;
  if ( !v6 )
    return 0;
  v10 = *v6;
  v6[4] = a1;
  v6[5] = a4;
  v6[6] = a5;
  v6[7] = a6;
  v6[8] = MaxCount;
  if ( MaxCount )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned int)&Src[MaxCount] > _MmUserProbeAddress || &Src[MaxCount] < Src )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v6 + 9, Src, MaxCount);
  }
  v8 = v10;
  if ( v10 )
    _InterlockedDecrement(v7 + 2);
  else
    HmgFree(*v7);
  return v8;
}
